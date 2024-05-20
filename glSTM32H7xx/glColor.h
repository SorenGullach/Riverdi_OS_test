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

#include <algorithm> // For std::min and std::max
#include <cmath>     // For sqrtf, powf
#include <limits>    // For std::numeric_limits

#include "glColorTable.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

typedef uint8_t C_t;

/**
 * @brief Represents a color in ARGB format.
 */
struct glARGB_t 
{
	glARGB_t()
		: B(0)
		, G(0)
		, R(0)
		, A(255) {}

	/**
	 * @brief Constructs a color using the provided ARGB components.
	 * @param a Alpha component.
	 * @param r Red component.
	 * @param g Green component.
	 * @param b Blue component.
	 */
	glARGB_t(C_t a, C_t r, C_t g, C_t b)
		: B(b)
		, G(g)
		, R(r)
		, A(a) {}

	C_t B, G, R, A; ///< Color channels in ARGB format, fitting LTDC layout.
} __PACKED;
static_assert(sizeof(glARGB_t) == 4, "Wrong size");

/**
 * @brief Represents a color with convenience constructors and methods.
 */
class glColor_t : public glARGB_t
{

public:
	/**
 * @brief Default constructor initializing the color to black with full opacity.
 */
	glColor_t()
		: glARGB_t(255, 0, 0, 0)
		, operation(glColor_t::eColorOperation::Replace)  
	{
	}

	/**
	 * @brief Constructor to initialize color using a predefined color from glColors enum.
	 * @param color The predefined color.
	 */
	glColor_t(const glColors &color)
		: glARGB_t(
		    255,
		    (static_cast<uint32_t>(color) >> 16) & 0xFF,
		    (static_cast<uint32_t>(color) >> 8) & 0xFF,
		    (static_cast<uint32_t>(color)) & 0xFF
		)
		, operation(glColor_t::eColorOperation::Replace) {}

	/**
	 * @brief Constructor to initialize color using specific RGBA values.
	 * @param red The red component.
	 * @param green The green component.
	 * @param blue The blue component.
	 * @param alpha The alpha component (default is 255 for full opacity).
	 */
	glColor_t(const C_t red, const C_t green, const C_t blue, const C_t alpha = 255)
		: glARGB_t(alpha, red, green, blue) {}

	enum class eColorOperation {
		Replace,
		Add,
		Subtract,
		Complement,
		Multiply,
		Screen,
		Darken,
		Lighten,
		Difference,
		Average,
		ComplementBackground,
		AlphaBlend, 
		RainbowIndex,
		RainbowGradient
	};

	glColor_t(eColorOperation colorOperation)
		: glARGB_t()
		, operation(colorOperation) {}

	eColorOperation operation = eColorOperation::Replace;

	/**
	 * @brief Applies the selected color operation to the background color.
	 * @param bg The background color.
	 * @return The resulting color after applying the operation.
	 */
	glColor_t Color(const glARGB_t &bg) const 
	{
		switch (operation) {
		case eColorOperation::Replace:
			return *this;

		case eColorOperation::Add:
			return Add(bg);

		case eColorOperation::Subtract:
			return Subtract(bg);

		case eColorOperation::Complement:
			return Complement();

		case eColorOperation::Multiply:
			return Multiply(bg);

		case eColorOperation::Screen:
			return Screen(bg);

		case eColorOperation::Darken:
			return Darken(bg);

		case eColorOperation::Lighten:
			return Lighten(bg);

		case eColorOperation::Difference:
			return Difference(bg);

		case eColorOperation::Average:
			return Average(bg);

		case eColorOperation::ComplementBackground:
			return ComplementBackground(bg);
			
		case eColorOperation::AlphaBlend: 
			return AlphaBlend(bg);
		
		case eColorOperation::RainbowIndex:
			return RainbowColorIndex(R, 255);

		case eColorOperation::RainbowGradient:
			return RainbowColorGradient(R, 255);

		default:
			return glColor_t(bg.A, bg.R, bg.G, bg.B); // Default case to handle unexpected operation values
		}
	}

	glColor_t Add(const glARGB_t &bg) const 
	{
		return glColor_t(
		    C_t(std::min(255, int(bg.R) + R)),
			C_t(std::min(255, int(bg.G) + G)),
			C_t(std::min(255, int(bg.B) + B)),
			C_t(std::min(255, int(bg.A) + A)));
	}
	
	glColor_t Subtract(const glARGB_t &bg) const
	{
		return glColor_t(
		    C_t(std::max(0, int(bg.R) - R)),
			C_t(std::max(0, int(bg.G) - G)),
			C_t(std::max(0, int(bg.B) - B)),
			C_t(std::max(0, int(bg.A) - A)));
	}
	
	glColor_t Complement() const 
	{
		return glColor_t(
		    C_t(255 - R),
			C_t(255 - G),
			C_t(255 - B),
			A);
	}
	
	glColor_t Multiply(const glARGB_t &bg) const 
	{
		return glColor_t(
		    C_t((bg.R * R) / 255),
			C_t((bg.G * G) / 255),
			C_t((bg.B * B) / 255),
			C_t((bg.A * A) / 255));
	}
	
	glColor_t Screen(const glARGB_t &bg) const 
	{
		return glColor_t(
		    C_t(255 - ((255 - bg.R) * (255 - R) / 255)),
			C_t(255 - ((255 - bg.G) * (255 - G) / 255)),
			C_t(255 - ((255 - bg.B) * (255 - B) / 255)),
			C_t(255 - ((255 - bg.A) * (255 - A) / 255)));
	}
	
	glColor_t Darken(const glARGB_t &bg) const 
	{
		return glColor_t(
		    std::min(bg.R, R),
			std::min(bg.G, G),
			std::min(bg.B, B),
			std::min(bg.A, A));
	}
	
	glColor_t Lighten(const glARGB_t &bg) const 
	{
		return glColor_t(
		    std::max(bg.R, R),
			std::max(bg.G, G),
			std::max(bg.B, B),
			std::max(bg.A, A));
	}
	
	glColor_t Difference(const glARGB_t &bg) const 
	{
		return glColor_t(
		    C_t(abs(bg.R - R)),
			C_t(abs(bg.G - G)),
			C_t(abs(bg.B - B)),
			C_t(abs(bg.A - A)));
	}
	
	glColor_t Average(const glARGB_t &bg) const 
	{
		return glColor_t(
		    C_t((bg.R + R) / 2),
			C_t((bg.G + G) / 2),
			C_t((bg.B + B) / 2),
			C_t((bg.A + A) / 2));
	}
	;

	glColor_t ComplementBackground(const glARGB_t &bg) const 
	{
		return glColor_t(
		    C_t(255 - bg.R),
			C_t(255 - bg.G),
			C_t(255 - bg.B),
			bg.A);
	}

	glColor_t AlphaBlend(const glARGB_t &bg) const 
	{
		float alpha = A / 255.0f;
		return glColor_t(
		    C_t(bg.R * (1 - alpha) + R * alpha),
			C_t(bg.G * (1 - alpha) + G * alpha),
			C_t(bg.B * (1 - alpha) + B * alpha),
			C_t(bg.A * (1 - alpha) + A * alpha));
	}
	
	static glColor_t RainbowColorGradient(int index, int max) 
	{
		float normalized = (index*M_PI) / (float)max;
		return glColor_t(
			255,
			C_t(sin(normalized) * 127 + 128),
			C_t(sin(normalized + 2 * M_PI / 3) * 127 + 128),
			C_t(sin(normalized + 4 * M_PI / 3) * 127 + 128));
	}

	/**
	 * @brief Generates a rainbow color based on an index from 0 to 255.
	 * @param index The index value (0..255).
	 * @return The generated rainbow color.
	 */
	static glColor_t RainbowColorIndex(int index, int max) 
	{
		float normalized = index / float(max);
		float r = std::abs(normalized * 6.0f - 3.0f) - 1.0f;
		float g = 2.0f - std::abs(normalized * 6.0f - 2.0f);
		float b = 2.0f - std::abs(normalized * 6.0f - 4.0f);
		return glColor_t(
		    255,
			C_t(255 * std::clamp(r, 0.0f, 1.0f)),
			C_t(255 * std::clamp(g, 0.0f, 1.0f)),
			C_t(255 * std::clamp(b, 0.0f, 1.0f)));
	}
	
	/**
	 * @brief Finds the nearest color from the enum list based on an RGB color.
	 * @param r The red component of the color.
	 * @param g The green component of the color.
	 * @param b The blue component of the color.
	 * @return The nearest predefined color from the glColors enum.
	 */
	static glColors FindNearestColor(const glColor_t &color) 
	{
		glColors nearestColor = glColors::BLACK; // Default to black
		float minDistance = std::numeric_limits<float>::max();

		// Iterate through all colors in the enum list
		for (uint32_t i = 0; i < glColorTableSize; ++i) {
			glColors currentColor = static_cast<glColors>(i);
			glColor_t colorCurrent(currentColor);

			// Calculate the distance between the current color and the input RGB color
			float distance = sqrtf(powf(colorCurrent.R - color.R, 2) + powf(colorCurrent.G - color.G, 2) + powf(colorCurrent.B - color.B, 2));

			// Update nearest color if a closer match is found
			if (distance < minDistance) {
				minDistance = distance;
				nearestColor = currentColor;
			}
		}

		return nearestColor;
	}

};
