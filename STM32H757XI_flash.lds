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

/* Entry point of the program, typically the reset handler */
ENTRY(Reset_Handler)

/* Memory layout definition: Defines the various memory regions of the microcontroller */
MEMORY
{
    FLASH (RX)    : ORIGIN = 0x08000000, LENGTH = 1M          /* Internal FLASH memory: read/execute */
    DTCMRAM (RWX) : ORIGIN = 0x20000000, LENGTH = 128K        /* Internal fast RAM: read/write/execute */
    ITCMRAM (RWX) : ORIGIN = 0x00000000, LENGTH = 64K         /* Internal fast RAM: read/write/execute */
    RAM_D1 (RWX)  : ORIGIN = 0x24000000, LENGTH = 512K        /* Internal RAM: read/write/execute */
    QSPI (RX)     : ORIGIN = 0x90000000, LENGTH = 128M        /* External QSPI FLASH: read/execute */
    SHARED (XRW)  : ORIGIN = 0x38000000, LENGTH = 64K         /* Shared SRAM4: execute/read/write */
    BKPSRAM (XRW) : ORIGIN = 0x38800000, LENGTH = 4K          /* Backup SRAM4: execute/read/write */
    SDRAM (RWX)   : ORIGIN = 0xD0000000, LENGTH = 8M          /* External SDRAM: read/write/execute */
}

/* Define minimum heap size */
_Min_Heap_Size = 0xD000;  /* Minimum required amount of heap */

/* End of stack: calculated based on the end of DTCMRAM memory */
_estack = ORIGIN(DTCMRAM) + LENGTH(DTCMRAM) - 16;  /* End of DTCMRAM for stack */

/* Define memory sections */
SECTIONS
{
    /* Interrupt vector table */
    .isr_vector :
    {
        . = ALIGN(4);               /* Ensure the section starts at a 4-byte aligned address */
        KEEP(*(.isr_vector))        /* Keep the interrupt vector table in the output file */
        . = ALIGN(4);               /* Align the end of the section */
    } > FLASH                       /* Place this section in FLASH */

    /* Code (text) section */
    .text :
    {
        . = ALIGN(4);               /* Ensure 4-byte alignment */
        PROVIDE(_stext = .);        /* Define start address of text section */
        *(.text)                    /* Include all .text sections from the object files */
        *(.text*)                   /* Include all .text* sections */
        *(.rodata)                  /* Include read-only data */
        *(.rodata*)                 /* Include all .rodata* sections */
        *(.glue_7)                  /* ARM glue code */
        *(.glue_7t)                 /* ARM glue code */
        KEEP(*(.init))              /* Keep initialization code */
        KEEP(*(.fini))              /* Keep finalization code */
        . = ALIGN(4);               /* Align the end of the section */
        PROVIDE(_etext = .);        /* Define end address of text section */
    } > FLASH                       /* Place this section in FLASH */

    /* ARM exception tables (unwind information) */
    .ARM.extab :
    {
        . = ALIGN(4);               /* Ensure 4-byte alignment */
        *(.ARM.extab)               /* ARM exception table */
        *(.gnu.linkonce.armextab.*) /* ARM exception table (link once) */
        . = ALIGN(4);               /* Align the end of the section */
    } > FLASH                       /* Place this section in FLASH */

    .exidx :
    {
        . = ALIGN(4);               /* Ensure 4-byte alignment */
        PROVIDE(__exidx_start = .); /* Define start address of exception index */
        *(.ARM.exidx*)              /* ARM exception index */
        . = ALIGN(4);               /* Align the end of the section */
        PROVIDE(__exidx_end = .);   /* Define end address of exception index */
    } > FLASH                       /* Place this section in FLASH */

    /* ARM attributes section */
    .ARM.attributes :
    {
        *(.ARM.attributes)          /* ARM attributes */
    } > FLASH                       /* Place this section in FLASH */

    /* Pre-initialized data */
    .preinit_array :
    {
        PROVIDE(__preinit_array_start = .); /* Start address of pre-init array */
        KEEP(*(.preinit_array*))            /* Keep pre-initialized data */
        PROVIDE(__preinit_array_end = .);   /* End address of pre-init array */
    } > FLASH                       /* Place this section in FLASH */

    /* Initialization data */
    .init_array :
    {
        PROVIDE(__init_array_start = .);    /* Start address of init array */
        KEEP(*(SORT(.init_array.*)))        /* Keep sorted init array data */
        KEEP(*(.init_array*))               /* Keep init array data */
        PROVIDE(__init_array_end = .);      /* End address of init array */
    } > FLASH                       /* Place this section in FLASH */

    /* Finalization data */
    .fini_array :
    {
        PROVIDE(__fini_array_start = .);    /* Start address of fini array */
        KEEP(*(.fini_array*))               /* Keep finalization data */
        KEEP(*(SORT(.fini_array.*)))        /* Keep sorted finalization data */
        PROVIDE(__fini_array_end = .);      /* End address of fini array */
    } > FLASH                       /* Place this section in FLASH */

    /* Initialized data section */
    .data :
    {
        . = ALIGN(4);               /* Ensure 4-byte alignment */
        PROVIDE(_sdata = .);        /* Start address of data section */
        PROVIDE(__data_start__ = _sdata); /* Define start address of data */
        *(.data)                    /* Include all .data sections */
        *(.data*)                   /* Include all .data* sections */
        . = ALIGN(4);               /* Align the end of the section */
        PROVIDE(_edata = .);        /* End address of data section */
        PROVIDE(__data_end__ = _edata); /* Define end address of data */
    } > DTCMRAM AT >FLASH           /* Place this section in DTCMRAM */

    _sidata = LOADADDR(.data);      /* Load address of data section */

    /* RAM data section */
    .ramdata :
    {
        . = ALIGN(4);               /* Ensure 4-byte alignment */
        PROVIDE(_sramdata = .);     /* Start address of RAM data section */
        *(.ramdata)                 /* Include all .ramdata sections */
        *(.ramdata*)                /* Include all .ramdata* sections */
        . = ALIGN(4);               /* Align the end of the section */
        PROVIDE(_eramdata = .);     /* End address of RAM data section */
    } > RAM_D1                      /* Place this section in RAM_D1 */

    /* Fast code section */
    .fastcode :
    {
        . = ALIGN(4);               /* Ensure 4-byte alignment */
        PROVIDE(_sfastcode = .);    /* Start address of fast code section */
        *(.fastcode)                /* Include all .fastcode sections */
        *(.fastcode*)               /* Include all .fastcode* sections */
        . = ALIGN(4);               /* Align the end of the section */
        PROVIDE(_efastcode = .);    /* End address of fast code section */
    } > ITCMRAM AT > FLASH          /* Place this section in ITCMRAM */

    _sifastcode = LOADADDR(.fastcode); /* Load address of fast code section */

    /* Uninitialized data (bss) section */
    .bss :
    {
        . = ALIGN(4);               /* Ensure 4-byte alignment */
        PROVIDE(_sbss = .);         /* Start address of bss section */
        PROVIDE(__bss_start__ = _sbss); /* Define start address of bss */
        *(.bss)                     /* Include all .bss sections */
        *(.bss*)                    /* Include all .bss* sections */
        *(COMMON)                   /* Include common symbols */
        . = ALIGN(4);               /* Align the end of the section */
        PROVIDE(_ebss = .);         /* End address of bss section */
        PROVIDE(__bss_end__ = _ebss); /* Define end address of bss */
    } > DTCMRAM                     /* Place this section in DTCMRAM */

    PROVIDE(end = .);               /* Define end address of all sections */

    /* External SDRAM section (not loaded initially) */
    .sdram (NOLOAD) :
    {
        . = ALIGN(4);               /* Ensure 4-byte alignment */
        PROVIDE(_ssdram = .);       /* Start address of SDRAM section */
        KEEP(*(.sdram))             /* Keep SDRAM section */
        KEEP(*(.sdram*))            /* Include all .sdram* sections */
        . = . + LENGTH(SDRAM);      /* Use all (its not dynamic alocated) */
        . = ALIGN(4);               /* Align the end of the section */
        PROVIDE(_esdram = .);       /* End address of SDRAM section */
    } > SDRAM                       /* Place this section in SDRAM */

    /* Heap section (not loaded initially) */
    .heap (NOLOAD) :
    {
        . = ALIGN(4);               /* Ensure 4-byte alignment */
        PROVIDE(__heap_start__ = .); /* Start address of heap section */
        KEEP(*(.heap))              /* Keep heap section */
        . = . + _Min_Heap_Size;     /* Define minimum heap size */
        . = ALIGN(4);               /* Align the end of the section */
        PROVIDE(__heap_end__ = .);  /* End address of heap section */
        FILL(0xEAEA);               /* Fill unused heap space with 0xEAEA */
    } > DTCMRAM                     /* Place this section in DTCMRAM */

    __StackLimit = __heap_end__;    /* Define stack limit based on heap end */
    _sstack = __heap_end__;         /* Start of stack is at the end of the heap */
    Stack_Size = _estack - __heap_end__; /* Calculate stack size */

    /* Reserved space for stack (not loaded initially) */
    .reserved_for_stack (NOLOAD) :
    {
        . = ALIGN(4);               /* Ensure 4-byte alignment */
        KEEP(*(.reserved_for_stack)) /* Keep reserved stack space */
        . = . + Stack_Size;         /* Define stack size */
        . = ALIGN(4);               /* Align the end of the section */
        FILL(0xACAC);               /* Fill unused stack space with 0xACAC */
    } > DTCMRAM                     /* Place this section in DTCMRAM */
}

