/**
 * @file MyHeaderFile.h
 * @brief This file contains the definitions and implementations for graphics-related structures and classes.
 * 
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
#include <assert.h>
#include "MemoryDefs.h"
#include "glColor.h"

typedef uint16_t P_t;

/**
 * @brief Represents a 1D point with x and y coordinates.
 */
struct glPoint_t {
	P_t X, Y;

	/**
	 * @brief Default constructor initializing the point to (0, 0).
	 */
	glPoint_t()
		: X(0)
		, Y(0) {}

	/**
	 * @brief Constructor to initialize the point with specific coordinates.
	 * @param x The x-coordinate.
	 * @param y The y-coordinate.
	 */
	glPoint_t(const P_t x, const P_t y)
		: X(x)
		, Y(y) {}

	/**
	 * @brief Displaces the point by the specified amounts in the x and y directions.
	 * @param dx The displacement in the x direction.
	 * @param dy The displacement in the y direction.
	 * @return A new displaced point.
	 */
	glPoint_t Displace(const int dx, const int dy) const 
	{    
		// Calculate the new x-coordinate after displacement
		P_t newX = (dx < 0 && X > -dx) ? X + dx : (dx > 0 ? X + dx : X);

		// Calculate the new y-coordinate after displacement
		P_t newY = (dy < 0 && Y > -dy) ? Y + dy : (dy > 0 ? Y + dy : Y);

		// Return the displaced point
		return glPoint_t(newX, newY); 
	}

	/**
	 * @brief Displaces the point by the coordinates of another point.
	 * @param p The point providing displacement coordinates.
	 * @return A new displaced point.
	 */
	glPoint_t Displace(const glPoint_t &p)  const {    return Displace(p.X, p.Y); }
};

/**
 * @brief Represents a 2D rectangular region defined by two points.
 */
struct gl2DPoint_t
{
	/**
	 * @brief Default constructor.
	 */
	gl2DPoint_t() {}

	/**
	 * @brief Constructor to initialize the 2D point with top-left and bottom-right points.
	 * @param lt The top-left point.
	 * @param rb The bottom-right point.
	 */
	gl2DPoint_t(const glPoint_t &lt, const glPoint_t &rb)
		: _LT(lt)
		, _RB(rb) 
	{ 
	}

	/**
	 * @brief Constructor to initialize the 2D point with specific coordinates.
	 * @param left The left coordinate.
	 * @param top The top coordinate.
	 * @param right The right coordinate.
	 * @param bottom The bottom coordinate.
	 */
	gl2DPoint_t(P_t left, P_t top, P_t right, P_t bottom)
		: _LT(left, top)
		, _RB(right, bottom) 
	{ 
	}

	P_t L() const { return _LT.X; }
	P_t T() const { return _LT.Y; }
	P_t R() const { return _RB.X; } 
	P_t B() const { return _RB.Y; }

	void L(const P_t t) { _LT.X = t; }
	void T(const P_t t) { _LT.Y = t; }
	void R(const P_t t) { _RB.X = t; }
	void B(const P_t t) { _RB.Y = t; }

	glPoint_t LT() const { return _LT; } 
	glPoint_t LB() const { return glPoint_t(_LT.X, _RB.Y); } 
	glPoint_t RT() const { return glPoint_t(_RB.X, _LT.Y); } 
	glPoint_t RB() const { return _RB; } 

	P_t Width() const { return _RB.X - _LT.X; }
	P_t Height() const { return _RB.Y - _LT.Y; }
	bool Empty() const { return Width() == 0 || Height() == 0; }

	gl2DPoint_t Normalize() const 
	{
		gl2DPoint_t pt = *this;
		if (pt.L() > pt.R()) { P_t t = pt.R(); pt.R(L()); pt.L(t); }
		if (pt.T() > pt.B()) { P_t t = pt.B(); pt.B(T()); pt.T(t); }
		return pt;
	}

	bool IsInside(const P_t x, const P_t y) const { return x >= _LT.X && x <= _RB.X && y >= _LT.Y && y <= _RB.Y; }
	bool IsInside(const glPoint_t &p) const { return IsInside(p.X, p.Y); }

	gl2DPoint_t Displace(const int dx, const int dy) const { return gl2DPoint_t(_LT.Displace(dx, dy), _RB.Displace(dx, dy)); }
	gl2DPoint_t Displace(const glPoint_t &p) const { return Displace(p.X, p.Y); }

	void MoveTo(const int l, const int t, const int r, const int b) { _LT = glPoint_t(l, t); _RB = glPoint_t(r, b); }
	void MoveTo(const gl2DPoint_t &p) { _LT = p.LT(), _RB = p.RB(); }

	gl2DPoint_t Inflate(int d) const { return gl2DPoint_t(_LT.Displace(-d, -d), _RB.Displace(d, d)); }
	gl2DPoint_t Inflate(int l, int t, int r, int b) const { return gl2DPoint_t(_LT.Displace(-l, -t), _RB.Displace(r, b)); }
	
	gl2DPoint_t Union(const gl2DPoint_t &region) const
	{
		if (Empty()) return region;
		if (region.Empty()) return *this;

		gl2DPoint_t Region2 = region.Normalize();

		P_t newLeft = _LT.X;
		P_t newTop = _LT.Y;
		P_t newRight = _RB.X;
		P_t newBottom = _RB.Y;

		// Calculate the minimum left and top coordinates
		if (Region2._LT.X < _LT.X) newLeft = Region2._LT.X;
		if (Region2._LT.Y < _LT.Y) newTop = Region2._LT.Y;

		// Calculate the maximum right and bottom coordinates
		if (Region2._RB.X > _RB.X) newRight = Region2._RB.X;
		if (Region2._RB.Y > _RB.Y) newBottom = Region2._RB.Y;

		// Update the position to encompass the other position
		return gl2DPoint_t(newLeft, newTop, newRight, newBottom);
	}

	gl2DPoint_t Intersection(const gl2DPoint_t &region) const
	{
		if (Empty()) return region;

		gl2DPoint_t Region2 = region.Normalize();

		P_t newLeft = _LT.X;
		P_t newTop = _LT.Y;
		P_t newRight = _RB.X;
		P_t newBottom = _RB.Y;

		// Calculate the minimum right and bottom coordinates
		if (Region2._LT.X > _LT.X) newLeft = Region2._LT.X;
		if (Region2._LT.Y > _LT.Y) newTop = Region2._LT.Y;

		// Calculate the maximum left and top coordinates
		if (Region2._RB.X < _RB.X) newRight = Region2._RB.X;
		if (Region2._RB.Y < _RB.Y) newBottom = Region2._RB.Y;

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
protected:
	glPoint_t _LT, _RB;
};

/**
 * @brief Represents video memory and provides methods to manage it.
 */
class glVideoMemory
{
public:
	/**
	 * @brief Gets the screen width.
	 * @return The width of the screen.
	 */
	static P_t ScreenWidth() { return _ScreenWidth; }

	/**
	 * @brief Gets the screen height.
	 * @return The height of the screen.
	 */
	static P_t ScreenHeight() { return _ScreenHeight; }
protected:
	// Pointer to graphic buffer
	static glARGB_t *pVM; 
	// Width & height of graphic buffer
	static P_t _ScreenWidth, _ScreenHeight; 

public:
	// Band drawing control
	static P_t ls, yStart, yEnd; // Lines to draw on each blanking
	static gl2DPoint_t InvalidRegion; // Invalid region

	/**
	 * @brief Checks if this is the last band.
	 * @return True if this is the last band, false otherwise.
	 */
	static bool lastBand() { return yEnd == _ScreenHeight; }

	/**
	 * @brief Limits the region to the intersection with the current drawing region.
	 */
	static void LimitRegion()
	{
		InvalidRegion = InvalidRegion.Intersection(gl2DPoint_t(0, yStart, _ScreenWidth - 1, yEnd - 1));
	}

	/**
	 * @brief Moves to the next region to be drawn.
	 */
	static void NextRegion()
	{
		yStart += ls; 
		if (yStart >= _ScreenHeight) yStart = 0;
		yEnd = yStart + ls;
		if (yEnd >= _ScreenHeight) yEnd = _ScreenHeight;
		InvalidRegion = gl2DPoint_t(0, 0, 0, 0);
	}

	/**
	 * @brief Initializes the video memory with the specified dimensions and buffer.
	 * @param w The width of the screen.
	 * @param h The height of the screen.
	 * @param pvm Pointer to the video memory buffer.
	 */
	static void Init(const P_t w, const P_t h, glARGB_t *pvm)
	{
		pVM = pvm; 
		_ScreenWidth = w; _ScreenHeight = h;
		ls = h;
		yStart = 0, yEnd = yStart + ls;
		InvalidRegion = gl2DPoint_t(0, 0, 0, 0);
	}
};

/**
 * @brief Represents a point of touch, with actions and slide directions.
 */
struct glTouchPoint_t
{
	int16_t X, Y, DX, DY, ZX, ZY;

	/**
	 * @brief Enumeration of touch actions.
	 */
	enum class eTipAction
	{
		Tip, 
		Up, 
		Slide, 
		Zoom, 
		ZoomWait
	};
	eTipAction TipAction = eTipAction::Up;

	/**
	 * @brief Enumeration of slide actions.
	 */
	enum eSlideAction
	{
		None,
		Up,
		Right,
		Down,
		Left,
	};
	eSlideAction SlideAction = eSlideAction::None;

	/**
	 * @brief Equality operator.
	 * @param other The other touch point to compare with.
	 * @return True if the touch points are equal, false otherwise.
	 */
	bool operator==(const glTouchPoint_t& other) const {
		return X == other.X && Y == other.Y && DX == other.DX &&
		       DY == other.DY && ZX == other.ZX && ZY == other.ZY &&
		       TipAction == other.TipAction;
	}

	/**
	 * @brief Inequality operator.
	 * @param other The other touch point to compare with.
	 * @return True if the touch points are not equal, false otherwise.
	 */
	bool operator!=(const glTouchPoint_t& other) const {
		return !(*this == other);
	}
};

/**
 * @class glEvent
 * @brief A class to report graphical events such as slides and clicks.
 * 
 * This class represents events that can occur in a graphical user interface. 
 * It supports events like sliding and clicking, storing relevant event data.
 */
class glEvent {
public:
	/**
	 * @enum eEventType
	 * @brief Enum to represent the type of event.
	 * 
	 * This enum defines the types of events that can be reported: None, Slide, and Click.
	 */
	enum class eEventType {
		None,
		///< No event.
		Slide,
		///< A slide event.
		Click   ///< A click event.
	} EventType = eEventType::None; ///< The type of the current event.

	/**
	 * @union uEvent
	 * @brief Union to store event-specific data.
	 * 
	 * This union holds data specific to the type of event that occurred. It can store data
	 * for slide actions or click positions.
	 */
	union uEvent {
		/**
		 * @struct Slide
		 * @brief Structure to store slide event data.
		 * 
		 * This structure holds data for a slide event, including the slide action.
		 */
		struct {
			glTouchPoint_t::eSlideAction Action; ///< The action of the slide event.
		} Slide;

		/**
		 * @struct Click
		 * @brief Structure to store click event data.
		 * 
		 * This structure holds the coordinates of a click event.
		 */
		struct {
			P_t X; ///< The X-coordinate of the click event.
			P_t Y; ///< The Y-coordinate of the click event.
		} Click;
	} U; ///< Union to store the event data.
};

/**
 * @brief Lock class for mutual exclusion.
 */
class Lock {
public:
	/**
	 * @brief Default constructor.
	 */
	Lock()
		: locked(false) {}

	/**
	 * @brief Acquires the lock.
	 */
	void lock() {
		while (__sync_lock_test_and_set(&locked, true)) {
			// Spin until the lock is acquired
		}
	}

	/**
	 * @brief Releases the lock.
	 */
	void unlock() {
		__sync_lock_release(&locked);
	}

private:
	bool locked; ///< Indicates if the lock is currently held.
};

/**
 * @brief Abstract callback class for display-related events.
 */
class cbDisplay 
{
	Lock mtx;
public:
	/**
	 * @brief Invoked during the blanking period.
	 */
	void Blanking()
	{
		cbBlanking();
	}

	/**
	 * @brief Invoked when a touch event occurs.
	 * @param tp The touch point.
	 */
	void Touch(glTouchPoint_t& tp)
	{
		NVIC_DisableIRQ(LTDC_IRQn);
		cbTouch(tp);
		NVIC_EnableIRQ(LTDC_IRQn);
	}

	/**
	 * @brief Pure virtual function to handle blanking events.
	 */
	virtual void cbBlanking() = 0;

	/**
	 * @brief Pure virtual function to handle touch events.
	 * @param tp The touch point.
	 */
	virtual void cbTouch(glTouchPoint_t&) = 0;
};
