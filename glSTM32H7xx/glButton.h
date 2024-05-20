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

class glButton : public glWidget
{
public:
	glButton()
		: glWidget("Button", gl2DPoint_t(), glColor_t())
	{
	}
	glButton(const gl2DPoint_t &pos, 
		const glColor_t &backColor = glColors::BLUE, 
		const glColor_t &pressedColor = glColor_t(glColor_t::eColorOperation::ComplementBackground))
		: glWidget("Button", pos.Normalize(), backColor),
		_BorderWidth(std::min(pos.Width(), pos.Height()) / 10),
		_PressedColor(pressedColor.Color(backColor))
	{
	}
	glButton(const gl2DPoint_t &pos, P_t borderWidth, 
		const glColor_t &backColor = glColors::BLUE, 
		const glColor_t &pressedColor = glColor_t(glColor_t::eColorOperation::ComplementBackground))
		: glWidget("Button", pos.Normalize(), backColor),
		_BorderWidth(borderWidth),
		_PressedColor(pressedColor.Color(backColor))
	{
		assert(_BorderWidth < pos.Height() / 2);
		assert(_BorderWidth < pos.Width() / 2);
	}

	virtual void BackColor(glColor_t color)	{ _Color = color; } // _Color is used for backcolor
	virtual void PressedColor(glColor_t color)	{ _PressedColor = color; }
	virtual void BorderColor(glColor_t color)	{ _BorderColor = color; }

	virtual void BorderWidth(P_t borderWidth)	{ _BorderWidth = borderWidth; }

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
			glRectangleFill(_Region.Inflate(-_BorderWidth), _PressedColor).Draw();
		else
			glRectangleFill(_Region.Inflate(-_BorderWidth), _Color).Draw();

		for (P_t i = 0; i < _BorderWidth; i++)
		{
			glRectangleRound(_Region.Inflate(-i), 2*_BorderWidth - i, _BorderColor).Draw();
		}
		
		if (glVideoMemory::lastBand()) ImInvalidated = false;
	}
	
	gl2DPoint_t InvalidRegion() override
	{
		return _Region.Inflate(-_BorderWidth);
	}

	P_t _BorderWidth = 0;
	glColor_t _PressedColor = glColors::RED;
	glColor_t _BorderColor = glColors::WHITE;
	bool Click = false, Pressed = false;

};

template<int len, const FontItem *fontFamily>
	class glButtonText : public glButton
	{
	public:
		glButtonText(const gl2DPoint_t &pos, const char *text, 
			const glColor_t &textColor = glColor_t(glColor_t::eColorOperation::ComplementBackground), 
			const glColor_t &backColor = glColor_t(glColors::BLUE), 
			const glColor_t &pressedColor = glColor_t(glColor_t::eColorOperation::ComplementBackground))
			: glButton(pos, backColor,pressedColor )
			, _Text(pos.Inflate(-_BorderWidth*2), text, fontFamily, textColor)
		{
			Add(&_Text);
		}
		
		virtual void BorderWidth(P_t borderWidth) override
		{
			glButton::BorderWidth(borderWidth);
			_Text.Region().MoveTo(_Region.Inflate(-_BorderWidth*2));
		}

		void TextColor(glColor_t color)	{ _Text.Color(color); }

	protected:
		glText<len> _Text;
	};