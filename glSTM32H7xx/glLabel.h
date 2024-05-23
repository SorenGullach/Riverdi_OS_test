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

template<int len, const FontItem *fontFamily>
class glLabel : public glWidgetLink, public glWidgetColor, public glWidgetBorder
{
public:
	glLabel(
		const gl2DPoint_t &region, 
		const glColor_t &backColor = glColor_t(glColors::LIGHT_GRAY))
		: glWidgetLink("Label", region)
		, glWidgetColor(backColor)
		, glWidgetBorder()
	{	
		//_BorderWidth = std::min(pos.Width(), pos.Height()) / 10;
		assert(_BorderWidth < region.Height() / 2);
		assert(_BorderWidth < region.Width() / 2);
	}
protected:
	// Called upon touch change
	virtual void Touch(const glTouchPoint_t &) override
	{
	}

	// redraw your self
// return true if anything done
	virtual void Redraw() override
	{
		if (!ImInvalidated) return;

//		glRectangleFill(_Region.Inflate(-_BorderWidth), glColors::CYAN).Draw();
//		glRectangleFill(_Position.Inflate(-BorderWidth), _Color).Draw(invalidRegion);

		for (P_t i = 0; i < _BorderWidth; i++)
		{
			if (_CornerStyle == eCornerStyles::Round)
				glRectangleRound(_Region.Inflate(-i), 2*_BorderWidth - i, _BorderColor).Draw();
			else
				glRectangle(_Region.Inflate(-i), _BorderColor).Draw();
		}
		
		if (glVideoMemory::lastBand()) ImInvalidated = false;
	}

protected:
}
;

