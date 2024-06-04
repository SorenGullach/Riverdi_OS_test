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

#pragma once

#include <stm32h7xx.h>
#include <assert.h>

#include "RCC.h"

/**
 * @class hwDMA2D
 * @brief A class to initialize and control the DMA2D peripheral on STM32H7.
 */
class hwDMA2D {
public:
	/**
	 * @brief Constructor for hwDMA2D class.
	 */
	hwDMA2D() {}

	/**
	 * @brief Initializes the DMA2D peripheral.
	 * 
	 * This method enables the DMA2D clock, resets the peripheral, and sets
	 * the color mode to ARGB8888 for the foreground, background, and output.
	 */
	void Init() {
		// Enable the DMA2D clock
		RCC->AHB3ENR |= RCC_AHB3ENR_DMA2DEN;

		// Reset the DMA2D peripheral
		RCC->AHB3RSTR |= RCC_AHB3RSTR_DMA2DRST;
		RCC->AHB3RSTR &= ~RCC_AHB3RSTR_DMA2DRST;

		// Set the DMA2D mode to memory-to-memory
		DMA2D->CR = 0; // Mode 0 is memory-to-memory

		// Set the color mode to ARGB8888
		DMA2D->FGPFCCR = 0x00; // fg color mode ARGB8888
		DMA2D->BGPFCCR = 0x00; // bg color mode ARGB8888
		DMA2D->OPFCCR = 0x00; // output color mode ARGB8888
	}

	/**
	 * @brief Starts a memory-to-memory transfer.
	 * 
	 * @param dstAddress Destination address.
	 * @param width Width of the transfer in pixels.
	 * @param height Height of the transfer in lines.
	 * @param srcAddress Source address.
	 * @param lineoffset Line offset for source and destination.
	 */
	void StartM2MTransfer(void*  dstAddress, uint32_t width, uint32_t height, void* srcAddress, uint32_t lineoffset) 
	{
		while ((DMA2D->CR & DMA2D_CR_START) != 0) __asm("");

		// Set the DMA2D mode to memory-to-memory
		DMA2D->CR = 0B000 << DMA2D_CR_MODE_Pos; // 000: Memory - to - memory(FG fetch only)

		// the SDRAM is slow
		uint8_t deadTime = hwSysClock::C1Clk() / 5'000'000;
			DMA2D->AMTCR = (1 << DMA2D_AMTCR_EN_Pos) | (deadTime << DMA2D_AMTCR_DT_Pos); // Enable and set dead-time
			
		DMA2D->OPFCCR = 0B000; // ARGB8888
	
		// Configure source and destination addresses
		DMA2D->FGMAR = (int32_t)srcAddress;
		DMA2D->FGOR = lineoffset;
		DMA2D->OMAR = (int32_t)dstAddress;
		DMA2D->OOR = lineoffset;

		// Set the number of lines and pixels per line
		DMA2D->NLR = (height << DMA2D_NLR_NL_Pos) | (width << DMA2D_NLR_PL_Pos);

		// Start the transfer
		DMA2D->CR |= DMA2D_CR_START;
	}

	/**
	 * @brief Starts a register-to-memory transfer to fill a region with a solid color.
	 *
	 * This function configures and starts a DMA2D transfer to fill a specified
	 * region of memory with a given color.
	 *
	 * @param dstAddress Pointer to the destination address.
	 * @param width The width of the region to fill in pixels.
	 * @param height The height of the region to fill in lines.
	 * @param lineoffset The line offset for the destination.
	 * @param A The alpha component of the color.
	 * @param R The red component of the color.
	 * @param G The green component of the color.
	 * @param B The blue component of the color.
	 */
	void StartFillTransfer(
	    void*  dstAddress, 
		uint32_t width,
		uint32_t height,
		uint32_t lineoffset,
		uint8_t A,
		uint8_t R,
		uint8_t G,
		uint8_t B)
	{
		while((DMA2D->CR & DMA2D_CR_START) != 0) __asm("");
		
		// Set the DMA2D mode to register-to-memory
		DMA2D->CR = 0B011 << DMA2D_CR_MODE_Pos; // 011: Register-to-memory (no FG nor BG, only output stage active)

		// The SDRAM is slow, calculate dead time
//		uint8_t deadTime = hwSysClock::C1Clk() / 5'000'000;
//		DMA2D->AMTCR = (1 << DMA2D_AMTCR_EN_Pos) | (deadTime << DMA2D_AMTCR_DT_Pos); // Enable and set dead-time

		DMA2D->OPFCCR = 0B000; // ARGB8888

		// Configure destination address and line offset
		DMA2D->OMAR = (int32_t)dstAddress;
		DMA2D->OOR = lineoffset;
    
		// Set the color
		DMA2D->OCOLR = (A << DMA2D_OCOLR_ALPHA_1_Pos) | (R << DMA2D_OCOLR_RED_1_Pos) | (G << DMA2D_OCOLR_GREEN_1_Pos) | (B << DMA2D_OCOLR_BLUE_1_Pos);

		// Set the number of lines and pixels per line
		DMA2D->NLR = (height << DMA2D_NLR_NL_Pos) | (width << DMA2D_NLR_PL_Pos);

		// Start the transfer
		DMA2D->CR |= DMA2D_CR_START;
	}

	/**
	 * @brief Stops the current transfer.
	 * 
	 * This method aborts any ongoing transfer by setting the ABORT bit.
	 */
	void StopTransfer() {
		// Abort the transfer
		DMA2D->CR |= DMA2D_CR_ABORT;
	}

	/**
	 * @brief Checks if the transfer is complete.
	 * 
	 * @return True if the transfer is complete, false otherwise.
	 */
	bool IsTransferComplete() 
	{
		// Check if the transfer is complete
		return (DMA2D->CR & DMA2D_CR_START) == 0;
	}
};
