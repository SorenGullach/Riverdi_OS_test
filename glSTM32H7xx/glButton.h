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
#include "glLabel.h"
#include "glText.h"

template<int len, const FontItem *fontFamily>
	class glButton : public glWidgetLink, public glWidgetColor, public glWidgetBorder
{
public:
	glButton(const gl2DPoint_t &region,	
		const char *text, 
		const glColor_t &textColor = glColor_t(glColor_t::eColorOperation::ComplementBackground),  
		const glColor_t &releasedColor = glColors::BLUE, 
		const glColor_t &pressedColor = glColor_t(glColor_t::eColorOperation::ComplementBackground))
		: glWidgetLink("Button", region)
		, glWidgetColor(releasedColor, pressedColor.Color(releasedColor))
		, glWidgetBorder()
		, _Text(region.Inflate(-_BorderWidth), text, fontFamily, textColor)
	{
		assert(_BorderWidth < region.Height() / 2);
		assert(_BorderWidth < region.Width() / 2);
		Add(&_Text);
	}

	virtual void ReleasedColor(glColor_t color)	{ _FrontColor = color; }
	virtual void PressedColor(glColor_t color)	{ _BackColor = color; }

	virtual void TextColor(glColor_t color)	{ _Text.FrontColor(color); }

protected:
	
	// Initialize widget
//	virtual void Init() override {}

	void Touch(const glTouchPoint_t &point) override
	{
		if (_Region.IsInside(point.X, point.Y)) 
		{
			if (point.TipAction == glTouchPoint_t::eTipAction::Tip && !Pressed)
			{
				Pressed = true;
				InvalidateMe();
			}
			if (point.TipAction != glTouchPoint_t::eTipAction::Tip && Pressed)
			{
				Click = true;
				Pressed = false;
				InvalidateMe();
			}
		}
		else
		{
			if (Pressed)
			{
				Pressed = false;
				InvalidateMe();
			}
		}
	}

	// redraw your self
	virtual void Redraw() override
	{
		if (!ImInvalidated) return;

		if (Pressed)
			glRectangleFill(_Region.Inflate(-_BorderWidth), _BackColor).Draw();
		else
			glRectangleFill(_Region.Inflate(-_BorderWidth), _FrontColor).Draw();

		for (P_t i = 0; i < _BorderWidth; i++)
		{
			if (_CornerStyle == eCornerStyles::Round)
				glRectangleRound(_Region.Inflate(-i), 4*_BorderWidth - i, _BorderColor).Draw();
			else
				glRectangle(_Region.Inflate(-i), _BorderColor).Draw();
		}
		
		if (glVideoMemory::lastBand()) 
			ImInvalidated = false;
	}
	
	gl2DPoint_t InvalidRegion() override
	{
		return _Region.Inflate(-_BorderWidth);
	}

	bool Click = false, Pressed = false;
	glText<len> _Text;
};
