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

#include "glWidgets.h"
#include "TFTDisplay.h"
#include "TPDisplay.h"

#include <mutex>

#include "glPage.h"

class glMain : protected glVideoMemory, private cbDisplay
{
public:
	void Init()
	{
		Display.Init(this); // the display
		Touch.Init(this); // for touch control
		
		// Find the size of the display + Display buffer
		glVideoMemory::Init(Display.Width(), Display.Height(), (glARGB_t *)SDRAM_START);

		// back color for background
		glColor_t bg = glColor_t(glColors::GREEN);
		Display.BackgroundColor(bg.R, bg.G, bg.B);
		// layer
		Display.Layer(1, pVM, 0, 0, 0 + _ScreenWidth, 0 + _ScreenHeight);
		// blending
		Display.BlendingFactors(1, eBlendingFactor1::F1_CA, eBlendingFactor2::F2_CA, 255);
		glColor_t df = glColor_t(glColors::RED);
		Display.DefaultColor(1, df.A, df.R, df.G, df.B);
		glColor_t ck = glColor_t(glColors::BLACK);
		Display.ColorKey(1, ck.R, ck.G, ck.B);
	}
	
	void AddPage(glPage *page)
	{
		page->MoveTo(gl2DPoint_t(0, 0, Display.Width() - 1, Display.Height() - 1));
		ChainPages.Add(page);
		//page->Init();
		
		if (pCurrentPage == nullptr)
			pCurrentPage = ChainPages.Head();
	}
	
private:
	// Display to draw on
	TFTDisplay Display;
	// Touch control
	CTPDisplay Touch;
	
	glChain<glPage> ChainPages;
	glPage *pCurrentPage = nullptr;
	
public:
	void cbTouch(glTouchPoint_t &point) override
	{
		if (pCurrentPage == nullptr) return;
		bool Handled = false;
		pCurrentPage->UpdateState(point, Handled);
		
		switch (pCurrentPage->EventAction.EventType)
		{
		case glEvent::eEventType::Slide:
			if (pCurrentPage->EventAction.U.Slide.Action == glTouchPoint_t::Right && pCurrentPage->Prev() != nullptr)			
			{
				((glPage *)pCurrentPage->Prev())->InvalidateMe();
				pCurrentPage->EventAction.U.Slide.Action = glTouchPoint_t::None; 
				pCurrentPage = (glPage *)(pCurrentPage->Prev());
				//Printf("%s Currentpage\n", pCurrentPage->Name);
			}
			if (pCurrentPage->EventAction.U.Slide.Action == glTouchPoint_t::Left && pCurrentPage->Next() != nullptr)			
			{
				((glPage *)pCurrentPage->Next())->InvalidateMe();
				pCurrentPage->EventAction.U.Slide.Action = glTouchPoint_t::None; 
				pCurrentPage = (glPage *)(pCurrentPage->Next());
				//Printf("%s Currentpage\n", pCurrentPage->Name);
			}
			break;
		case glEvent::eEventType::Click:
		case glEvent::eEventType::None:
			break;
		}
		pCurrentPage->EventAction.EventType = glEvent::eEventType::None;
	}

	void cbBlanking() override
	{
		if (pCurrentPage == nullptr) return;

		if (!pCurrentPage->IsInvalidated(glVideoMemory::InvalidRegion)) // returns an invalidated region
			return;

		glVideoMemory::LimitRegion();
		pCurrentPage->UpdateLook();
		glVideoMemory::NextRegion();
	}
};

