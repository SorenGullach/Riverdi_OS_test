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

#include <stdint.h>
#include <cmath>
#include <assert.h>
#include "MemoryDefs.h"
#include "glColorTable.h"

typedef uint16_t P_t;
typedef uint8_t C_t;

// Define a structure to represent colors in ARGB format
struct glARGB_t
{
	C_t B, G, R, A; // fits LTDC layout
} __PACKED; 

struct glColor_t : public glARGB_t
{
	glColor_t()
	{
		R = G = B = 0; A = 255;
	}
	glColor_t(glColors color)
	{
		R = (static_cast<uint32_t>(color) >> 16) & 0xFF;
		G = (static_cast<uint32_t>(color) >> 8) & 0xFF;
		B = (static_cast<uint32_t>(color)) & 0xFF;
		A = 255;
	}
	glColor_t(C_t red, C_t green, C_t blue, C_t alpha = 255)
	{
		R = red; G = green; B = blue; A = alpha;
	}
	
	// Function to find the nearest color from the enum list based on an RGB color
	static glColors FindNearestColor(C_t r, C_t g, C_t b) 
	{
		glColors nearestColor = glColors::BLACK; // Default to black
		float minDistance = std::numeric_limits<float>::max();

		// Iterate through all colors in the enum list
		for (uint32_t i = 0; i < glColorTableSize; ++i) 
		{
			glColors currentColor = static_cast<glColors>(i);
			glColor_t Color(currentColor);

			// Calculate the distance between the current color and the input RGB color
			float distance = sqrtf(powf(Color.R - r, 2) + powf(Color.G - g, 2) + powf(Color.B - b, 2));

			// Update nearest color if a closer match is found
			if (distance < minDistance) 
			{
				minDistance = distance;
				nearestColor = currentColor;
			}
		}

		return nearestColor;
	}
}; 
static_assert(sizeof(glColor_t) == 4, "Wrong size");

// a 1D point
struct glPoint_t {
	P_t X, Y;
    
	glPoint_t()
		: X(0)
		, Y(0) {}
	glPoint_t(P_t x, P_t y)
		: X(x)
		, Y(y) {}
    
	glPoint_t Move(int dx, int dy)  const 
	{
		return glPoint_t(X + dx, Y + dy);
	}
};

// a 2D point
struct gl2DPoint_t
{
	glPoint_t LT, RB;
	
	gl2DPoint_t() {}
	gl2DPoint_t(const glPoint_t &lt, const glPoint_t &rb)
		: LT(lt)
		, RB(rb)
	{ 
	}
	gl2DPoint_t(P_t left, P_t top, P_t right, P_t bottom)
		: LT(left, top)
		, RB(right, bottom)
	{ 
	}
	P_t L()	{ return LT.X; }
	P_t T()	{ return LT.Y; }
	P_t R()	{ return RB.X; }
	P_t B()	{ return RB.Y; }

	void L(const P_t &t)	{ LT.X = t; }
	void T(const P_t &t)	{ LT.Y = t; }
	void R(const P_t &t)	{ RB.X = t; }
	void B(const P_t &t)	{ RB.Y = t; }

	gl2DPoint_t Nomalize()
	{
		gl2DPoint_t pt = *this;
		if (pt.L() > pt.R()) { P_t t = pt.R(); pt.R(L()); pt.L(t); }
		if (pt.T() > pt.B()) { P_t t = pt.B(); pt.B(T()); pt.T(t); }
		return pt;
	}
	bool IsInside(P_t x, P_t y) const
	{
		return x >= LT.X && x <= RB.X && y >= LT.Y && y <= RB.Y;
	}
	bool IsInside(const glPoint_t &p) const
	{
		return IsInside(p.X, p.Y);
	}
	P_t Width() const { return RB.X - LT.X; }
	P_t Height() const { return RB.Y - LT.Y; }
	bool Empty() const { return Width() == 0 || Height() == 0; }

	gl2DPoint_t Move(int dx, int dy) const
	{
		return gl2DPoint_t(LT.Move(dx, dy), RB.Move(dx, dy));
	}

	gl2DPoint_t Inflate(int d) const
	{
		return gl2DPoint_t(LT.Move(-d, -d), RB.Move(d, d));
	}
	gl2DPoint_t Union(const gl2DPoint_t &Position) const
	{
		if (Empty()) return Position;
		if (Position.Empty()) return *this;
		
		P_t newLeft = LT.X;
		P_t newTop = LT.Y;
		P_t newRight = RB.X;
		P_t newBottom = RB.Y;

		// Calculate the minimum left and top coordinates
		if (Position.LT.X < LT.X) newLeft = Position.LT.X;
		if (Position.LT.Y < LT.Y) newTop = Position.LT.Y;

		// Calculate the maximum right and bottom coordinates
		if (Position.RB.X > RB.X) newRight = Position.RB.X;
		if (Position.RB.Y > RB.Y) newBottom = Position.RB.Y;

		// Update the position to encompass the other position
		return gl2DPoint_t(newLeft, newTop, newRight, newBottom);
	}
	gl2DPoint_t Intersection(const gl2DPoint_t &Position) const
	{
		if (Empty()) return Position;
			
		P_t newLeft = LT.X;
		P_t newTop = LT.Y;
		P_t newRight = RB.X;
		P_t newBottom = RB.Y;

		// Calculate the minimum right and bottom coordinates
		if (Position.LT.X > LT.X) newLeft = Position.LT.X;
		if (Position.LT.Y > LT.Y) newTop = Position.LT.Y;

		// Calculate the maximum left and top coordinates
		if (Position.RB.X < RB.X) newRight = Position.RB.X;
		if (Position.RB.Y < RB.Y) newBottom = Position.RB.Y;

		// Check if intersection exists
		if (newLeft < newRight && newTop < newBottom) 
		{
			return gl2DPoint_t(newLeft, newTop, newRight, newBottom);
		}
		else 
		{
			// Return an empty rectangle if there's no intersection
			return gl2DPoint_t();
		}
	}	
};

class glVideoMemory
{
protected:
	// pointer to graphic buffer; 
	static glARGB_t *pVM; 
	// width & height of graphic buffer
	static P_t Width, Height; 
	
public:
	// band drawing control
	static P_t ls, yStart, yEnd; // lines to draw on each blanking
	static gl2DPoint_t Region; // invalid region
	// is this the last band
	static bool lastBand() { return yEnd == Height; }
	static void LimitRegion()
	{
		Region = Region.Intersection(gl2DPoint_t(0, yStart, Width - 1, yEnd - 1));
	}
	static void NextRegion()
	{
		yStart += ls; 
		if (yStart >= Height) yStart = 0;
		yEnd = yStart + ls;
		if (yEnd >= Height) yEnd = Height;
		Region = gl2DPoint_t(0, 0, 0, 0);
	}
	
	static void Init(const P_t w, const P_t h, glARGB_t *pvm)
	{
		pVM = pvm; 
		Width = w; Height = h;
		ls = h;
		yStart = 0, yEnd = yStart + ls;
		Region = gl2DPoint_t(0, 0, 0, 0);
	}
};

#include <math.h>
#define M_PI 3.1415926535897932384626433832795
glColor_t RainbowColorGradient(float value);

// Action/Point of Touch
struct glTouchPoint_t
{
	int16_t X, Y, DX, DY, ZX, ZY;
	enum class eTipAction
	{
		Tip, 
		Up, 
		Slide, 
		Zoom, 
		ZoomWait
	};
	eTipAction TipAction = eTipAction::Up;
	enum eSlideAction
	{
		None,
		Up,
		Right,
		Down,
		Left,
	};
	eSlideAction SlideAction = eSlideAction::None;
	
	// Equality operator ==
	bool operator==(const glTouchPoint_t& other) const {
		return X == other.X && Y == other.Y && DX == other.DX &&
		       DY == other.DY && ZX == other.ZX && ZY == other.ZY &&
		       TipAction == other.TipAction;
	}

	// Inequality operator !=
	bool operator!=(const glTouchPoint_t& other) const {
		return !(*this == other);
	}
};

class Lock {
public:
	Lock()
		: locked(false) {}

	void lock() {
		while (__sync_lock_test_and_set(&locked, true)) {
			// Spin until the lock is acquired
		}
	}

	void unlock() {
		__sync_lock_release(&locked);
	}

private:
	bool locked;
};

// callback class for (glMain)
class cbDisplay
{
	Lock mtx;
public:
	void Blanking()
	{
		cbBlanking();
	}
	void Touch(glTouchPoint_t& tp)
	{
		NVIC_DisableIRQ(LTDC_IRQn);
		cbTouch(tp);
		NVIC_EnableIRQ(LTDC_IRQn);
	}
	virtual void cbBlanking() = 0;
	virtual void cbTouch(glTouchPoint_t&) = 0;
};
