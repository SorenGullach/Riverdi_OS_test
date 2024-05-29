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

#include "TPDisplay.h"

hwEXTI3_IRQs *phwEXTI3_IRQs;

extern "C" void EXTI3_IRQHandler()
{
	assert(phwEXTI3_IRQs != NULL);
	phwEXTI3_IRQs->cbInterrupt();
}

// figure out how there was pressed
void CTPDisplay::UpdateState()
{
	const P_t SlideDelta = 500; // delta pix to change before being a slide
	switch (TPPoint.TipAction)
	{
	case glTouchPoint_t::eTipAction::Up:
		if (Packet.ContactCounts == 1)
		{
			if (Packet.Points[0].Tip)
			{
				TPPoint.TipAction = glTouchPoint_t::eTipAction::Tip;
				TPPoint.X = SX = Packet.Points[0].X;
				TPPoint.Y = SY = Packet.Points[0].Y;
				//	Printf("%s %d,%d\n", "Tip", TPPoint.X, TPPoint.Y);
			}
			else
			{
				TPPoint.TipAction = glTouchPoint_t::eTipAction::Up;
				TPPoint.X = Packet.Points[0].X;
				TPPoint.Y = Packet.Points[0].Y;
				//					Printf("%s %d,%d\n", "Up", TPPoint.X, TPPoint.Y);
			}
		}
		break;
	case glTouchPoint_t::eTipAction::Tip:
		if (Packet.ContactCounts == 1)
		{
			if (Packet.Points[0].Tip)
			{
				if (abs(Packet.Points[0].X - SX) > SlideDelta || abs(Packet.Points[0].Y - SY) > SlideDelta)
				{
					TPPoint.TipAction = glTouchPoint_t::eTipAction::Slide;
					TPPoint.DX = Packet.Points[0].X - TPPoint.X;
					TPPoint.DY = Packet.Points[0].Y - TPPoint.Y;
				}
				TPPoint.X = Packet.Points[0].X;
				TPPoint.Y = Packet.Points[0].Y;
				//		Printf("%s %d,%d %d,%d\n", TPPoint.State == sTPPoint::eState::Slide ? "Slide" : "Tip", TPPoint.X, TPPoint.Y, TPPoint.DX, TPPoint.DY);
			}
			else
			{
				TPPoint.TipAction = glTouchPoint_t::eTipAction::Up;
				TPPoint.X = Packet.Points[0].X;
				TPPoint.Y = Packet.Points[0].Y;
				//			Printf("%s %d,%d\n", "Up", TPPoint.X, TPPoint.Y);
			}
		}
		if (Packet.ContactCounts == 2)
		{
			TPPoint.TipAction = glTouchPoint_t::eTipAction::Zoom;
			TPPoint.X = Packet.Points[0].X;
			TPPoint.Y = Packet.Points[0].Y;
			TPPoint.DX = Packet.Points[1].X - TPPoint.X;
			TPPoint.DY = Packet.Points[1].Y - TPPoint.Y;
			TPPoint.ZX = TPPoint.ZY = 0;
			//			Printf("%s %d,%d %d,%d %d,%d\n", "Zoom", TPPoint.X, TPPoint.Y, TPPoint.DX, TPPoint.DY, TPPoint.ZX, TPPoint.ZY);
		}
		break;
	case glTouchPoint_t::eTipAction::Slide:
		if (Packet.ContactCounts == 1)
		{
			if (Packet.Points[0].Tip)
			{
				TPPoint.TipAction = glTouchPoint_t::eTipAction::Slide;
				TPPoint.DX = Packet.Points[0].X - TPPoint.X;
				TPPoint.DY = Packet.Points[0].Y - TPPoint.Y;
				//		TPPoint.X = Packet.Points[0].X;
				//		TPPoint.Y = Packet.Points[0].Y;
						//					Printf("%s %d,%d %d,%d\n", "Slide", TPPoint.X, TPPoint.Y, TPPoint.DX, TPPoint.DY);
			}
			else
			{
				TPPoint.TipAction = glTouchPoint_t::eTipAction::Up;
				TPPoint.X = Packet.Points[0].X;
				TPPoint.Y = Packet.Points[0].Y;
				//Printf("%s %d,%d\n", "Up", TPPoint.X, TPPoint.Y);
			}
		}
		break;
	case glTouchPoint_t::eTipAction::Zoom:
		if (Packet.ContactCounts == 1)
		{	
			TPPoint.TipAction = glTouchPoint_t::eTipAction::ZoomWait;
		}					
		if (Packet.ContactCounts == 2)
		{	
			TPPoint.TipAction = glTouchPoint_t::eTipAction::Zoom;
			TPPoint.X = Packet.Points[0].X;
			TPPoint.Y = Packet.Points[0].Y;
			int16_t DXt = Packet.Points[1].X - TPPoint.X;
			int16_t DYt = Packet.Points[1].Y - TPPoint.Y;
			TPPoint.ZX = DXt - TPPoint.DX;
			TPPoint.ZY = DYt - TPPoint.DY;
			TPPoint.DX = Packet.Points[1].X - TPPoint.X;
			TPPoint.DY = Packet.Points[1].Y - TPPoint.Y;
			//Printf("%s %d,%d %d,%d %d,%d\n", "Zoom", TPPoint.X, TPPoint.Y, TPPoint.DX, TPPoint.DY, TPPoint.ZX, TPPoint.ZY);
						
		}					
		break;
	case glTouchPoint_t::eTipAction::ZoomWait:
		if (Packet.ContactCounts == 1)
		{
			if (!Packet.Points[0].Tip)
			{
				TPPoint.TipAction = glTouchPoint_t::eTipAction::Up;
				TPPoint.X = Packet.Points[0].X;
				TPPoint.Y = Packet.Points[0].Y;
				//		Printf("%s %d,%d\n", "Up", TPPoint.X, TPPoint.Y);
			}
		}					
		break;
	}
	
	// test for slide action
	if (TPPoint.TipAction == glTouchPoint_t::eTipAction::Slide)
	{
		float Angle = atan2f((float) - TPPoint.DY, (float)TPPoint.DX);
//		Printf("Angle %d %d ", (int)(Angle * 100), (int)((TPPoint.DY*100 / TPPoint.DX)));
		
		const float L1 = 1*M_PI / 4;
		const float L3 = 3*L1;
		if (Angle <= -L3) TPPoint.SlideAction = glTouchPoint_t::Left;
		else if (Angle <= -L1) TPPoint.SlideAction = glTouchPoint_t::Down;
		else if (Angle <= L1) TPPoint.SlideAction = glTouchPoint_t::Right;
		else if (Angle <= L3) TPPoint.SlideAction = glTouchPoint_t::Up;
		else TPPoint.SlideAction = glTouchPoint_t::Left;
/*		
		switch (TPPoint.SlideAction)
		{
		case sTPPoint::None: Printf("None\n"); break;
		case sTPPoint::Right: Printf("Right\n"); break;
		case sTPPoint::Up: Printf("Up\n"); break;
		case sTPPoint::Down: Printf("Down\n"); break;
		case sTPPoint::Left: Printf("Left\n"); break;
		}
		*/
	}
	else
		TPPoint.SlideAction = glTouchPoint_t::None;
	
	if (TPPoint != TPPointOld && cbClass != nullptr)
	{
		//Printf(" Touch %d,%d %d,%d %d,%d\n", TPPoint.X, TPPoint.Y, TPPoint.DX, TPPoint.DY, TPPoint.ZX, TPPoint.ZY);
		cbClass->Touch(TPPoint);
		TPPointOld = TPPoint;
	}
}
