#include <stdlib.h>
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

#include "I2C.h"
#include "glTypes.h"

class hwEXTI3_IRQs;
extern hwEXTI3_IRQs *phwEXTI3_IRQs;
class hwEXTI3_IRQs
{
public:
	hwEXTI3_IRQs()
	{
		phwEXTI3_IRQs = this;
		
	}
	void Init()
	{
		EXTI->IMR1 = 1U << 3;

		Enable();
	}
	void Enable()
	{
		
		NVIC_SetPriority(EXTI3_IRQn, (7UL << __NVIC_PRIO_BITS) - 1UL);
		NVIC_EnableIRQ(EXTI3_IRQn);
	}
	void Disable()
	{
		NVIC_DisableIRQ(EXTI3_IRQn);
	}
	void cbInterrupt()
	{
		if ((EXTI->PR1 & EXTI_PR1_PR3) != 0)
		{
			// clear interrupt
			EXTI->PR1 = EXTI_PR1_PR3;
			cbEXTI_3();
		}
	}
	
	virtual void cbEXTI_3() = 0; // this function is called from the GPIO interrupt
};

class CTPDisplay :	hwI2C1, private hwEXTI3_IRQs
{
public:
	void Init(cbDisplay *cb)
	{
		cbClass = cb;
		hwI2C1::Init();
		hwEXTI3_IRQs::Init();
		
		// reset touchscreen controler
		Reset();
	}

private:
	glTouchPoint_t TPPoint, TPPointOld;
	cbDisplay *cbClass = nullptr;

	hwGPIO CPTInterrupt {GPIOH, 3, hwGPIO::eMode::Int_Falling, hwGPIO::ePP::Float, hwGPIO::ePUPD::PullUp }
	;
	hwGPIO CPTReset {GPIOC, 14, hwGPIO::eMode::Output, hwGPIO::ePP::PushPull } 
	;

	// reset touchscreen controler
	void Reset()
	{
		CPTReset.High();
		osDelay(10);
		CPTReset.Low();
		osDelay(10);
		CPTReset.High();
		osDelay(10);
	}

	struct PanelInformation
	{
		uint16_t Xmax;
		uint16_t Ymax;
		uint16_t RxChannel;
		uint16_t TxChannel;
		uint8_t TouchNumber;
		uint8_t KeyBumber;
		uint8_t TotalICNumber;
		uint8_t ModeNumber;
		uint8_t ReportFormat;
		uint8_t DieNum;
		uint8_t FlashBlock;
	} __PACKED;
	static_assert(sizeof(PanelInformation) == 15, "Wrong size");

	PanelInformation Information;
	void ReadPanelInformation()
	{
		if (hwI2C::SendCmd(0x41, 0x20)) // Panel information
		{
			Printf("Touch send\n");
			uint8_t NData = hwI2C::Read(0x41, (uint8_t*)&Information, sizeof(Information));
			if (NData == sizeof(Information))
			{
				Printf("   Touch information\n");
				Printf("   XMax,YMax %d,%d\n", Information.Xmax, Information.Ymax);
				Printf("   TouchNumber %d KeyBumber %d\n", Information.TouchNumber, Information.KeyBumber);
			}
		}
		else
		{
			Printf("   Touch information failed\n");
		}
	}
	
	struct ReportIDFormat
	{
		uint8_t PointId : 6;		
		uint8_t Tip : 1;		
		uint8_t R1 : 1;		
		uint16_t X, Y;
	} __PACKED;
	static_assert(sizeof(ReportIDFormat) == 5, "Wrong size");

	struct PacketFormat
	{
		uint8_t Id;
		ReportIDFormat Points[10];
		uint8_t R1[10];		
		uint8_t ContactCounts;		
		uint8_t R2;		
		uint8_t Crc;		
	} __PACKED;
	static_assert(sizeof(PacketFormat) == 64, "Wrong size");
	
	PacketFormat Packet;
	int16_t SX, SY;
	virtual void cbEXTI_3() override
	{
//		if (Information.DieNum == 0)
	//		ReadPanelInformation();
		
		//		Printf("Touch\n");
		if (hwI2C::SendCmd(0x41, 0x10))
		{
			//	Printf("Touch send\n");
			uint8_t NData = hwI2C::Read(0x41, (uint8_t*)&Packet, sizeof(Packet));
			if (NData == sizeof(Packet))
			{
				//		Printf("Touch read %d Points %d\n",NData, Packet.ContactCounts );
			/*	for (int i = 0; i < Packet.ContactCounts; i++)
				{
					Printf("%d %s %d,%d\n",
						i,
						Packet.Points[i].Tip ? "Tip":"Up ",
						Packet.Points[i].X,
						Packet.Points[i].Y);
				}*/
				// figure out how there was pressed
				if(Packet.ContactCounts>0)
					UpdateState();
			}
		}
		else
		{
			// reset touchscreen controler
			CPTReset.Low();
			CPTReset.Low();
			CPTReset.Low();
			CPTReset.High();
		}
	}

	// figure out how there was pressed
	void UpdateState();
};
