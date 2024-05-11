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

#include "glPrimitives.h"
#include "glLabel.h"

class glButton : public glObject
{
public:
	glButton()
		: glObject("Button", gl2DPoint_t(), glColor_t())
	{
	}
	glButton(gl2DPoint_t pos, glColor_t backColor = glColor_t(glColors::BLUE))
		: glObject("Button", pos.Nomalize(), backColor) 
	{
		_BorderWidth = std::min(pos.Width(), pos.Height()) / 10;
	}
	glButton(gl2DPoint_t pos, P_t borderWidth, glColor_t backColor = glColor_t(glColors::BLUE))
		: glObject("Button", pos.Nomalize(), backColor) 
	{
		assert(borderWidth < pos.Height() / 2);
		assert(borderWidth < pos.Width() / 2);
		_BorderWidth = borderWidth;
	}

	virtual void BackColor(glColor_t color)	{ _Color = color; }
	virtual void PressedColor(glColor_t color)	{ _PressedColor = color; }
	virtual void BorderWidth(P_t borderWidth)
	{
		_BorderWidth = borderWidth;
	}

protected:
	// Initialize object
//	virtual void Init() override {}

	void Touch(const glTouchPoint_t &point) override
	{
		if (_Position.IsInside(point.X, point.Y)) 
		{
			if (point.TipAction == glTouchPoint_t::eTipAction::Tip && !Pressed)
			{
				Pressed = true;
				Invalidate();
			}
			if (point.TipAction != glTouchPoint_t::eTipAction::Tip && Pressed)
			{
				Click = true;
				Pressed = false;
				Invalidate();
			}
		}
		else
		{
			if (Pressed)
			{
				Pressed = false;
				Invalidate();
			}
		}
	}

	// redraw your self
	// return true if anything done
	virtual void Redraw() override
	{
		if (!ImInvalidated) return;

		if (Pressed)
			glRectangleFill(_Position.Inflate(-_BorderWidth), _PressedColor).Draw();
		else
			glRectangleFill(_Position.Inflate(-_BorderWidth), _Color).Draw();

		for (P_t i = 0; i < _BorderWidth; i++)
		{
			glRectangleRound(_Position.Inflate(-i), 2*_BorderWidth - i, _BorderColor).Draw();
		}
		
		if (glVideoMemory::lastBand()) ImInvalidated = false;
	}
	
	gl2DPoint_t InvalidRegion() override
	{
		return _Position.Inflate(-_BorderWidth);
	}

	P_t _BorderWidth = 0;
	glColor_t _PressedColor = { 0, 255, 0 };
	glColor_t _BorderColor = { 255, 255, 255 };
	bool Click = false, Pressed = false;

};

template<int len, const FontItem *fontFamily>
	class glButtonText : public glButton
	{
	public:
		glButtonText(gl2DPoint_t pos, const char *text, glColor_t textColor = glColor_t(glColors::YELLOW), glColor_t backColor = glColor_t(glColors::BLUE))
			: glButton(pos, backColor)
			, _Text(pos.Inflate(-_BorderWidth*2), text, fontFamily, textColor)
		{
			Add(&_Text);
		}
		
		virtual void BorderWidth(P_t borderWidth) override
		{
			glButton::BorderWidth(borderWidth);
			_Text.Move(_Position.Inflate(-_BorderWidth*2));
		}
 
	protected:
		glText<len + 1> _Text;
	};