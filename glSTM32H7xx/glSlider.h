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
#include "glText.h"

template<int len, const FontItem *fontFamily>
	class glSlider : public glWidgetLink, public glButtonTheme, private glPlot2DHelper
	{
	public:
		glSlider(const glRegion_t &region, const char *text, const glButtonTheme &theme = glButtonTheme())
			: glWidgetLink("Slider", region)
			, glButtonTheme(theme)
			, _Text(region.Inflate(-_BorderWidth), text, fontFamily, theme._TextColor)
		{
			Add(&_Text);
			Horisontal = region.Height() < region.Width();
			_CornerRadius = std::min(region.Height(), region.Width()) / 4;
			CalcCursor(_Region.Inflate(-_BorderWidth));
		}

	protected:
	
		void CalcCursor(const glRegion_t &r)
		{
			_InvalidatedRegion = _InvalidatedRegion.Union(Cursor); // old invalid region
			if (Horisontal)
				Cursor = glRegion_t(r.L() + Pos, r.T(), r.L() + 2*_CornerRadius + Pos, r.B());
			else
				Cursor = glRegion_t(r.L(), r.T() + Pos, r.R(), r.T() + 2*_CornerRadius + Pos);
			_InvalidatedRegion = _InvalidatedRegion.Union(Cursor); // add new invalid region
			_Text.Text("%d", Pos);
			InvalidateChilds();
		}
		
		bool Touch(const glTouchPoint_t &point) override 
		{
			bool Handled = false;
			glRegion_t r = _Region.Inflate(-_BorderWidth);
			
			if (_Region.IsInside(point.X, point.Y)) 
			{
				if (point.TipAction == glTouchPoint_t::eTipAction::Tip && !Pressed)
				{
					Pressed = true;
					CalcCursor(r);
					Handled = true;
				}
				if (point.TipAction == glTouchPoint_t::eTipAction::Up && Pressed)
				{
					Click = true;
					Pressed = false;
					CalcCursor(r);
					Handled = true;
				}
				if (
					(point.TipAction == glTouchPoint_t::eTipAction::Tip || 
					point.TipAction == glTouchPoint_t::eTipAction::Slide) && 
					Pressed) 
				{
					if (Horisontal)
					{
						int p = point.X - r.L();
						if (p != Pos && p > 0)
						{
							Pos = p;
							if (Pos > r.Width() - 2*_CornerRadius)
								Pos = r.Width() - 2*_CornerRadius;
							CalcCursor(r);
							Handled = true;
						}
					}
					else
					{
						int p = point.Y - r.T();
						if (p != Pos && p > 0)
						{
							Pos = p;
							if (Pos > r.Height() - 2*_CornerRadius)
								Pos = r.Height() - 2*_CornerRadius;
							CalcCursor(r);
							Handled = true;
						}
					}
				}
			}
			else
			{
				if (Pressed)
				{
					Pressed = false;
					CalcCursor(r);
					Handled = true;
				}
			}		
			return Handled;
		}

		// redraw your self
		virtual void Redraw() override
		{
			if (_InvalidatedRegion.IsEmpty()) return;

			glRegion_t r = _Region.Inflate(-_BorderWidth + 1);
			PlotRectangleRoundFill(r, _CornerRadius, _BackColor);

			PlotRectangleRoundFill(Cursor, _CornerRadius, _PressedColor);

			PlotBorder(_Region, _BorderWidth, _CornerRadius, _BorderColor);
		
			_InvalidatedRegion.Empty();
		}
		
		glText<len> _Text;
		bool Horizontal = true;
		P_t Pos = 0;
		glRegion_t Cursor;
		bool Horisontal;

		bool Click = false, Pressed = false;
	};

