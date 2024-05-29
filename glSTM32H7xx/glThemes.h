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

#include "glColor.h"

class glFrontColorTheme
{
public:
	glFrontColorTheme()	
		: _FrontColor(glColor_t::eColorOperation::ComplementBackground) 
	{}
	glFrontColorTheme(const glColor_t &frontColor)
		: _FrontColor(frontColor)
	{}

	virtual glColor_t FrontColor() { return _FrontColor; }
	virtual void FrontColor(glColor_t color) { _FrontColor = color; }
	
	glColor_t _FrontColor;
};

class glBackColorTheme
{
public:
	glBackColorTheme()	
		: _BackColor(glColors::BISQUE) 
	{}
	glBackColorTheme(const glColor_t &backColor)
		: _BackColor(backColor)
	{}

	virtual glColor_t BackColor()	{ return _BackColor; }
	virtual void BackColor(glColor_t color)	{ _BackColor = color; }
	
	glColor_t _BackColor;
};

class glTextColorTheme
{
public:
	glTextColorTheme()	
		: _TextColor(glColor_t::eColorOperation::ComplementBackground) 
	{}
	glTextColorTheme(const glColor_t &textColor)
		: _TextColor(textColor)
	{}

	virtual glColor_t TextColor()	{ return _TextColor; }
	virtual void TextColor(glColor_t color)	{ _TextColor = color; }
	
	glColor_t _TextColor;
};

class glLabelTheme : public glTextColorTheme, public glBackColorTheme
{
public:
	glLabelTheme()
		: glTextColorTheme() 
		, glBackColorTheme(glColors::AQUA)
		, _BorderColor(glColors::WHITE)
		, _BorderWidth(0)
		, _CornerRadius(0)
	{}
	glLabelTheme(const glColor_t &textColor, const glColor_t &backColor, const glColor_t &borderColor, P_t borderWidth, P_t cornerRadius)
		: glTextColorTheme(textColor)
		, glBackColorTheme(backColor)
		, _BorderColor(borderColor)
		, _BorderWidth(borderWidth)
		, _CornerRadius(cornerRadius)
	{}

	virtual glColor_t BorderColor()	{ return _BorderColor; }
	virtual P_t BorderWidth()	{ return _BorderWidth; }
	virtual P_t CornerRadius()	{ return _CornerRadius; }

	virtual void BorderColor(glColor_t color)	{ _BorderColor = color; }
	virtual void BorderWidth(P_t width)	{ _BorderWidth = width; }
	virtual void CornerRadius(P_t radius)	{ _CornerRadius = radius; }

	glColor_t _BorderColor;
	P_t _BorderWidth;
	P_t _CornerRadius;
};

class glButtonTheme : public glLabelTheme
{
public:
	glButtonTheme()
		: glLabelTheme(
			glColor_t::eColorOperation::ComplementBackground,
		glColors::BLUE,
		glColors::WHITE,
		5,
		20) 
		, _PressedColor(glColor_t(glColor_t::eColorOperation::ComplementBackground).Color(_BackColor))
	{}
	glButtonTheme(const glColor_t &frontColor, const glColor_t &backColor, const glColor_t &borderColor, P_t borderWidth, P_t cornerRadius)
		: glLabelTheme(frontColor, backColor, borderColor, borderWidth, cornerRadius)
	{}
	
	virtual void ReleasedColor(glColor_t color)	{ _BackColor = color; }
	virtual void PressedColor(glColor_t color)	{ _PressedColor = color; }

	glColor_t _PressedColor;
};
