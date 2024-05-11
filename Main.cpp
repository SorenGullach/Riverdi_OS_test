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

#include "SysTick.h"
#include "RCC.h"
#include "PWR.h"
#include "FMC.h"
#include "GPIO.h"

#include "GUIApplication.h"

// create an IO pin for an LED connected to GPIOJ, pin 10
hwGPIO LedGUI(GPIOJ, 10, hwGPIO::eMode::Output, hwGPIO::ePP::PushPull);

///////////////////////////////////
hwFMC FMCController;

///////////////////////////////////
GUIApplication GUI;

int main()
{
	// Initialize SysTick timer
	hwSysTick::Init();

	// Initialize hardware
	Printf("HW Init CM7\n");
	hwPWR::SupplyConfiguration(hwPWR::eSupplyConfigurations::C1); // Riverdi 7" uses this
	hwSysClock::Setup(); // Setup RCC clock

	// Update system core clock
	hwSysClock::SystemCoreClockUpdate();

	// Reinitialize SysTick with new clock settings
	hwSysTick::Init();
	// Initialize FMC
	FMCController.Init();

	Printf("HW Init done CM7\n");
	
	// Initialize GUI
	GUI.Init();

	while (1)
	{
		// Toggle the LED
		LedGUI.Toggle();
		osDelay(1000); // Delay for x milliseconds
	}
}
