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

#include <Utils.h>
#include "glTypes.h"
#include <Fonts/GUIFont.h>
#include <string.h>
#include "assert.h"

// helper class for plotting on the Video memory
class glVideoMemoryPlot : protected glVideoMemory
{
public:
	// plot in invalid region and box
	void Plot(const gl2DPoint_t &box, P_t x, P_t y, const glARGB_t &color)	
	{ 
		gl2DPoint_t IVR = Region.Intersection(box);
		if (IVR.IsInside(x, y))
		{
			assert(x < Width && y < Height);
			pVM[x + y*Width] = color; 
		}
	}

	// plot in invalid region
	void Plot(P_t x, P_t y, const glARGB_t &color)
	{ 
		if (Region.IsInside(x, y))
		{
			assert(x < Width && y < Height);
			pVM[x + y*Width] = color; 
		}
	}

	// plot in invalid region
	void Plot(const glPoint_t &p, const glARGB_t &color) { Plot(p.X, p.Y, color); }
	// plot in invalid region and box
	void Plot(const gl2DPoint_t box, const glPoint_t &p, const glARGB_t &color)	{ Plot(box, p.X, p.Y, color); }
};

// gl object to report events
class glEvent
{
public:
	enum class eEventType
	{
		None,
		Slide,
		Click
	} EventType = eEventType::None;

	union uEvent
	{
		struct
		{
			glTouchPoint_t::eSlideAction Action;
		} Slide;
		struct
		{
			P_t X, Y;
		} Click;
	} U;
};

/////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
	class glChain;

class glLink
{
	// Allow glChain to access pNext and pPrev directly
	template<class T>
		friend class glChain;
public:
	//virtual void Init() = 0;
	
	virtual void UpdateLook() = 0;
	virtual void UpdateState(glTouchPoint_t &point) = 0;
	virtual bool IsInvalidated(gl2DPoint_t &invalidRegion) = 0;
	virtual void Invalidate() = 0;
	
	// buble event to top
	virtual void Event(glEvent event) = 0;
	
	glLink *Prev() { return pPrev; }
	glLink *Next() { return pNext; }

protected:
	glLink *pNext = nullptr, *pPrev = nullptr;
};

/////////////////////////////////////////////////////////////////////////////////////////////
// A double linked list
template<class T>
	class glChain
	{
	public:
		// Add a object
		void Add(T *obj)
		{
			if (!obj) return; // Check for nullptr
			
			glLink* pNewLinkObj = dynamic_cast<glLink*>(obj); // Attempt to cast to glLinkObject pointer
			if (!pNewLinkObj) 
			{
				assert(false && "Error: Object does not derive from glLink. Cannot add to glChain.");
				return;
			}

			 // Update pointers
			if (!pHead) 
			{
				pHead = pNewLinkObj;
				pTail = pNewLinkObj;
				pNewLinkObj->pPrev = pNewLinkObj->pNext = nullptr;
			}
			else 
			{
				pTail->pNext = pNewLinkObj;
				pNewLinkObj->pPrev = pTail;
				pNewLinkObj->pNext = nullptr;
				pTail = pNewLinkObj;
			}
		}

		// Function to remove an object from the linked list
		void Remove(T *obj) 
		{
			if (!obj) return; // Check for nullptr

			glLink* pLinkObj = dynamic_cast<glLink*>(obj); // Attempt to cast to glLinkObject pointer
			if (!pLinkObj) {
				assert(false && "Error: Object does not derive from glLink. Cannot remove from glChain.");
				return;
			}

			// Search for the object in the list
			glLink* pCurrent = pHead;
			while (pCurrent) {
				if (pCurrent == pLinkObj) {
					// Update pointers
					if (pCurrent->pPrev) {
						pCurrent->pPrev->pNext = pCurrent->pNext;
					}
					else {
						pHead = pCurrent->pNext;
					}
					if (pCurrent->pNext) {
						pCurrent->pNext->pPrev = pCurrent->pPrev;
					}
					else {
						pTail = pCurrent->pPrev;
					}
					return;
				}
				pCurrent = pCurrent->pNext;
			}

			// If the object is not found
			assert(false && "Error: Object not found in glLink. Cannot remove.");
		}
		
		T *Head() {	return static_cast<T*>(pHead); }
		T *Tail() { return static_cast<T*>(pTail); }
	private:
		glLink* pHead = nullptr;
		glLink* pTail = nullptr;		
	};

/////////////////////////////////////////////////////////////////////////////////////////////
class glObjectAttributes 
{
public:
	glObjectAttributes(char const *name, gl2DPoint_t position, glColor_t color)
	{
		_Name = name;
		_Position = position;
		_Color = color;
	}

	virtual gl2DPoint_t InvalidRegion() 
	{
		return _Position;
	}

	// redraw your self
	virtual void Redraw() = 0;
	// Called upon touch change
	virtual void Touch(const glTouchPoint_t &) = 0;

	// is object invalidated
	bool ImInvalidated = true;
	
	void Move(gl2DPoint_t pos)
	{
		_Position = pos;
	}

protected:
	// attributes
	glColor_t _Color;
	char const *_Name = "glObject";
	gl2DPoint_t _Position;
};

/////////////////////////////////////////////////////////////////////////////////////////////
class glObject : public glObjectAttributes, public glLink
{
public:
	glObject(char const *name, gl2DPoint_t position, glColor_t color)
		: glObjectAttributes(name, position, color) {}

	// Add a object to the page
	void Add(glObject *child)
	{
		ChainChilds.Add(child);
	}

	// called down link to redraw
	void UpdateLook()
	{
		Redraw(); // draw this object

		// Update Childs
		if (ChainChilds.Head() != nullptr)
			ChainChilds.Head()->UpdateLook();

		// Update objects
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

		// Update objects
		if (pNext != nullptr)
			pNext->UpdateState(point);
	}
	
	void Invalidate()
	{
		//Printf("%s Invalidate\n", Name);
		ImInvalidated = true; // this obj
		if (ChainChilds.Head() != nullptr)
			ChainChilds.Head()->Invalidate(); // & all childs
		
		// Update objects
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
	glChain<glObject> ChainChilds;
};

/////////////////////////////////////////////////////////////////////////////////////////////
class glPixel : public glObject, private glVideoMemoryPlot
{
public:
	glPixel() 
		: glObject("Pixel", gl2DPoint_t(), glColor_t()) {}

	glPixel(P_t x, P_t y, glColor_t &color)
		: glObject("Pixel", gl2DPoint_t(x, y, x, y), color) {}

	glPixel(P_t x, P_t y, glColors color)
		: glObject("Pixel", gl2DPoint_t(x, y, x, y), glColor_t(color)) {}

	glPixel(glPoint_t &point, glColor_t &color)
		: glObject("Pixel", gl2DPoint_t(point, point), color) {}

	glPixel(glPoint_t &point, glColors color)
		: glObject("Pixel", gl2DPoint_t(point, point), glColor_t(color)) {}
	
protected:
	// Initialize object
	//virtual void Init() override {}
	// redraw your self
	virtual void Redraw() override
	{
		if (!ImInvalidated) return;
		
		Plot(_Position.LT, _Color);
		if (glVideoMemory::lastBand()) ImInvalidated = false;
	}
	void Touch(const glTouchPoint_t &) override {}
};

/////////////////////////////////////////////////////////////////////////////////////////////
template<int length>
	class glText : public glObject, private glVideoMemoryPlot
	{
	public:
		glText(gl2DPoint_t pos, const FontItem *fontFamily, glColor_t color = glColors::WHITE) 
			: glObject("Text", pos.Nomalize(), color)
		{
			assert(fontFamily != nullptr && "no fontFamily");
			FontFamily = fontFamily;
			Text("empty");
		}
		glText(gl2DPoint_t pos, const char *text, const FontItem *fontFamily, glColor_t color = glColors::WHITE) 
			: glObject("Text", pos.Nomalize(), color)
		{
			assert(fontFamily != nullptr && "no fontFamily");
			FontFamily = fontFamily;
			assert(text != nullptr && "no text");
			Text(text);
		}
		
		void Text(const char *text)
		{
			strncpy(_Text, text, length);
		}
		// redraw your self
		virtual void Redraw1() 
		{
			if (!ImInvalidated) return;

			gl2DPoint_t pos = Center();

			glColor_t color = _Color;
			uint8_t pix[100];
			P_t xs = pos.L();
			char *pc = _Text;
			while (*pc != 0)
			{
				const FontItem *f = &FontFamily[*pc++ -FontFamily->c];
				assert(f->w < sizeof(pix));
				P_t ys = pos.T() + f->yb;
				for (int l = 0, y = ys; l < f->StrideY && y < pos.B(); y++, l++)
				{
					CharPix(f, l, pix, _Color.A);

					for (int x = 0; x < f->w && xs + x < pos.R(); x++)
					{
						if (pix[x] > 0)
						{
							color.A = pix[x];
							Plot(xs + x, y, color);
						}
					}
				}
				xs += f->w;
			}
			/*
						for (int y = pos.T(); y < pos.B(); y++)
							for (int x = pos.L(); x < pos.R(); x++)
							{
								Plot(x, y, _Color);
				}
	*/		
			if (glVideoMemory::lastBand()) ImInvalidated = false;
		}
		
		virtual void Redraw() override
		{
			// Check if the widget needs to be redrawn
			if (!ImInvalidated) return;

			// Calculate the center position of the widget
			gl2DPoint_t pos = Center();

			// Initialize variables
			glColor_t color = _Color;
			uint8_t pix[100];
			P_t xs = pos.L();
			char *pc = _Text;

			// Iterate over each character in the text
			while (*pc != 0)
			{
				// Retrieve font information for the character
				const FontItem *f = &FontFamily[*pc++ -FontFamily->c];
				assert(f->w < sizeof(pix)); // Ensure buffer size is not exceeded
				P_t ys = pos.T() + f->yb;

				// Iterate over each row of the character
				for (int l = 0, y = ys; l < f->StrideY && y < pos.B(); ++l, ++y)
				{
					// Extract pixel data for the row
					CharPix(f, l, pix, _Color.A);

					// Iterate over each pixel in the row
					for (int x = 0; x < f->w; ++x)
					{
						// Plot the pixel if its value is greater than 0
						if (pix[x] > 0)
						{
							color.A = pix[x];
							Plot(xs + x, y, color);
						}
					}
				}

				// Move the horizontal position for the next character
				xs += f->w;
			}

			// Check if the last band of video memory is reached
			if (glVideoMemory::lastBand()) ImInvalidated = false;
		}
		void Touch(const glTouchPoint_t &) override {}
	private:
		char _Text[length];
		const FontItem *FontFamily;

		// Function to extract pixel data for a character
		void CharPix(const FontItem *f, int l, uint8_t pix[], C_t alpha)
		{
			// Initialize variables
			int BitsPerPixel = f->BitsPerPixel;
			uint8_t *Data = &f->Data[f->StrideX * l]; // Pointer to the start of character data
    
			// Clear the pixel buffer
			memset(pix, 0, f->w);

			// Variables for bit manipulation
			int BPP = 1 << f->BitsPerPixel;
			int bitPosition = 0;
			uint8_t currentByte = 0;
			int pixelIndex = 0; // Index for accessing elements in the pixel buffer

			// Iterate over each pixel in the character
			for (int x = 0; x < f->w && pixelIndex < f->w; ++x)
			{
				// Unpack each pixel from the packed data
				//for (int b = BitsPerPixel - 1; b >= 0 && pixelIndex < f->w; --b)
				for (int b = 0; b < BitsPerPixel && pixelIndex < f->w; ++b)
				{
					// Check if we need to read a new byte
					if (bitPosition % 8 == 0)
						currentByte = Data[bitPosition / 8];

					// Extract the pixel value from the current byte
					uint8_t pixelValue = (currentByte >> (8 - (bitPosition % 8) - BitsPerPixel)) & ((1 << BitsPerPixel) - 1);
					if (pixelValue > 0)
						pix[pixelIndex] = alpha / (BPP - pixelValue);

					// Increment the bit position and pixel index
					bitPosition += BitsPerPixel;
					++pixelIndex;
				}
			}
		}
		gl2DPoint_t Center()
		{
			// Initialize variables
			int i = 0;
			P_t w = 0;
			char c;

			// Iterate over each character in the text
			while ((c = _Text[i]) != 0)
			{
				// Retrieve font information for the character
				const FontItem *f = &FontFamily[c - FontFamily->c];
				assert(f->c == c);

				// Accumulate width of characters
				w += f->w;
				i++;
			}

			// Calculate height of font
			P_t h = FontFamily->h;

			// Calculate x-coordinate for centering
			P_t x = _Position.L();
			if (w < _Position.Width())
				x += (_Position.Width() - w) / 2;

			// Calculate y-coordinate for centering
			P_t y = _Position.T();
			if (h < _Position.Height())
				y += (_Position.Height() - h) / 2;

			// Return intersection point between position and calculated rectangle
			return _Position.Intersection(gl2DPoint_t(x, y, x + w, y + h));
		}
		
	};

/////////////////////////////////////////////////////////////////////////////////////////////
// help class
class glPlot2DHelper : public glVideoMemoryPlot
{
public:
	void PlotLine(P_t x0, P_t y0, P_t x1, P_t y1, glARGB_t &color);
	void PlotCircle(glPoint_t &center, P_t radius, glARGB_t &color);
	void PlotCircleFill(glPoint_t &center, P_t radius, glARGB_t &color);
	void PlotArc(gl2DPoint_t box, glPoint_t &center, P_t radius, glARGB_t &color);
	void PlotFillArc(gl2DPoint_t box, glPoint_t &center, P_t radius, glARGB_t &color);
private:
	void PlotLineLow(P_t x0, P_t y0, P_t x1, P_t y1, glARGB_t &color);
	void PlotLineHigh(P_t x0, P_t y0, P_t x1, P_t y1, glARGB_t &color);
	void PlotVLine(P_t x0, P_t y0, P_t y1, glARGB_t &color);
	void PlotHLine(P_t x0, P_t x1, P_t y0, glARGB_t &color);
};

/////////////////////////////////////////////////////////////////////////////////////////////
class glLine : private glPlot2DHelper, public glObject
{
public:
	glLine()
		: glObject("Line", gl2DPoint_t(), glColor_t()) {}
	
	glLine(glPoint_t &start, glPoint_t &end, glColor_t &color)
		: glObject("Line", gl2DPoint_t(start, end), color) {}

	glLine(glPoint_t &start, glPoint_t &end, glColors color)
		: glObject("Line", gl2DPoint_t(start, end), glColor_t(color)) {}

	glLine(P_t x0, P_t y0, P_t x1, P_t y1, glColor_t &color)
		: glObject("Line", gl2DPoint_t(x0, y0, x1, y1), color) {}

	glLine(P_t x0, P_t y0, P_t x1, P_t y1, glColors color)
		: glObject("Line", gl2DPoint_t(x0, y0, x1, y1), glColor_t(color)) {}

protected:
	// Initialize object
//	virtual void Init() override {}
	// redraw your self 
	// return true if anything done
	virtual void Redraw() override
	{
		if (!ImInvalidated) return;
		
		PlotLine(_Position.L(), _Position.T(), _Position.R(), _Position.B(), _Color);
		if (glVideoMemory::lastBand()) ImInvalidated = false;
	}
	void Touch(const glTouchPoint_t &) override {}
};
	
class glRectangle : protected glPlot2DHelper, public glObject
{
public:
	glRectangle()
		: glObject("Rectangle", gl2DPoint_t(), glColor_t()) {}

	glRectangle(gl2DPoint_t rect, glColor_t &color)
		: glObject("Rectangle", rect.Nomalize(), color) {}

	glRectangle(gl2DPoint_t rect, glColors color)
		: glObject("Rectangle", rect.Nomalize(), glColor_t(color)) {}

	glRectangle(glPoint_t start, glPoint_t end, glColor_t &color)
		: glObject("Rectangle", gl2DPoint_t(start, end).Nomalize(), color) {}

	glRectangle(glPoint_t start, glPoint_t end, glColors color)
		: glObject("Rectangle", gl2DPoint_t(start, end).Nomalize(), glColor_t(color)) {}

	glRectangle(P_t l, P_t t, P_t r, P_t b, glColor_t &color)
		: glObject("Rectangle", gl2DPoint_t(l, t, r, b).Nomalize(), color) {}

	glRectangle(P_t l, P_t t, P_t r, P_t b, glColors color)
		: glObject("Rectangle", gl2DPoint_t(l, t, r, b).Nomalize(), glColor_t(color)) {}


	virtual void Draw()
	{
		PlotLine(_Position.LT.X, _Position.LT.Y, _Position.RB.X, _Position.LT.Y, _Color);
		PlotLine(_Position.RB.X, _Position.LT.Y, _Position.RB.X, _Position.RB.Y, _Color);
		PlotLine(_Position.RB.X, _Position.RB.Y, _Position.LT.X, _Position.RB.Y, _Color);
		PlotLine(_Position.LT.X, _Position.RB.Y, _Position.LT.X, _Position.LT.Y, _Color);
	}

	void Inflate(int d)
	{
		_Position = _Position.Inflate(d);		
	}
protected:
	// Initialize object
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
	glRectangleFill(
		gl2DPoint_t rect, 
		glColor_t &color)
		: glRectangle(rect, color) { _Name = "RectangleFill"; }
	glRectangleFill(
		gl2DPoint_t rect, 
		glColors color)
		: glRectangle(rect, color) { _Name = "RectangleFill"; }
	glRectangleFill(
		glPoint_t &start, 
		glPoint_t &end, 
		glColor_t &color)
		: glRectangle(start, end, color) { _Name = "RectangleFill"; }
	glRectangleFill(
		glPoint_t &start, 
		glPoint_t &end,
		glColors color)
		: glRectangle(start, end, color) { _Name = "RectangleFill"; }
	glRectangleFill(P_t left, P_t top, P_t right, P_t bottom, glColor_t &color)
		: glRectangle(left, top, right, bottom, color) { _Name = "RectangleFill"; }
	glRectangleFill(P_t left, P_t top, P_t right, P_t bottom, glColors color)
		: glRectangle(left, top, right, bottom, color) { _Name = "RectangleFill"; }

	void Draw() override
	{
		for (P_t x = _Position.LT.X; x <= _Position.RB.X; x++)
			for (P_t y = _Position.LT.Y; y <= _Position.RB.Y; y++)
				Plot(x, y, _Color);
	}
};

class glCircle : protected glPlot2DHelper, public glObject
{
public:
	glCircle()
		: glObject("Circel", gl2DPoint_t(), glColor_t()) {}
	glCircle(P_t x, P_t y, P_t radius, glColor_t &color) 
		: glObject("Circel", gl2DPoint_t(x - radius, y - radius, x + radius, y + radius), color)
		, _Center(x, y)
		, _Radius(radius) {}
	glCircle(P_t x, P_t y, P_t radius, glColors color) 
		: glObject("Circel", gl2DPoint_t(x - radius, y - radius, x + radius, y + radius), glColor_t(color))
		, _Center(x, y)
		, _Radius(radius) {}

	glCircle(glPoint_t &center, P_t radius, glColor_t &color) 
		: glObject("Circel", gl2DPoint_t(center.Move(-radius, -radius), center.Move(radius, radius)), color)
		, _Center(center)
		, _Radius(radius) {}

	glCircle(glPoint_t &center, P_t radius, glColors color) 
		: glObject("Circel", gl2DPoint_t(center.Move(-radius, -radius), center.Move(radius, radius)), glColor_t(color))
		, _Center(center)
		, _Radius(radius) {}

	virtual void Draw()
	{
		PlotCircle(_Center, _Radius, _Color);
	}

protected:
	// Initialize object
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
	glCircleFill(P_t x, P_t y, P_t radius, glColor_t &color) 
		: glCircle(x, y, radius, color) { _Name = "CircleFill"; }
	glCircleFill(P_t x, P_t y, P_t radius, glColors color) 
		: glCircle(x, y, radius, color) { _Name = "CircleFill"; }

	glCircleFill(glPoint_t &center, P_t radius, glColor_t &color) 
		: glCircle(center, radius, color) {_Name = "CircleFill"; }
	glCircleFill(glPoint_t &center, P_t radius, glColors color) 
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
	glArc(gl2DPoint_t box, glPoint_t center, P_t radius, glColor_t &color) 
		: glCircle(center, radius, color)
		{ _Position = box.Nomalize(); _Name = "glArc"; }
	glArc(gl2DPoint_t box, glPoint_t center, P_t radius, glColors color) 
		: glCircle(center, radius, color)
		{ _Position = box.Nomalize(); _Name = "glArc"; }
	
	virtual void Draw() override
	{
		PlotArc(_Position, _Center, _Radius, _Color);
	}
};

class glArcFill : public glArc
{
public:
	glArcFill() { _Name = "glArcFill"; }
	glArcFill(gl2DPoint_t box, glPoint_t center, P_t radius, glColor_t &color) 
		: glArc(box, center, radius, color) {}
	glArcFill(gl2DPoint_t box, glPoint_t center, P_t radius, glColors color) 
		: glArc(box, center, radius, color) {}

	void Draw() override
	{
		PlotFillArc(_Position, _Center, _Radius, _Color);
	}
};

class glRectangleRound : public glRectangle
{
public:
	glRectangleRound(gl2DPoint_t rect, P_t radius, glColor_t &_Color)
		: glRectangle(rect, _Color) { Radius = radius; }

	glRectangleRound(gl2DPoint_t rect, P_t radius, glColors _Color)
		: glRectangle(rect, _Color) { Radius = radius; }

	glRectangleRound(glPoint_t &start, glPoint_t &end, P_t radius, glColor_t &_Color)
		: glRectangle(start, end, _Color) { Radius = radius; }

	glRectangleRound(glPoint_t &start, glPoint_t &end, P_t radius, glColors _Color)
		: glRectangle(start, end, _Color) { Radius = radius; }
	
	glRectangleRound(P_t left, P_t top, P_t right, P_t bottom, P_t radius, glColor_t &_Color)
		: glRectangle(left, top, right, bottom, _Color) { Radius = radius; }
	
	glRectangleRound(P_t left, P_t top, P_t right, P_t bottom, P_t radius, glColors _Color)
		: glRectangle(left, top, right, bottom, _Color) { Radius = radius; }

	virtual void Draw()
	{
		assert(Radius <= _Position.Width() && Radius <= _Position.Height());
		PlotLine(_Position.L() + Radius, _Position.T(), _Position.R() - Radius, _Position.T(), _Color);
		PlotLine(_Position.R(), _Position.T() + Radius, _Position.R(), _Position.B() - Radius, _Color);
		PlotLine(_Position.R() - Radius, _Position.B(), _Position.L() + Radius, _Position.B(), _Color);
		PlotLine(_Position.L(), _Position.B() - Radius, _Position.L(), _Position.T() + Radius, _Color);

		gl2DPoint_t b(_Position.L(), _Position.T(), _Position.L() + Radius, _Position.T() + Radius);
		glPoint_t p(_Position.L() + Radius, _Position.T() + Radius);
		glArc(b, p, Radius, _Color).Draw();

		b = gl2DPoint_t(_Position.R() - Radius, _Position.T(), _Position.R(), _Position.T() + Radius);
		p = glPoint_t(_Position.R() - Radius, _Position.T() + Radius);
		glArc(b, p, Radius, _Color).Draw();

		b = gl2DPoint_t(_Position.R() - Radius, _Position.B() - Radius, _Position.R(), _Position.B());
		p = glPoint_t(_Position.R() - Radius, _Position.B() - Radius);
		glArc(b, p, Radius, _Color).Draw();

		b = gl2DPoint_t(_Position.L(), _Position.B() - Radius, _Position.L() + Radius, _Position.B());
		p = glPoint_t(_Position.L() + Radius, _Position.B() - Radius);
		glArc(b, p, Radius, _Color).Draw();
	}
private:
	P_t Radius = 5;
};

class glRectangleRoundFill : public glRectangle
{
public:
	glRectangleRoundFill(gl2DPoint_t rect, P_t radius, glColor_t &_Color)
		: glRectangle(rect, _Color) { _Name = "RectangleRoundFill"; Radius = radius; }

	glRectangleRoundFill(gl2DPoint_t rect, P_t radius, glColors _Color)
		: glRectangle(rect, _Color) { Radius = radius; }

	glRectangleRoundFill(glPoint_t &start, glPoint_t &end, P_t radius, glColor_t &_Color)
		: glRectangle(start, end, _Color) { _Name = "RectangleRoundFill"; Radius = radius; }

	glRectangleRoundFill(glPoint_t &start, glPoint_t &end, P_t radius, glColors _Color)
		: glRectangle(start, end, _Color) { _Name = "RectangleRoundFill"; Radius = radius; }

	glRectangleRoundFill(P_t left, P_t top, P_t right, P_t bottom, P_t radius, glColor_t &_Color)
		: glRectangle(left, top, right, bottom, _Color) { _Name = "RectangleRoundFill"; Radius = radius; }

	glRectangleRoundFill(P_t left, P_t top, P_t right, P_t bottom, P_t radius, glColors _Color)
		: glRectangle(left, top, right, bottom, _Color) { _Name = "RectangleRoundFill"; Radius = radius; }

	virtual void Draw()
	{
		assert(Radius <= _Position.Width() && Radius <= _Position.Height());
		glRectangleFill(_Position.L(), _Position.T() + Radius, _Position.R(), _Position.B() - Radius, _Color).Draw();
		
		glRectangleFill(_Position.L() + Radius, _Position.T(), _Position.R() - Radius, _Position.T() + Radius, _Color).Draw();
		glRectangleFill(_Position.L() + Radius, _Position.B() - Radius, _Position.R() - Radius, _Position.B(), _Color).Draw();
	
		gl2DPoint_t b(_Position.L(), _Position.T(), _Position.L() + Radius, _Position.T() + Radius);
		glPoint_t p(_Position.L() + Radius, _Position.T() + Radius);
		glArcFill(b, p, Radius, _Color).Draw();

		b = gl2DPoint_t(_Position.R() - Radius, _Position.T(), _Position.R(), _Position.T() + Radius);
		p = glPoint_t(_Position.R() - Radius, _Position.T() + Radius);
		glArcFill(b, p, Radius, _Color).Draw();

		b = gl2DPoint_t(_Position.R() - Radius, _Position.B() - Radius, _Position.R(), _Position.B());
		p = glPoint_t(_Position.R() - Radius, _Position.B() - Radius);
		glArcFill(b, p, Radius, _Color).Draw();

		b = gl2DPoint_t(_Position.L(), _Position.B() - Radius, _Position.L() + Radius, _Position.B());
		p = glPoint_t(_Position.L() + Radius, _Position.B() - Radius);
		glArcFill(b, p, Radius, _Color).Draw();
	}
private:
	P_t Radius = 5;
};

