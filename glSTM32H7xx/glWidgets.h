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

#include "Hardware.h"
#include "glVMPlot.h"
#include "glTypes.h"
#include "glFont.h"
#include "glChain.h"
#include "glThemes.h"
#include <string.h>
#include <assert.h>

/////////////////////////////////////////////////////////////////////////////////////////////
class glWidgetLink : public glLink
{
public:
	glWidgetLink(char const *name, const glRegion_t &region)
		: _Name(name)
		, _Region(region.Normalize())
		, _InvalidatedRegion(_Region) {}
	
	// Add a widget to the page
	void Add(glWidgetLink *child)
	{
		ChainChilds.Add(child);
	}

	virtual const char * Name()					{ return _Name; }
	virtual void Name(const char *name)			{ _Name = name; }

	virtual glRegion_t &Region() { return _Region;	}
	virtual void MoveTo(const glRegion_t &region)
	{ 
		_Region = _InvalidatedRegion = region; 
	}

	// redraw your self
	virtual void Redraw() = 0;
	// Called upon touch change
	virtual bool Touch(const glTouchPoint_t &) = 0;

	// called down link to redraw
	void UpdateLook()
	{
		Redraw(); // draw this widget

		// Update Childs
		if (ChainChilds.Head() != nullptr)
			ChainChilds.Head()->UpdateLook();

		// Update widgets
		if (pNext != nullptr)
			pNext->UpdateLook();
	}

	// called down link to update state
	void UpdateState(const glTouchPoint_t &point, bool &Handled)
	{
		// Update widgets
		if (pNext != nullptr  && !Handled)
			pNext->UpdateState(point, Handled);

		// Update Childs
		if (ChainChilds.Head() != nullptr  && !Handled)
			ChainChilds.Head()->UpdateState(point, Handled);

		if (!Handled)
			Handled |= Touch(point); 
	}
	
	void InvalidateChilds()
	{
		if (ChainChilds.Head() != nullptr)
			ChainChilds.Head()->InvalidateWidgets(); // & all childs
	}

	void InvalidateWidgets()
	{
		_InvalidatedRegion = _Region;
		InvalidateChilds();
		
		// Update siblings
		if (pNext != nullptr)
			pNext->InvalidateWidgets();
	}

	void InvalidatedRegion(glRegion_t &invalidRegion)
	{
		invalidRegion = invalidRegion.Union(_InvalidatedRegion);
		
		// ask all childs
		if (ChainChilds.Head() != nullptr)
			ChainChilds.Head()->InvalidatedRegion(invalidRegion);
			
		// ask next widget
		if (pNext != nullptr)
			pNext->InvalidatedRegion(invalidRegion);
	}

	// buble event to top
	void Event(glEvent event)
	{
		if (pPrev != nullptr)
			pPrev->Event(event);
	}

protected:
	char const *_Name = "glWidgetLink";
	glRegion_t _Region;
	glRegion_t _InvalidatedRegion;
private:
	glChain<glWidgetLink> ChainChilds;
};

/////////////////////////////////////////////////////////////////////////////////////////////
/**
 * @class glPixel
 * @brief A graphical pixel widget that inherits from glWidget and glVideoMemoryPlot.
 * 
 * This class represents a single pixel in a graphical user interface. It provides
 * multiple constructors for different ways of initializing the pixel's position and color.
 * It also overrides the Redraw method to plot the pixel on the screen.
 */
class glPixel : public glWidgetLink, public glFrontColorTheme, private glVideoMemoryPlot
{
public:
	glPixel(P_t x, P_t y, const glColor_t &color)
		: glWidgetLink("Pixel", glRegion_t(x, y, x + 1, y + 1))
		, glFrontColorTheme(color) {}

	glPixel(const glPoint_t &point, const glColor_t &color)
		: glWidgetLink("Pixel", glRegion_t(point, point.Displace(1, 1)))
		, glFrontColorTheme(color) {}

protected:
	// Redraws the pixel widget.
	virtual void Redraw() override
	{
		if (_InvalidatedRegion.IsEmpty()) return;
		Plot(_Region.LT(), _FrontColor);
		_InvalidatedRegion.Empty();
	}
	bool Touch(const glTouchPoint_t &) override { return false; }
};


/////////////////////////////////////////////////////////////////////////////////////////////
// help class
class glPlot2DHelper : public glVideoMemoryPlot
{
public:
	void PlotLine(P_t x0, P_t y0, P_t x1, P_t y1, const glColor_t &color);
	
	void PlotCircle(const glPoint_t &center, P_t radius, const glColor_t &color);
	void PlotCircleFill(const glPoint_t &center, P_t radius, const glColor_t &color);
	
	void PlotArc(const glRegion_t &region, const glPoint_t &center, P_t radius, const glColor_t &color);
	void PlotArcFill(const glRegion_t &region, const glPoint_t &center, P_t radius, const glColor_t &color);
	
	void PlotRectangle(const glRegion_t &region, const glColor_t &color);
	void PlotRectangleFill(const glRegion_t &region, const glColor_t &color);
	void PlotRectangleRound(glRegion_t region, P_t radius, glColor_t color);
	void PlotRectangleRoundFill(glRegion_t region, P_t radius, glColor_t color);
	 
	void PlotBorder(glRegion_t region, P_t width, P_t radius, glColor_t color);
private:
	void PlotLineLow(P_t x0, P_t y0, P_t x1, P_t y1, const glColor_t &color);
	void PlotLineHigh(P_t x0, P_t y0, P_t x1, P_t y1, const glColor_t &color);
	void PlotVLine(P_t x0, P_t y0, P_t y1, const glColor_t &color);
	void PlotHLine(P_t x0, P_t x1, P_t y0, const glColor_t &color);
};

/////////////////////////////////////////////////////////////////////////////////////////////
/// endpoints is inclusive
class glLine : private glPlot2DHelper, public glWidgetLink, public glFrontColorTheme
{
public:
	glLine(const glPoint_t start, glPoint_t end, const glColor_t &color)
		: glWidgetLink("Line", glRegion_t(start, end))
		, glFrontColorTheme(color)
		, _Start(start)
		, _End(end) {}

	virtual void MoveTo(const glRegion_t &region) override
	{
		_Start = region.LT();
		_End = region.RB();
		glWidgetLink::MoveTo(region);
	}

protected:
	// redraw your self 
	virtual void Redraw() override
	{
		if (_InvalidatedRegion.IsEmpty()) return;
		
		PlotLine(_Start.X, _Start.Y, _End.X, _End.Y, _FrontColor);
		_InvalidatedRegion.Empty();
	}
	bool Touch(const glTouchPoint_t &) override { return false; }
	glPoint_t _Start, _End;
};
	
class glRectangle : protected glPlot2DHelper, public glWidgetLink, public glFrontColorTheme
{
public:
	glRectangle(const glRegion_t &rect, const glColor_t &color)
		: glWidgetLink("Rectangle", rect)
		, glFrontColorTheme(color) {}

	virtual void Draw()
	{
		PlotRectangle(_Region, _FrontColor);
	}
protected:
	// Initialize widget
	//	virtual void Init() override {}
	
		// redraw your self
	virtual void Redraw() override
	{
		if (_InvalidatedRegion.IsEmpty()) return;
		Draw();
		_InvalidatedRegion.Empty();
	}
	bool Touch(const glTouchPoint_t &) override { return false; }
};

class glRectangleFill : public glRectangle
{
public:
	glRectangleFill(const glRegion_t &rect, const glColor_t &color)
		: glRectangle(rect, color) { _Name = "RectangleFill"; }

	void Draw() override
	{
		PlotRectangleFill(_Region, _FrontColor);
	}
};

class glCircle : protected glPlot2DHelper, public glWidgetLink, public glFrontColorTheme
{
public:
	glCircle(const glPoint_t &center, P_t radius, const glColor_t &color) 
		: glWidgetLink("Circel", glRegion_t(center.Displace(-radius, -radius), center.Displace(radius, radius)))
		, glFrontColorTheme(color)
		, _Center(center)
		, _Radius(radius) {}

	virtual void Draw()
	{
		PlotCircle(_Center, _Radius, _FrontColor);
	}

protected:
	// redraw your self
	void Redraw() override
	{
		if (_InvalidatedRegion.IsEmpty()) return;
		Draw();
		_InvalidatedRegion.Empty();
	}
	bool Touch(const glTouchPoint_t &) override { return false; }

	glPoint_t _Center;
	P_t _Radius;
};

class glCircleFill : public glCircle
{
public:
	glCircleFill(const glPoint_t &center, P_t radius, const glColor_t &color) 
		: glCircle(center, radius, color) {_Name = "CircleFill"; }

	void Draw() override
	{
		PlotCircleFill(_Center, _Radius, _FrontColor);
	}
};

class glArc : public glCircle
{
public:
	glArc(const glRegion_t &box, const glPoint_t &center, P_t radius, const glColor_t &color) 
		: glCircle(center, radius, color)
		{ _Region = box.Normalize(); _Name = "glArc"; }
	
	void Draw() override
	{
		PlotArc(_Region, _Center, _Radius, _FrontColor);
	}
};

class glArcFill : public glArc
{
public:
	glArcFill(const glRegion_t &box, const glPoint_t &center, P_t radius, const glColor_t &color) 
		: glArc(box, center, radius, color) { _Name = "glArcFill"; }
	
	void Draw() override
	{
		PlotArcFill(_Region, _Center, _Radius, _FrontColor);
	}
};

class glRectangleRound : public glRectangle
{
public:
	glRectangleRound(const glRegion_t &rect, P_t radius, const glColor_t &color)
		: glRectangle(rect, color)
		, _Radius(radius) 
	{ _Name = "glRectangleRound"; }

	void Draw() override
	{
		PlotRectangleRound(_Region, _Radius, _FrontColor);
	}
private:
	P_t _Radius = 5;
};

class glRectangleRoundFill : public glRectangle
{
public:
	glRectangleRoundFill(const glRegion_t &rect, P_t radius, const glColor_t &color)
		: glRectangle(rect, color)
		, _Radius(radius)
	{ _Name = "RectangleRoundFill"; }

	void Draw() override
	{
		assert(_Radius <= _Region.Width() / 2 || _Radius <= _Region.Height() / 2);
		PlotRectangleRoundFill(_Region, _Radius, _FrontColor);
	}
private:
	P_t _Radius = 5;
};

