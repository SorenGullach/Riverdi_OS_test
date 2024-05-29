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
		glSlider(const gl2DPoint_t &region, const char *text, const glButtonTheme &theme = glButtonTheme())
			: glWidgetLink("Slider", region)
			, glButtonTheme(theme)
			, _Text(region.Inflate(-_BorderWidth), text, fontFamily, theme._TextColor)
		{
			Add(&_Text);
			Horisontal = region.Height() < region.Width();
			_CornerRadius = std::min(region.Height(), region.Width()) / 4;
			Invalid = _Region;
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
					InvalidateMe();
				}
				if (point.TipAction == glTouchPoint_t::eTipAction::Up && Pressed)
				{
					Click = true;
					Pressed = false;
					Handled = true;
					InvalidateMe();
				}
				if (
					(point.TipAction == glTouchPoint_t::eTipAction::Tip || 
					point.TipAction == glTouchPoint_t::eTipAction::Slide) && 
					Pressed) 
				{
					gl2DPoint_t r = _Region.Inflate(-_BorderWidth + 1);
					if (Horisontal)
					{
						P_t p = point.X - r.L();
						if (p != Pos && p>0)
						{
							Pos = p;
							if (Pos > r.Width() - 2*_CornerRadius)
								Pos = r.Width() - 2*_CornerRadius;
							gl2DPoint_t i = Cursor; // old invalid region
							Cursor = gl2DPoint_t(r.L() + Pos, r.T(), r.L() + 2*_CornerRadius + Pos, r.B());
							Invalid = i.Union(Cursor).Inflate(10,0,10,0); // add new invalid region
							_Text.Text("%d", Pos);
							Handled = true;
							ImInvalidated = true;
						}
					}
					else
					{
						P_t p = point.Y - r.T();
						if (p != Pos && p>0)
						{
							Pos = p;
							if (Pos > r.Height() - 2*_CornerRadius)
								Pos = r.Height() - 2*_CornerRadius;
							gl2DPoint_t i = Cursor; // old invalid region
							Cursor = gl2DPoint_t(r.L(), r.T() + Pos, r.R(), r.T() + 2*_CornerRadius + Pos);
							Invalid = i.Union(Cursor).Inflate(0,10,0,10); // add new invalid region
							_Text.Text("%d", Pos);
							Handled = true;
							ImInvalidated = true;
						}
					}
				}
			}
			else
			{
				if (Pressed)
				{
					Pressed = false;
					Handled = true;
					InvalidateMe();
				}
			}		
			return Handled;
		}

		// redraw your self
		virtual void Redraw() override
		{
			if (!ImInvalidated) return;

			gl2DPoint_t r = _Region.Inflate(-_BorderWidth + 1);
			PlotRectangleRoundFill(r, _CornerRadius, _BackColor);

			PlotRectangleRoundFill(Cursor, _CornerRadius, _PressedColor);

			PlotBorder(_Region, _BorderWidth, _CornerRadius, _BorderColor);
		
			if (glVideoMemory::lastBand()) 
			{
				Invalid = gl2DPoint_t();
				ImInvalidated = false;
			}
		}
	
		void InvalidateMe() override
		{
			Invalid = _Region;
			glWidgetLink::InvalidateMe();
		}

		gl2DPoint_t InvalidRegion() override
		{
			return Invalid;
		}

		glText<len> _Text;
		bool Horizontal = true;
		P_t Pos = 0;
		gl2DPoint_t Cursor;
		gl2DPoint_t Invalid;
		bool Horisontal;

		bool Click = false, Pressed = false;
	};

