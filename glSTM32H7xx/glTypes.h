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
#include <cstdio>
#include "MemoryDefs.h"
#include "glColor.h"

#include "DMA2D.h"

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
	
	void Empty()
	{
		X = Y = 0;
	}
};

/**
 * @brief Represents a 2D rectangular region defined by two points.
 * R & B are exclusive L=0 to R=11 is width 10
 */
struct glRegion_t
{
	/**
	 * @brief Default constructor.
	 */
	glRegion_t() {}

	/**
	 * @brief Constructor to initialize the 2D point with top-left and bottom-right points.
	 * @param lt The top-left point.
	 * @param rb The bottom-right point.
	 */
	glRegion_t(const glPoint_t &lt, const glPoint_t &rb)
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
	 * R & B are exclusive L=0 to R=11 is width 10
	 */
	glRegion_t(P_t left, P_t top, P_t right, P_t bottom)
		: _LT(left, top)
		, _RB(right, bottom) 
	{ 
	}

	/**
	 * @brief Get the left coordinate.
	 * @return The left coordinate.
	 */
	P_t L() const { return _LT.X; }

	/**
	 * @brief Get the top coordinate.
	 * @return The top coordinate.
	 */
	P_t T() const { return _LT.Y; }

	/**
	 * @brief Get the right coordinate.
	 * @return The right coordinate.
	 */
	P_t R() const { return _RB.X; }

	/**
	 * @brief Get the bottom coordinate.
	 * @return The bottom coordinate.
	 */
	P_t B() const { return _RB.Y; }

	/**
	 * @brief Set the left coordinate.
	 * @param t The new left coordinate.
	 */
	void L(const P_t t) { _LT.X = t; }

	/**
	 * @brief Set the top coordinate.
	 * @param t The new top coordinate.
	 */
	void T(const P_t t) { _LT.Y = t; }

	/**
	 * @brief Set the right coordinate.
	 * @param t The new right coordinate.
	 */
	void R(const P_t t) { _RB.X = t; }

	/**
	 * @brief Set the bottom coordinate.
	 * @param t The new bottom coordinate.
	 */
	void B(const P_t t) { _RB.Y = t; }

	/**
	 * @brief Get the top-left point.
	 * @return The top-left point.
	 */
	glPoint_t LT() const { return _LT; }

	/**
	 * @brief Get the bottom-left point.
	 * @return The bottom-left point.
	 */
	glPoint_t LB() const { return glPoint_t(_LT.X, _RB.Y); }

	/**
	 * @brief Get the top-right point.
	 * @return The top-right point.
	 */
	glPoint_t RT() const { return glPoint_t(_RB.X, _LT.Y); }

	/**
	 * @brief Get the bottom-right point.
	 * @return The bottom-right point.
	 */
	glPoint_t RB() const { return _RB; }

	/**
	 * @brief Get the width of the region.
	 * @return The width of the region.
	 */
	P_t Width() const { return _RB.X - _LT.X; }

	/**
	 * @brief Get the height of the region.
	 * @return The height of the region.
	 */
	P_t Height() const { return _RB.Y - _LT.Y; }

	/**
	 * @brief Check if the region is empty.
	 * @return True if the region is empty, false otherwise.
	 */
	bool IsEmpty() const { return Width() == 0 || Height() == 0; }

	/**
	 * @brief Normalize the region by swapping coordinates if necessary.
	 * @return A normalized region.
	 */
	glRegion_t Normalize() const 
	{
		glRegion_t pt = *this;
		if (pt.L() > pt.R()) { std::swap(pt._LT.X, pt._RB.X); }
		if (pt.T() > pt.B()) { std::swap(pt._LT.Y, pt._RB.Y); }
		return pt;
	}

	/**
	 * @brief Check if a point is inside the region.
	 * @param x The x-coordinate of the point.
	 * @param y The y-coordinate of the point.
	 * @return True if the point is inside the region, false otherwise.
	 */
	bool IsInside(const P_t x, const P_t y) const 
	{ 
		assert(_LT.X <= _RB.X);
		assert(_LT.Y <= _RB.Y);
		return x >= _LT.X && x < _RB.X && y >= _LT.Y && y < _RB.Y; 
	}

	/**
	 * @brief Check if a point is inside the region.
	 * @param p The point to check.
	 * @return True if the point is inside the region, false otherwise.
	 */
	bool IsInside(const glPoint_t &p) const { return IsInside(p.X, p.Y); }

	/**
	 * @brief Displace the region by a given offset.
	 * @param dx The x-offset.
	 * @param dy The y-offset.
	 * @return The displaced region.
	 */
	glRegion_t Displace(const int dx, const int dy) const { return glRegion_t(_LT.Displace(dx, dy), _RB.Displace(dx, dy)); }

	/**
	 * @brief Displace the region by a given point offset.
	 * @param p The point offset.
	 * @return The displaced region.
	 */
	glRegion_t Displace(const glPoint_t &p) const { return Displace(p.X, p.Y); }

	/**
	 * @brief Move the region to new coordinates.
	 * @param l The new left coordinate.
	 * @param t The new top coordinate.
	 * @param r The new right coordinate.
	 * @param b The new bottom coordinate.
	 */
	void MoveTo(const int l, const int t, const int r, const int b) { _LT = glPoint_t(l, t); _RB = glPoint_t(r, b); }

	/**
	 * @brief Move the region to another region's coordinates.
	 * @param p The region to move to.
	 */
	void MoveTo(const glRegion_t &p) { _LT = p.LT(), _RB = p.RB(); }

	/**
	 * @brief Empty the region.
	 */
	void Empty() { _LT.Empty(); _RB.Empty(); }

	/**
	 * @brief Inflate the region by a given amount.
	 * @param d The amount to inflate by.
	 * @return The inflated region.
	 */
	glRegion_t Inflate(int d) const { return glRegion_t(_LT.Displace(-d, -d), _RB.Displace(d, d)); }

	/**
	 * @brief Inflate the region by specific amounts.
	 * @param l The left amount.
	 * @param t The top amount.
	 * @param r The right amount.
	 * @param b The bottom amount.
	 * @return The inflated region.
	 */
	glRegion_t Inflate(int l, int t, int r, int b) const { return glRegion_t(_LT.Displace(-l, -t), _RB.Displace(r, b)); }

	/**
	 * @brief Get the union of this region and another region.
	 * @param region The other region.
	 * @return The union of the two regions.
	 */
	glRegion_t Union(const glRegion_t &region) const
	{
		if (IsEmpty()) return region;
		if (region.IsEmpty()) return *this;

		glRegion_t Region2 = region.Normalize();
		glRegion_t ThisNorm = this->Normalize();

		P_t newLeft = std::min(ThisNorm.L(), Region2.L());
		P_t newTop = std::min(ThisNorm.T(), Region2.T());
		P_t newRight = std::max(ThisNorm.R(), Region2.R());
		P_t newBottom = std::max(ThisNorm.B(), Region2.B());

		return glRegion_t(newLeft, newTop, newRight, newBottom);
	}

	/**
	 * @brief Get the intersection of this region and another region.
	 * @param region The other region.
	 * @return The intersection of the two regions.
	 */
	glRegion_t Intersection(const glRegion_t &region) const
	{
		if (IsEmpty() || region.IsEmpty()) return glRegion_t();

		glRegion_t Region2 = region.Normalize();
		glRegion_t ThisNorm = this->Normalize();

		P_t newLeft = std::max(ThisNorm.L(), Region2.L());
		P_t newTop = std::max(ThisNorm.T(), Region2.T());
		P_t newRight = std::min(ThisNorm.R(), Region2.R());
		P_t newBottom = std::min(ThisNorm.B(), Region2.B());

		if (newLeft < newRight && newTop < newBottom)
		{
			return glRegion_t(newLeft, newTop, newRight, newBottom);
		}
		else
		{
			return glRegion_t();
		}
	}

	/**
	 * @brief Center another region within this region.
	 * @param region The region to center.
	 * @return The centered region.
	 */
	glRegion_t Center(const glRegion_t &region) const
	{
		return Center(region.Width(), region.Height());
	}

	/**
	 * @brief Center a region of specific width and height within this region.
	 * @param width The width of the region to center.
	 * @param height The height of the region to center.
	 * @return The centered region.
	 */
	glRegion_t Center(P_t width, P_t height) const
	{
		P_t w = std::min(width, Width());
		P_t h = std::min(height, Height());

		P_t x = L() + (Width() - w) / 2;
		P_t y = T() + (Height() - h) / 2;

		return glRegion_t(x, y, x + w, y + h);
	}
	
	char *ToString() const 
	{
		snprintf(_String, sizeof(_String), "%4u,%4u,%4u,%4u", _LT.X, _LT.Y, _RB.X, _RB.Y);
		return _String;
	}

protected:
	static char _String[25];
	glPoint_t _LT; ///< The top-left point.
	glPoint_t _RB; ///< The bottom-right point.
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
		Click  ///< A click event.
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
	void Blanking()	{ cbBlanking(); }

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
	virtual void cbTouch(const glTouchPoint_t&) = 0;
};
