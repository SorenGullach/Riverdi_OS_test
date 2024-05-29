/*
 * Copyright 2024 Søren Gullach
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * You must include the following attribution in all copies or substantial portions of the Software:
 * "Søren Gullach <STM32_R7_OS@toolsbox.dk>"
 */

#include "Hardware.h"
#include "MemoryDefs.h"

#ifdef DEBUG
#include <stdarg.h>
#include <stdio.h>
void Printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	vprintf(format, args);
	va_end(args); 
}
#else
void Printf(const char *, ...) {}
#endif

ID_TypeDef *Chip_Id = (ID_TypeDef *)UID_BASE;
uint16_t *Chip_FlashSize = (uint16_t *)FLASHSIZE_BASE;
char *Chip_LineIdentifier = (char *)(0x1FF1E8C0);

#include <inttypes.h>
void DumpChipInfo()
{
	Printf("Chip id \t\t0x%lX\n", Chip_Id->Chip_Id);
	Printf("Chip Waf num \t\t%d,%d\n", Chip_Id->Vaf_NumX, Chip_Id->Vaf_NumY);
	Printf("Chip Lot num \t\t0x%X%X%X%X%X%X%X\n", 
		Chip_Id->Lot_Num[6], 
		Chip_Id->Lot_Num[5],
		Chip_Id->Lot_Num[4],
		Chip_Id->Lot_Num[3],
		Chip_Id->Lot_Num[2],
		Chip_Id->Lot_Num[1],
		Chip_Id->Lot_Num[0]);
	Printf("Chip FlashSize KBytes \t%ld 0x%lX\n", *Chip_FlashSize, *Chip_FlashSize);
	Printf("Chip Identifier \tSTM32%c%c%c%c\n\n", 
		Chip_LineIdentifier[3], 
		Chip_LineIdentifier[2], 
		Chip_LineIdentifier[1], 
		Chip_LineIdentifier[0]);
}

typedef struct {
	const char* name;
	unsigned long start;
	unsigned long end;
} MemRegion;

void PrintMemRegionInfo(const MemRegion* region)
{
	Printf("%-25s: 0x%08lX - 0x%08lX (%6ld bytes)\n", region->name, region->start, region->end, region->end - region->start);
}

void DumpMemInfo()
{
	// Define memory regions
	MemRegion regions[] = {
		{ "Text (Code)", (unsigned long)&_stext, (unsigned long)&_etext },
		{ "Data (Initialized)", (unsigned long)&_sdata, (unsigned long)&_edata },
		{ "RAM Data", (unsigned long)&_sramdata, (unsigned long)&_eramdata },
		{ "Fast Code", (unsigned long)&_sfastcode, (unsigned long)&_efastcode },
		{ "BSS (Uninitialized)", (unsigned long)&_sbss, (unsigned long)&_ebss },
		{ "Preinit Array", (unsigned long)&__preinit_array_start, (unsigned long)&__preinit_array_end },
		{ "Init Array", (unsigned long)&__init_array_start, (unsigned long)&__init_array_end },
		{ "Fini Array", (unsigned long)&__fini_array_start, (unsigned long)&__fini_array_end },
		{ "Exception Index", (unsigned long)&__exidx_start, (unsigned long)&__exidx_end },
		{ "Heap", (unsigned long)&__heap_start__, (unsigned long)&__heap_end__ },
		{ "Stack", (unsigned long)&_sstack, (unsigned long)&_estack },
		{ "SDRAM", (unsigned long)&_ssdram, (unsigned long)&_esdram },
	};

	// Sort memory regions by start address
	const int numRegions = sizeof(regions) / sizeof(regions[0]);
	for (int i = 0; i < numRegions - 1; ++i) {
		for (int j = 0; j < numRegions - i - 1; ++j) {
			if (regions[j].start > regions[j + 1].start) {
				MemRegion temp = regions[j];
				regions[j] = regions[j + 1];
				regions[j + 1] = temp;
			}
		}
	}

	// Print memory region information
	Printf("Memory Region Information Dump\n\n");
	for (int i = 0; i < numRegions; ++i) {
		PrintMemRegionInfo(&regions[i]);
	}
	Printf("\nMemory Region Information Dump End\n\n");
}

void DumpMemInfo(const char *info, uint32_t start, uint32_t end)
{
	Printf("%s:\n",info);
	Printf("  Start Address: 0x%lX\n", start);
	Printf("  End Address: 0x%lX\n", end);
	uint32_t size = end - start;
	Printf("  Size: %ld(0x%lX) bytes\n", size, size);
	Printf("\n");
}

void DumpMemInfo1()
{
	// Print a header for the memory dump
	Printf("Memory Region Information Dump\n\n");

	// Heap information
	DumpMemInfo("Heap", (uint32_t)&__heap_start__, (uint32_t)&__heap_end__);

	// Stack information
	DumpMemInfo("Stack", (uint32_t)&_sstack, (uint32_t)&_estack);

	// SDRAM information
	DumpMemInfo("SDRAM", (uint32_t)&_ssdram, (uint32_t)&_esdram);

	// Text section information (code)
	DumpMemInfo("Text Section (Code)", (uint32_t)&_stext, (uint32_t)&_etext);

	// Data section information (initialized data)
	DumpMemInfo("Data Section (Initialized Data)", (uint32_t)&_sdata, (uint32_t)&_edata);

	// RAM Data section information
	DumpMemInfo("RAM Data Section", (uint32_t)&_sramdata, (uint32_t)&_eramdata);

	// Fast Code section information
	DumpMemInfo("Fast Code Section", (uint32_t)&_sfastcode, (uint32_t)&_efastcode);

	// BSS section information (uninitialized data)
	DumpMemInfo("BSS Section (Uninitialized Data)", (uint32_t)&_sbss, (uint32_t)&_ebss);

	// Preinit array section information
	DumpMemInfo("Preinit Array Section", (uint32_t)&__preinit_array_start, (uint32_t)&__preinit_array_end);

	// Init array section information
	DumpMemInfo("Init Array Section", (uint32_t)&__init_array_start, (uint32_t)&__init_array_end);

	// Fini array section information
	DumpMemInfo("Fini Array Section", (uint32_t)&__fini_array_start, (uint32_t)&__fini_array_end);

	// Exidx section information
	DumpMemInfo("Exception Index Section", (uint32_t)&__exidx_start, (uint32_t)&__exidx_end);

	// Print a footer for the memory dump
	Printf("Memory Region Information Dump End\n\n");
}
