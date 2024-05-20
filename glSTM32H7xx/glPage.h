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

// a GUI consists of pages
class glPage : public glWidgetAttributes, public glLink
{
public:
	glPage(const char *name)
		: glWidgetAttributes(name, gl2DPoint_t(), glColor_t())
	{
	}
//	virtual void Init() override
//	{
//	}

	// Add a widget to the page
	void Add(glWidget *page)
	{
		ChainObjects.Add(page);
	}

	void PosSize(gl2DPoint_t pos)
	{
		_Region = pos;
	}
	// called down link to redraw
	void UpdateLook()
	{
		Redraw(); // draw this widget

		// Update widgets
		if (ChainObjects.Head() != nullptr)
			ChainObjects.Head()->UpdateLook();
	}

	// called down link to update state
	void UpdateState(glTouchPoint_t &point)
	{
		Touch(point); // send touch

		// Update widgets
		if (ChainObjects.Head() != nullptr)
			ChainObjects.Head()->UpdateState(point);
	}

	void Invalidate()
	{
		//Printf("%s Invalidate\n", Name);
		ImInvalidated = true; // this page
		if (ChainObjects.Head() != nullptr)
			ChainObjects.Head()->Invalidate(); // a all widgets
	}
	
	bool IsInvalidated(gl2DPoint_t &invalidRegion)
	{
		bool Invalid = false;
		if (ImInvalidated)
		{
			invalidRegion = invalidRegion.Union(InvalidRegion());
			Invalid = true; // all childern is also invalid
		}
		else if (ChainObjects.Head() != nullptr)
		{
			// ask all objs
			Invalid = ChainObjects.Head()->IsInvalidated(invalidRegion);
		}
		return Invalid;
	}

	virtual void Redraw() final
	{
		if (!ImInvalidated) return;
		
		glRectangleFill(_Region.Intersection(glVideoMemory::InvalidRegion), _Color).Draw();
		
		if(glVideoMemory::lastBand()) ImInvalidated = false;
	}
	virtual void Touch(const glTouchPoint_t &point) final
	{
		if (InSlide)
		{
			if (point.TipAction == glTouchPoint_t::eTipAction::Up)
				InSlide = false;
			Printf("%s %s\n", _Name, InSlide ? "InSlide" : "");
			return;
		}
		if (point.SlideAction == glTouchPoint_t::eSlideAction::Right && 
			EventAction.U.Slide.Action != glTouchPoint_t::Right) 
		{
			InSlide = true;
			Printf("%s slide right\n", _Name);
			EventAction.EventType = glEvent::eEventType::Slide;
			EventAction.U.Slide.Action = glTouchPoint_t::Right;
			Event(EventAction);
		}
		else if (point.SlideAction == glTouchPoint_t::eSlideAction::Left && 
			EventAction.U.Slide.Action != glTouchPoint_t::Left) 
		{
			InSlide = true;
			Printf("%s slide left\n", _Name);
			EventAction.EventType = glEvent::eEventType::Slide;
			EventAction.U.Slide.Action = glTouchPoint_t::Left;
			Event(EventAction);
		}
	}
	// buble event to top
	void Event(glEvent event)
	{
		Printf("%s Event\n", _Name);
		EventAction = event;
	}

	glEvent EventAction;
private:
	glChain<glWidget> ChainObjects;
	bool InSlide = false;
};