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
class glWidgetAttributes 
{
public:
	glWidgetAttributes(char const *name, const gl2DPoint_t &position, const glColor_t &color)
	{
		_Name = name;
		_Region = position;
		_Color = color;
	}

	virtual gl2DPoint_t InvalidRegion() 
	{
		return _Region;
	}

	// redraw your self
	virtual void Redraw() = 0;
	// Called upon touch change
	virtual void Touch(const glTouchPoint_t &) = 0;

	// is widget invalidated
	bool ImInvalidated = true;
	
	gl2DPoint_t &Region()
	{
		return _Region;
	}
	
	void Color(glColor_t color)
	{
		_Color = color;
	}

protected:
	// attributes
	glColor_t _Color;
	char const *_Name = "glWidget";
	gl2DPoint_t _Region;
};

/////////////////////////////////////////////////////////////////////////////////////////////
class glWidget : public glWidgetAttributes, public glLink
{
public:
	glWidget(char const *name, const gl2DPoint_t &position, const glColor_t &color)
		: glWidgetAttributes(name, position, color) {}

	// Add a widget to the page
	void Add(glWidget *child)
	{
		ChainChilds.Add(child);
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
	void UpdateState(glTouchPoint_t &point)
	{
		Touch(point); // send touch

		// Update Childs
		if (ChainChilds.Head() != nullptr)
			ChainChilds.Head()->UpdateState(point);

		// Update widgets
		if (pNext != nullptr)
			pNext->UpdateState(point);
	}
	
	void Invalidate()
	{
		//Printf("%s Invalidate\n", Name);
		ImInvalidated = true; // this obj
		if (ChainChilds.Head() != nullptr)
			ChainChilds.Head()->Invalidate(); // & all childs
		
		// Update widgets
		if (pNext != nullptr)
			pNext->Invalidate();
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

private:
	glChain<glWidget> ChainChilds;
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
class glPixel : public glWidget, private glVideoMemoryPlot
{
public:
	glPixel() 
		: glWidget("Pixel", gl2DPoint_t(), glColor_t()) {}

	glPixel(P_t x, P_t y, glColor_t &color)
		: glWidget("Pixel", gl2DPoint_t(x, y, x, y), color) {}

	glPixel(P_t x, P_t y, glColors color)
		: glWidget("Pixel", gl2DPoint_t(x, y, x, y), glColor_t(color)) {}

	glPixel(glPoint_t &point, glColor_t &color)
		: glWidget("Pixel", gl2DPoint_t(point, point), color) {}

	glPixel(glPoint_t &point, glColors color)
		: glWidget("Pixel", gl2DPoint_t(point, point), glColor_t(color)) {}
	
protected:
	// Redraws the pixel widget.
	virtual void Redraw() override
	{
		if (!ImInvalidated) return;
		
		Plot(_Region.LT(), _Color);
		if (glVideoMemory::lastBand()) ImInvalidated = false;
	}
	void Touch(const glTouchPoint_t &) override {}
};


/////////////////////////////////////////////////////////////////////////////////////////////
// help class
class glPlot2DHelper : public glVideoMemoryPlot
{
public:
	void PlotLine(P_t x0, P_t y0, P_t x1, P_t y1, const glColor_t &color);
	void PlotCircle(const glPoint_t &center, P_t radius, const glColor_t &color);
	void PlotCircleFill(const glPoint_t &center, P_t radius, const glColor_t &color);
	void PlotArc(const gl2DPoint_t &box, const glPoint_t &center, P_t radius, const glColor_t &color);
	void PlotFillArc(const gl2DPoint_t &box, const glPoint_t &center, P_t radius, const glColor_t &color);
private:
	void PlotLineLow(P_t x0, P_t y0, P_t x1, P_t y1, const glColor_t &color);
	void PlotLineHigh(P_t x0, P_t y0, P_t x1, P_t y1, const glColor_t &color);
	void PlotVLine(P_t x0, P_t y0, P_t y1, const glColor_t &color);
	void PlotHLine(P_t x0, P_t x1, P_t y0, const glColor_t &color);
};

/////////////////////////////////////////////////////////////////////////////////////////////
class glLine : private glPlot2DHelper, public glWidget
{
public:
	glLine()
		: glWidget("Line", gl2DPoint_t(), glColor_t()) {}
	
	glLine(const glPoint_t &start, const glPoint_t &end, const glColor_t &color)
		: glWidget("Line", gl2DPoint_t(start, end), color) {}

	glLine(const glPoint_t &start, const glPoint_t &end, const glColors &color)
		: glWidget("Line", gl2DPoint_t(start, end), glColor_t(color)) {}

	glLine(P_t x0, P_t y0, P_t x1, P_t y1, glColor_t &color)
		: glWidget("Line", gl2DPoint_t(x0, y0, x1, y1), color) {}

	glLine(P_t x0, P_t y0, P_t x1, P_t y1, const glColors &color)
		: glWidget("Line", gl2DPoint_t(x0, y0, x1, y1), glColor_t(color)) {}

protected:
	// Initialize widget
//	virtual void Init() override {}
	// redraw your self 
	// return true if anything done
	virtual void Redraw() override
	{
		if (!ImInvalidated) return;
		
		PlotLine(_Region.L(), _Region.T(), _Region.R(), _Region.B(), _Color);
		if (glVideoMemory::lastBand()) ImInvalidated = false;
	}
	void Touch(const glTouchPoint_t &) override {}
};
	
class glRectangle : protected glPlot2DHelper, public glWidget
{
public:
	glRectangle()
		: glWidget("Rectangle", gl2DPoint_t(), glColor_t()) {}

	glRectangle(const gl2DPoint_t &rect, const glColor_t &color)
		: glWidget("Rectangle", rect.Normalize(), color) {}

	glRectangle(const gl2DPoint_t &rect, const glColors &color)
		: glWidget("Rectangle", rect.Normalize(), glColor_t(color)) {}

	glRectangle(const glPoint_t &start, const glPoint_t &end, const glColor_t &color)
		: glWidget("Rectangle", gl2DPoint_t(start, end).Normalize(), color) {}

	glRectangle(const glPoint_t &start, const glPoint_t &end, const glColors &color)
		: glWidget("Rectangle", gl2DPoint_t(start, end).Normalize(), glColor_t(color)) {}

	glRectangle(P_t l, P_t t, P_t r, P_t b, const glColor_t &color)
		: glWidget("Rectangle", gl2DPoint_t(l, t, r, b).Normalize(), color) {}

	glRectangle(P_t l, P_t t, P_t r, P_t b, const glColors &color)
		: glWidget("Rectangle", gl2DPoint_t(l, t, r, b).Normalize(), glColor_t(color)) {}


	virtual void Draw()
	{
		PlotLine(_Region.L(), _Region.T(), _Region.R(), _Region.T(), _Color);
		PlotLine(_Region.R(), _Region.T(), _Region.R(), _Region.B(), _Color);
		PlotLine(_Region.R(), _Region.B(), _Region.L(), _Region.B(), _Color);
		PlotLine(_Region.L(), _Region.B(), _Region.L(), _Region.T(), _Color);
	}

	void Inflate(int d)
	{
		_Region = _Region.Inflate(d);		
	}
protected:
	// Initialize widget
//	virtual void Init() override {}
	// redraw your self
	// return true if anything done
	virtual void Redraw() override
	{
		if (!ImInvalidated) return;

		Draw();
		
		if (glVideoMemory::lastBand()) ImInvalidated = false;
	}
	void Touch(const glTouchPoint_t &) override {}
};

class glRectangleFill : public glRectangle
{
public:
	glRectangleFill(const gl2DPoint_t &rect, const glColor_t &color)
		: glRectangle(rect, color) { _Name = "RectangleFill"; }
	glRectangleFill(const gl2DPoint_t &rect, const glColors &color)
		: glRectangle(rect, color) { _Name = "RectangleFill"; }
	glRectangleFill(const glPoint_t &start, const glPoint_t &end, const glColor_t &color)
		: glRectangle(start, end, color) { _Name = "RectangleFill"; }
	glRectangleFill(const glPoint_t &start, const glPoint_t &end, const glColors &color)
		: glRectangle(start, end, color) { _Name = "RectangleFill"; }
	glRectangleFill(P_t left, P_t top, P_t right, P_t bottom, glColor_t &color)
		: glRectangle(left, top, right, bottom, color) { _Name = "RectangleFill"; }
	glRectangleFill(P_t left, P_t top, P_t right, P_t bottom, glColors color)
		: glRectangle(left, top, right, bottom, color) { _Name = "RectangleFill"; }

	void Draw() override
	{
		for (P_t x = _Region.LT().X; x <= _Region.RB().X; x++)
			for (P_t y = _Region.LT().Y; y <= _Region.RB().Y; y++)
				Plot(x, y, _Color);
	}
};

class glCircle : protected glPlot2DHelper, public glWidget
{
public:
	glCircle()
		: glWidget("Circel", gl2DPoint_t(), glColor_t()) {}
	glCircle(P_t x, P_t y, P_t radius, const glColor_t &color) 
		: glWidget("Circel", gl2DPoint_t(x - radius, y - radius, x + radius, y + radius), color)
		, _Center(x, y)
		, _Radius(radius) {}
	glCircle(P_t x, P_t y, P_t radius, const glColors &color) 
		: glWidget("Circel", gl2DPoint_t(x - radius, y - radius, x + radius, y + radius), glColor_t(color))
		, _Center(x, y)
		, _Radius(radius) {}

	glCircle(const glPoint_t &center, P_t radius, const glColor_t &color) 
		: glWidget("Circel", gl2DPoint_t(center.Displace(-radius, -radius), center.Displace(radius, radius)), color)
		, _Center(center)
		, _Radius(radius) {}

	glCircle(const glPoint_t &center, P_t radius, const glColors &color) 
		: glWidget("Circel", gl2DPoint_t(center.Displace(-radius, -radius), center.Displace(radius, radius)), glColor_t(color))
		, _Center(center)
		, _Radius(radius) {}

	virtual void Draw()
	{
		PlotCircle(_Center, _Radius, _Color);
	}

protected:
	// Initialize widget
//	virtual void Init() override {}
	// redraw your self
	// return true if anything done
	virtual void Redraw() override
	{
		if (!ImInvalidated) return;
		
		Draw();
		
		if (glVideoMemory::lastBand()) ImInvalidated = false;
	}
	void Touch(const glTouchPoint_t &) override {}

	glPoint_t _Center;
	P_t _Radius;
};

class glCircleFill : public glCircle
{
public:
	glCircleFill(P_t x, P_t y, P_t radius, const glColor_t &color) 
		: glCircle(x, y, radius, color) { _Name = "CircleFill"; }
	glCircleFill(P_t x, P_t y, P_t radius, const glColors &color) 
		: glCircle(x, y, radius, color) { _Name = "CircleFill"; }

	glCircleFill(glPoint_t &center, P_t radius, const glColor_t &color) 
		: glCircle(center, radius, color) {_Name = "CircleFill"; }
	glCircleFill(glPoint_t &center, P_t radius, const glColors &color) 
		: glCircle(center, radius, color) {_Name = "CircleFill"; }

	void Draw() override
	{
		PlotCircleFill(_Center, _Radius, _Color);
	}
};

class glArc : public glCircle
{
public:
	glArc() { _Name = "glArc"; }
	glArc(const gl2DPoint_t &box, const glPoint_t &center, P_t radius, const glColor_t &color) 
		: glCircle(center, radius, color)
		{ _Region = box.Normalize(); _Name = "glArc"; }
	glArc(const gl2DPoint_t &box, const glPoint_t &center, P_t radius, const glColors &color) 
		: glCircle(center, radius, color)
		{ _Region = box.Normalize(); _Name = "glArc"; }
	
	virtual void Draw() override
	{
		PlotArc(_Region, _Center, _Radius, _Color);
	}
};

class glArcFill : public glArc
{
public:
	glArcFill() { _Name = "glArcFill"; }
	glArcFill(const gl2DPoint_t &box, const glPoint_t &center, P_t radius, const glColor_t &color) 
		: glArc(box, center, radius, color) {}
	glArcFill(const gl2DPoint_t &box, const glPoint_t &center, P_t radius, const glColors &color) 
		: glArc(box, center, radius, color) {}

	void Draw() override
	{
		PlotFillArc(_Region, _Center, _Radius, _Color);
	}
};

class glRectangleRound : public glRectangle
{
public:
	glRectangleRound(const gl2DPoint_t &rect, P_t radius, const glColor_t &color)
		: glRectangle(rect, color) { Radius = radius; }

	glRectangleRound(const gl2DPoint_t &rect, P_t radius, const glColors &color)
		: glRectangle(rect, color) { Radius = radius; }

	glRectangleRound(const glPoint_t &start, const glPoint_t &end, P_t radius, const glColor_t &color)
		: glRectangle(start, end, color) { Radius = radius; }

	glRectangleRound(const glPoint_t &start, const glPoint_t &end, P_t radius, const glColors &color)
		: glRectangle(start, end, color) { Radius = radius; }
	
	glRectangleRound(P_t left, P_t top, P_t right, P_t bottom, P_t radius, const glColor_t &color)
		: glRectangle(left, top, right, bottom, color) { Radius = radius; }
	
	glRectangleRound(P_t left, P_t top, P_t right, P_t bottom, P_t radius, const glColors &color)
		: glRectangle(left, top, right, bottom, color) { Radius = radius; }

	virtual void Draw()
	{
		assert(Radius <= _Region.Width() && Radius <= _Region.Height());
		PlotLine(_Region.L() + Radius, _Region.T(), _Region.R() - Radius, _Region.T(), _Color);
		PlotLine(_Region.R(), _Region.T() + Radius, _Region.R(), _Region.B() - Radius, _Color);
		PlotLine(_Region.R() - Radius, _Region.B(), _Region.L() + Radius, _Region.B(), _Color);
		PlotLine(_Region.L(), _Region.B() - Radius, _Region.L(), _Region.T() + Radius, _Color);

		gl2DPoint_t b(_Region.L(), _Region.T(), _Region.L() + Radius, _Region.T() + Radius);
		glPoint_t p(_Region.L() + Radius, _Region.T() + Radius);
		glArc(b, p, Radius, _Color).Draw();

		b = gl2DPoint_t(_Region.R() - Radius, _Region.T(), _Region.R(), _Region.T() + Radius);
		p = glPoint_t(_Region.R() - Radius, _Region.T() + Radius);
		glArc(b, p, Radius, _Color).Draw();

		b = gl2DPoint_t(_Region.R() - Radius, _Region.B() - Radius, _Region.R(), _Region.B());
		p = glPoint_t(_Region.R() - Radius, _Region.B() - Radius);
		glArc(b, p, Radius, _Color).Draw();

		b = gl2DPoint_t(_Region.L(), _Region.B() - Radius, _Region.L() + Radius, _Region.B());
		p = glPoint_t(_Region.L() + Radius, _Region.B() - Radius);
		glArc(b, p, Radius, _Color).Draw();
	}
private:
	P_t Radius = 5;
};

class glRectangleRoundFill : public glRectangle
{
public:
	glRectangleRoundFill(const gl2DPoint_t &rect, P_t radius, const glColor_t &color)
		: glRectangle(rect, color) { _Name = "RectangleRoundFill"; Radius = radius; }

	glRectangleRoundFill(const gl2DPoint_t &rect, P_t radius, const glColors &color)
		: glRectangle(rect, color) { Radius = radius; }

	glRectangleRoundFill(const glPoint_t &start, const glPoint_t &end, P_t radius, glColor_t &color)
		: glRectangle(start, end, color) { _Name = "RectangleRoundFill"; Radius = radius; }

	glRectangleRoundFill(const glPoint_t &start, const glPoint_t &end, P_t radius, const glColors &color)
		: glRectangle(start, end, color) { _Name = "RectangleRoundFill"; Radius = radius; }

	glRectangleRoundFill(P_t left, P_t top, P_t right, P_t bottom, P_t radius, const glColor_t &color)
		: glRectangle(left, top, right, bottom, color) { _Name = "RectangleRoundFill"; Radius = radius; }

	glRectangleRoundFill(P_t left, P_t top, P_t right, P_t bottom, P_t radius, const glColors &color)
		: glRectangle(left, top, right, bottom, color) { _Name = "RectangleRoundFill"; Radius = radius; }

	virtual void Draw()
	{
		assert(Radius <= _Region.Width() && Radius <= _Region.Height());
		glRectangleFill(_Region.L(), _Region.T() + Radius, _Region.R(), _Region.B() - Radius, _Color).Draw();
		
		glRectangleFill(_Region.L() + Radius, _Region.T(), _Region.R() - Radius, _Region.T() + Radius, _Color).Draw();
		glRectangleFill(_Region.L() + Radius, _Region.B() - Radius, _Region.R() - Radius, _Region.B(), _Color).Draw();
	
		gl2DPoint_t b(_Region.L(), _Region.T(), _Region.L() + Radius, _Region.T() + Radius);
		glPoint_t p(_Region.L() + Radius, _Region.T() + Radius);
		glArcFill(b, p, Radius, _Color).Draw();

		b = gl2DPoint_t(_Region.R() - Radius, _Region.T(), _Region.R(), _Region.T() + Radius);
		p = glPoint_t(_Region.R() - Radius, _Region.T() + Radius);
		glArcFill(b, p, Radius, _Color).Draw();

		b = gl2DPoint_t(_Region.R() - Radius, _Region.B() - Radius, _Region.R(), _Region.B());
		p = glPoint_t(_Region.R() - Radius, _Region.B() - Radius);
		glArcFill(b, p, Radius, _Color).Draw();

		b = gl2DPoint_t(_Region.L(), _Region.B() - Radius, _Region.L() + Radius, _Region.B());
		p = glPoint_t(_Region.L() + Radius, _Region.B() - Radius);
		glArcFill(b, p, Radius, _Color).Draw();
	}
private:
	P_t Radius = 5;
};

