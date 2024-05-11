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

class glLabel : public glObject
{
public:
	glLabel()
		: glObject("Label", gl2DPoint_t(), glColor_t()) {}
	glLabel(gl2DPoint_t pos, glColor_t backColor = glColor_t(glColors::BLUE))
		: glObject("Label", pos, backColor) 
	{	
		BorderWidth = std::min(pos.Width(), pos.Height()) / 10;
	}
	glLabel(gl2DPoint_t pos, P_t borderWidth, glColor_t backColor = glColor_t(glColors::BLUE))
		: glObject("Label", pos, backColor) 
	{
		assert(borderWidth < pos.Height() / 2);
		assert(borderWidth < pos.Width() / 2);
		BorderWidth = borderWidth;
	}

	void BackColor(glColor_t color)	{ _Color = color; }

	// Called upon touch change
	virtual void Touch(const glTouchPoint_t &) override
	{
	}

	// redraw your self
// return true if anything done
	virtual void Redraw() override
	{
		if (!ImInvalidated) return;

		glRectangleFill(_Position.Inflate(-BorderWidth), glColors::CYAN).Draw();
//		glRectangleFill(_Position.Inflate(-BorderWidth), _Color).Draw(invalidRegion);

		for (P_t i = 0; i < BorderWidth; i++)
		{
			glRectangleRound(_Position.Inflate(-i), 2*BorderWidth - i, BorderColor).Draw();
		}
		
		if (glVideoMemory::lastBand()) ImInvalidated = false;
	}

	gl2DPoint_t InvalidRegion() override
	{
		return _Position.Inflate(-BorderWidth);
	}
protected:
	P_t BorderWidth = 0;
	glColor_t BorderColor = { 255, 255, 255 };
}
;

