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
class glPageLink : public glLink, public glFrontColorTheme
{
public:
	glPageLink(const char *name, const glColor_t &color)
		: glFrontColorTheme(color)
		, _Name(name) 
	{
	}
	
	// Add a widget to the page
	void Add(glWidgetLink *page)
	{
		ChainWidgets.Add(page);
	}

	void MoveTo(glRegion_t region)
	{
		_Region = region;
		_InvalidRegion = _Region;
	}

	// called down link to redraw
	void UpdateLook()
	{
		Redraw(); // draw this widget

		// Update widgets
		if (ChainWidgets.Head() != nullptr)
			ChainWidgets.Head()->UpdateLook();
	}

	// called down link to update state
	void UpdateState(const glTouchPoint_t &point, bool &Handled)
	{
		// Update widgets
		if (ChainWidgets.Head() != nullptr && !Handled)
			ChainWidgets.Head()->UpdateState(point, Handled);

		if(!Handled)
			Handled |= Touch(point);
	}

	void InvalidateChilds()
	{
		_InvalidRegion = _Region;
		if (ChainWidgets.Head() != nullptr)
			ChainWidgets.Head()->InvalidateWidgets(); // and all widgets
	}

	void InvalidateWidgets()
	{
		InvalidateChilds();
		
		if (pNext != nullptr)
			pNext->InvalidateWidgets();
	}

	void InvalidatedRegion(glRegion_t &invalidRegion)
	{
		invalidRegion = invalidRegion.Union(_InvalidRegion);

		// ask all widgets
		if (ChainWidgets.Head() != nullptr)
			ChainWidgets.Head()->InvalidatedRegion(invalidRegion);
	}

	virtual void Redraw() final
	{
		if (_InvalidRegion.IsEmpty()) return;
		
		glRectangleFill(_Region, _FrontColor).Draw();
		
		_InvalidRegion.Empty();
	}
	
	virtual bool Touch(const glTouchPoint_t &point) final
	{
		if (InSlide)
		{
			if (point.TipAction == glTouchPoint_t::eTipAction::Up)
				InSlide = false;
//			Printf("%s %s\n", _Name, InSlide ? "InSlide" : "");
//			return true;
		}
		if (point.SlideAction == glTouchPoint_t::eSlideAction::Right && 
			EventAction.U.Slide.Action != glTouchPoint_t::Right) 
		{
			InSlide = true;
//			Printf("%s slide right\n", _Name);
			EventAction.EventType = glEvent::eEventType::Slide;
			EventAction.U.Slide.Action = glTouchPoint_t::Right;
			Event(EventAction);
	//		return true;
		}
		else if (point.SlideAction == glTouchPoint_t::eSlideAction::Left && 
			EventAction.U.Slide.Action != glTouchPoint_t::Left) 
		{
			InSlide = true;
//			Printf("%s slide left\n", _Name);
			EventAction.EventType = glEvent::eEventType::Slide;
			EventAction.U.Slide.Action = glTouchPoint_t::Left;
			Event(EventAction);
		//	return true;
		}
		return false;
	}
	
	// buble event to top
	void Event(glEvent event)
	{
//		Printf("%s Event\n", _Name);
		EventAction = event;
	}

	glEvent EventAction;
protected:
	glRegion_t _Region;
	glRegion_t _InvalidRegion;
private:
	char const *_Name = "glPageLink";

	glChain<glWidgetLink> ChainWidgets;
	bool InSlide = false;
};