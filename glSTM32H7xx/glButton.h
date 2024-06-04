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
	class glButton : public glWidgetLink, public glButtonTheme, private glPlot2DHelper
	{
	public:
		glButton(const glRegion_t &region, const char *text, const glButtonTheme &theme = glButtonTheme())
			: glWidgetLink("Button", region)
			, glButtonTheme(theme)
			, _Text(region.Inflate(-_BorderWidth), text, fontFamily, theme._TextColor)
		{
			Add(&_Text);
		}

	protected:
	
		bool Touch(const glTouchPoint_t &point) override
		{
			bool Handled = false;
			if (_Region.IsInside(point.X, point.Y)) 
			{
				if (point.TipAction == glTouchPoint_t::eTipAction::Tip && !Pressed)
				{
					Pressed = true;
					Handled = true;
					_InvalidatedRegion = _Region.Inflate(-_BorderWidth);
					InvalidateChilds();
				}
				if (point.TipAction == glTouchPoint_t::eTipAction::Up && Pressed)
				{
					Click = true;
					Pressed = false;
					Handled = true;
					_InvalidatedRegion = _Region.Inflate(-_BorderWidth);
					InvalidateChilds();
				}
			}
			else
			{
				if (Pressed)
				{
					Pressed = false;
					Handled = true;
					_InvalidatedRegion = _Region.Inflate(-_BorderWidth);
					InvalidateChilds();
				}
			}
			return Handled;
		}

		// redraw your self
		virtual void Redraw() override
		{
			if (_InvalidatedRegion.IsEmpty()) return;

			PlotRectangleRoundFill(_Region.Inflate(-_BorderWidth + 1), _CornerRadius, Pressed ? _PressedColor : _BackColor);

			PlotBorder(_Region, _BorderWidth, _CornerRadius, _BorderColor);
		
			_InvalidatedRegion.Empty();
		}
		
		bool Click = false, Pressed = false;
		glRegion_t Cursor; 
		glText<len> _Text;
	};
