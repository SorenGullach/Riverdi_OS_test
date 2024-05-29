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
#include "glTypes.h"
#include "glFont.h"
#include "glChain.h"
#include "glThemes.h"
#include <string.h>
#include <assert.h>

/// helper class for plotting on the Video memory
class glVideoMemoryPlot : protected glVideoMemory
{
public:
	// plot in invalid region and box
	void Plot(const gl2DPoint_t &box, P_t x, P_t y, const glColor_t &color)	
	{ 
		gl2DPoint_t IVR = InvalidRegion.Intersection(box);
		if (IVR.IsInside(x, y))
		{
			assert(x < _ScreenWidth && y < _ScreenHeight);
			pVM[x + y*_ScreenWidth] = color.operation == glColor_t::eColorOperation::Replace ? (glARGB_t)color : color.Color(pVM[x + y*_ScreenWidth]); 
		}
	}

	// plot in invalid region
	void Plot(P_t x, P_t y, const glColor_t &color)
	{ 
		if (InvalidRegion.IsInside(x, y))
		{
			assert(x < _ScreenWidth && y < _ScreenHeight);
			if (color.operation == glColor_t::eColorOperation::Replace)
				pVM[x + y*_ScreenWidth] = (glARGB_t)color; 
			else
				pVM[x + y*_ScreenWidth] = color.Color(pVM[x + y*_ScreenWidth]); 
			//pVM[x + y*_ScreenWidth] = color.operation == glColor_t::eColorOperation::Replace ? (glARGB_t)color : color.Color(pVM[x + y*_ScreenWidth]); 
		}
	}

	// plot in invalid region
	void Plot(const glPoint_t &p, const glColor_t &color) { Plot(p.X, p.Y, color); }
	// plot in invalid region and box
	void Plot(const gl2DPoint_t box, const glPoint_t &p, const glColor_t &color)	{ Plot(box, p.X, p.Y, color); }
};

/////////////////////////////////////////////////////////////////////////////////////////////
class glWidgetLink : public glLink
{
public:
	glWidgetLink(char const *name, const gl2DPoint_t &region)
		: _Name(name)
		, _Region(region.Normalize()) {}
	
	// Add a widget to the page
	void Add(glWidgetLink *child)
	{
		ChainChilds.Add(child);
	}

	virtual const char * Name()					{ return _Name; }
	virtual void Name(const char *name)			{ _Name = name; }

	virtual gl2DPoint_t &Region()						{ return _Region;	}
	virtual void MoveTo(const gl2DPoint_t &region)		{ _Region = region; }

	// redraw your self
	virtual void Redraw() = 0;
	// Called upon touch change
	virtual bool Touch(const glTouchPoint_t &) = 0;
	virtual gl2DPoint_t InvalidRegion() 
	{
		return _Region;
	}

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
	void UpdateState(glTouchPoint_t &point, bool &Handled)
	{
		// Update Childs
		if (ChainChilds.Head() != nullptr  && !Handled)
			ChainChilds.Head()->UpdateState(point, Handled);

		// Update widgets
		if (pNext != nullptr  && !Handled)
			pNext->UpdateState(point, Handled);

		if(!Handled)
			Handled |= Touch(point); 
	}
	
	void InvalidateMe()
	{
		//Printf("%s Invalidate\n", Name);
		ImInvalidated = true; // this obj
		if (ChainChilds.Head() != nullptr)
			ChainChilds.Head()->InvalidateSiblings(); // & all childs
	}

	void InvalidateSiblings()
	{
		InvalidateMe();
		
		// Update siblings
		if (pNext != nullptr)
			pNext->InvalidateSiblings();
	}

	bool IsInvalidated(gl2DPoint_t &invalidRegion)
	{
		bool Invalid = false;
		if (ImInvalidated)
		{
			invalidRegion = invalidRegion.Union(InvalidRegion());
			Invalid = true; // all childern is also invalid
		}
		else if (ChainChilds.Head() != nullptr)
		{
			// ask all childs
			Invalid = ChainChilds.Head()->IsInvalidated(invalidRegion);
		}
			
		if (pNext != nullptr)
		{
			// ask all objs
			Invalid |= pNext->IsInvalidated(invalidRegion);
		}
		return Invalid;
	}

	// buble event to top
	void Event(glEvent event)
	{
		if (pPrev != nullptr)
			pPrev->Event(event);
	}

protected:
	char const *_Name = "glWidget";
	// is widget invalidated
	bool ImInvalidated = true;
	gl2DPoint_t _Region;
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
		: glWidgetLink("Pixel", gl2DPoint_t(x, y, x, y))
		, glFrontColorTheme(color) {}

	glPixel(const glPoint_t &point, const glColor_t &color)
		: glWidgetLink("Pixel", gl2DPoint_t(point, point))
		, glFrontColorTheme(color) {}

protected:
	// Redraws the pixel widget.
	virtual void Redraw() override
	{
		if (!ImInvalidated) return;
		
		Plot(_Region.LT(), _FrontColor);
		if (glVideoMemory::lastBand()) ImInvalidated = false;
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
	
	void PlotArc(const gl2DPoint_t &region, const glPoint_t &center, P_t radius, const glColor_t &color);
	void PlotArcFill(const gl2DPoint_t &region, const glPoint_t &center, P_t radius, const glColor_t &color);
	
	void PlotRectangle(const gl2DPoint_t &region, const glColor_t &color);
	void PlotRectangleFill(const gl2DPoint_t &region, const glColor_t &color);
	void PlotRectangleRound(gl2DPoint_t region, P_t radius, glColor_t color);
	void PlotRectangleRoundFill(gl2DPoint_t region, P_t radius, glColor_t color);
	 
	void PlotBorder(gl2DPoint_t region,	P_t width, P_t radius, glColor_t color);
private:
	void PlotLineLow(P_t x0, P_t y0, P_t x1, P_t y1, const glColor_t &color);
	void PlotLineHigh(P_t x0, P_t y0, P_t x1, P_t y1, const glColor_t &color);
	void PlotVLine(P_t x0, P_t y0, P_t y1, const glColor_t &color);
	void PlotHLine(P_t x0, P_t x1, P_t y0, const glColor_t &color);
};

/////////////////////////////////////////////////////////////////////////////////////////////
class glLine : private glPlot2DHelper, public glWidgetLink, public glFrontColorTheme
{
public:
	glLine(const gl2DPoint_t startEnd, const glColor_t &color)
		: glWidgetLink("Line", startEnd)
		, glFrontColorTheme(color) {}

protected:
	// Initialize widget
//	virtual void Init() override {}

	// redraw your self 
	virtual void Redraw() override
	{
		if (!ImInvalidated) return;
		
		PlotLine(_Region.L(), _Region.T(), _Region.R(), _Region.B(), _FrontColor);
		if (glVideoMemory::lastBand()) ImInvalidated = false;
	}
	bool Touch(const glTouchPoint_t &) override { return false; }
};
	
class glRectangle : protected glPlot2DHelper, public glWidgetLink, public glFrontColorTheme
{
public:
	glRectangle(const gl2DPoint_t &rect, const glColor_t &color)
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
		if (!ImInvalidated) return ;

		Draw();
		
		if (glVideoMemory::lastBand()) ImInvalidated = false;
	}
	bool Touch(const glTouchPoint_t &) override { return false; }
};

class glRectangleFill : public glRectangle
{
public:
	glRectangleFill(const gl2DPoint_t &rect, const glColor_t &color)
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
		: glWidgetLink("Circel", gl2DPoint_t(center.Displace(-radius, -radius), center.Displace(radius, radius)))
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
		if (!ImInvalidated) return;
		
		Draw();
		
		if (glVideoMemory::lastBand()) ImInvalidated = false;
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
	glArc(const gl2DPoint_t &box, const glPoint_t &center, P_t radius, const glColor_t &color) 
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
	glArcFill(const gl2DPoint_t &box, const glPoint_t &center, P_t radius, const glColor_t &color) 
		: glArc(box, center, radius, color) { _Name = "glArcFill"; }
	
	void Draw() override
	{
		PlotArcFill(_Region, _Center, _Radius, _FrontColor);
	}
};

class glRectangleRound : public glRectangle
{
public:
	glRectangleRound(const gl2DPoint_t &rect, P_t radius, const glColor_t &color)
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
	glRectangleRoundFill(const gl2DPoint_t &rect, P_t radius, const glColor_t &color)
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

