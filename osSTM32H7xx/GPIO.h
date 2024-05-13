/*
 * Copyright 2024 S�ren Gullach
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
 * "S�ren Gullach <STM32_R7_OS@toolsbox.dk>"
 */

#pragma once
#include <assert.h>

#include "stm32h7xx.h"
#include <Registers.h>

class hwGPIO
{
public:
	enum class eMode
	{
		Input = 0b00,
		Output = 0b01,
		//		Alternate = 0b10, // set by alt function
		Analog = 0b11,
		Int_Falling = 0b0100,
		Int_Rising = 0b1000,
		Int_Both = 0b1100,
	};
	enum class ePP
	{
		Float     = 0b0,
		PushPull  = 0b0,
		OpenDrian = 0b1,
	};
	enum class ePUPD
	{
		None     = 0b00,
		PullUp   = 0b01,
		PullDown = 0b10,
	};
	enum class eSpeed
	{
		Low      = 0b00,
		Medium   = 0b01,
		High     = 0b10,
		VeryHigh = 0b11
	};
	
	// Make GPIO Pin initialized elsewhere
	hwGPIO()
	{
	}
	// Make GPIO Pin initialized elsewhere
	hwGPIO(GPIO_TypeDef *pgpio, R_t<uint8_t, 0, 15>pin)
	{
		assert(pgpio != nullptr); 
		pGPIO = pgpio;
		Pin = pin;
	}
	// Make GPIO pin initialized
	hwGPIO(GPIO_TypeDef *pgpio, R_t<uint8_t, 0, 15>pin, eMode mode, ePP pp = ePP::Float, ePUPD pupd = ePUPD::None, eSpeed speed = eSpeed::High)
	{
		Init(pgpio, pin, mode, pp, pupd, speed);
	}
	hwGPIO(GPIO_TypeDef *pgpio, R_t<uint8_t, 0, 15>pin, R_t<uint8_t, 0, 15>af, ePP pp = ePP::Float, ePUPD pupd = ePUPD::None, eSpeed speed = eSpeed::High)
	{
		Init(pgpio, pin, af, pp, pupd, speed);
	}
	void Init(GPIO_TypeDef *pgpio, R_t<uint8_t, 0, 15>pin, eMode mode, ePP pp = ePP::Float, ePUPD pupd = ePUPD::None, eSpeed speed = eSpeed::High)
	{
		assert(pgpio != nullptr); 
		pGPIO = pgpio;
		Pin = pin;
		EnableClk();
		SetMode(mode);
		SetDriver(pp);
		SetPuPD(pupd);
		SetSpeed(speed);
	}
	void Init(GPIO_TypeDef *pgpio, R_t<uint8_t, 0, 15>pin, R_t<uint8_t, 0, 15>af, ePP pp = ePP::Float, ePUPD pupd = ePUPD::None, eSpeed speed = eSpeed::High)
	{
		assert(pgpio != nullptr); 
		assert(pin <= 15);
		pGPIO = pgpio;
		Pin = pin;
		EnableClk();
		SetMode(af);
		SetDriver(pp);
		SetPuPD(pupd);
		SetSpeed(speed);
	}

	void On()	{ Set(); }
	void Off()	{ Reset(); }
	void High()	{ Set(); }
	void Low()	{ Reset(); }
	void Set() { assert(pGPIO != nullptr); pGPIO->BSRR = 1 << Pin; }
	void Reset() { assert(pGPIO != nullptr); pGPIO->BSRR = 1 << (Pin + 16); }
	void Toggle() {	Level() ? Reset() : Set(); }
	bool Level() { assert(pGPIO != nullptr); return pGPIO->IDR & (1 << Pin); }
	void Level(bool l) { l ? Set() : Reset(); }
	bool IsHigh() {return Level(); }
	bool IsLow() {return !Level(); }
	bool IsOn() {return Level(); }
	bool IsOff() {return !Level(); }
	
	
private:
	GPIO_TypeDef *pGPIO = nullptr;
	R_t<uint8_t, 0, 15>Pin = 0;
	
	void EnableClk()
	{
		if (pGPIO == GPIOA)
			RCC->AHB4ENR |= RCC_AHB4ENR_GPIOAEN;
		if (pGPIO == GPIOB)
			RCC->AHB4ENR |= RCC_AHB4ENR_GPIOBEN;
		if (pGPIO == GPIOC)
			RCC->AHB4ENR |= RCC_AHB4ENR_GPIOCEN;
		if (pGPIO == GPIOD)
			RCC->AHB4ENR |= RCC_AHB4ENR_GPIODEN;
		if (pGPIO == GPIOE)
			RCC->AHB4ENR |= RCC_AHB4ENR_GPIOEEN;
		if (pGPIO == GPIOF)
			RCC->AHB4ENR |= RCC_AHB4ENR_GPIOFEN;
		if (pGPIO == GPIOG)
			RCC->AHB4ENR |= RCC_AHB4ENR_GPIOGEN;
		if (pGPIO == GPIOH)
			RCC->AHB4ENR |= RCC_AHB4ENR_GPIOHEN;
		if (pGPIO == GPIOI)
			RCC->AHB4ENR |= RCC_AHB4ENR_GPIOIEN;
		if (pGPIO == GPIOJ)
			RCC->AHB4ENR |= RCC_AHB4ENR_GPIOJEN;
#ifdef GPIOK
		if (pGPIO == GPIOK)
			RCC->AHB4ENR |= RCC_AHB4ENR_GPIOKEN;
#endif // GPIOK
		else
			assert("Wrong port");
	}

	void SetMode(R_t<uint8_t, 0, 15>af)
	{
		pGPIO->MODER &= ~(0b11UL << 2*Pin); // 00
		pGPIO->MODER |= 0b10UL << 2*Pin; // AF
		if (Pin < 8)
		{
			pGPIO->AFR[0] &= ~(0xFUL << 4*Pin);
			pGPIO->AFR[0] |= (uint32_t)af << 4*Pin;
		}
		else
		{
			pGPIO->AFR[1] &= ~(0xFUL << 4*(Pin - 8));
			pGPIO->AFR[1] |= (uint32_t)af << 4*(Pin - 8);
		}
	}

	void SetMode(eMode mode)
	{
		pGPIO->MODER &= ~(0b11UL << 2*Pin); // 00
		if (((uint32_t)mode & 0B1100) != 0) // interrupt
		{
			RCC->APB4ENR |= RCC_APB4ENR_SYSCFGEN;
			
			volatile uint32_t *pEXTICR;
			if (/*Pin >= 0 && */Pin <= 3)
				pEXTICR = &(SYSCFG->EXTICR[0]);
			else if (Pin >= 4 && Pin <= 7)
				pEXTICR = &(SYSCFG->EXTICR[1]);
			else if (Pin >= 8 && Pin <= 11)
				pEXTICR = &(SYSCFG->EXTICR[2]);
			else if (Pin >= 12 && Pin <= 15)
				pEXTICR = &(SYSCFG->EXTICR[3]);
			else
			{
				assert(false && "More code");
			}

			if (pGPIO == GPIOA) {}
			if (pGPIO == GPIOB) {} 
			if (pGPIO == GPIOC) {}
			if (pGPIO == GPIOD) {}
			if (pGPIO == GPIOE) {}
			if (pGPIO == GPIOF) {}
			if (pGPIO == GPIOG) {}
			if (pGPIO == GPIOH) 
			{
				*pEXTICR &= ~(0B1111 << (Pin * 4));
				*pEXTICR |= (0B0111 << (Pin * 4));
			}
			if (pGPIO == GPIOI) {}
			if (pGPIO == GPIOJ) {}
#ifdef GPIOK
			if (pGPIO == GPIOK) {}
#endif // GPIOK
			else
				assert("Wrong port");

			uint32_t Falling = ((uint32_t)mode & (uint32_t)eMode::Int_Falling) ? 1:0;
			uint32_t Rising = ((uint32_t)mode & (uint32_t)eMode::Int_Rising) ? 1 : 0;
			if (/*Pin >= 0 && */Pin <= 21)
			{
				EXTI->RTSR1 &= ~(1U << Pin);
				EXTI->RTSR1 |= (Rising << Pin);
				EXTI->FTSR1 &= ~(1U << Pin);
				EXTI->FTSR1 |= (Falling << Pin);
				}
			else if (Pin == 49)
			{
				EXTI->RTSR2 &= ~(1U << 17);
				EXTI->RTSR2 |= (Rising << 17);
				EXTI->FTSR2 &= ~(1U << 17);
				EXTI->FTSR2 |= (Falling << 17);
			}
			else if (Pin == 51)
			{
				EXTI->RTSR2 &= ~(1U << 19);
				EXTI->RTSR2 |= (Rising << 19);
				EXTI->FTSR2 &= ~(1U << 19);
				EXTI->FTSR2 |= (Falling << 19);
			}
			else if (Pin == 82)
			{
				EXTI->RTSR3 &= ~(1U << 19);
				EXTI->RTSR3 |= (Rising << 19);
				EXTI->FTSR3 &= ~(1U << 19);
				EXTI->FTSR3 |= (Falling << 19);
			}
			else if (Pin >= 84 && Pin <= 86)
			{
				EXTI->RTSR3 &= ~(1U << (20 + (Pin - 84)));
				EXTI->RTSR3 |= (Rising << (20 + (Pin - 84)));
				EXTI->FTSR3 &= ~(1U << (20 + (Pin - 84)));
				EXTI->FTSR3 |= (Falling << (20 + (Pin - 84)));
			}
			else
			{
				assert(false && "More code");
			}
							
		}
		pGPIO->MODER |= (((uint32_t)mode) & 0B0011) << 2*Pin; 
	}
	void SetDriver(ePP pp)
	{
		if (pp == ePP::OpenDrian)
			pGPIO->OTYPER |= 1UL << Pin;
		else			
			pGPIO->OTYPER &= ~(1UL << Pin);
	}
	void SetPuPD(ePUPD pupd)
	{
		pGPIO->PUPDR &= ~(0b11UL << 2*Pin); // 00
		pGPIO->PUPDR |= (uint32_t)pupd << 2*Pin;
	}
	void SetSpeed(eSpeed speed)
	{
		pGPIO->OSPEEDR &= ~(0b11UL << 2*Pin); // 00
		pGPIO->OSPEEDR |= (uint32_t)speed << 2*Pin; 
	}
};

