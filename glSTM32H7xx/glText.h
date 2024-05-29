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

#include "glWidgets.h"

/////////////////////////////////////////////////////////////////////////////////////////////
template<int length>
	class glText : public glWidgetLink, public glFrontColorTheme, private glVideoMemoryPlot
	{
	public:
		glText(const gl2DPoint_t &region, 
			const char *text, 
			const FontItem *fontFamily, 
			const glColor_t &color = glColors::WHITE) 
			: glWidgetLink("Text", region)
			, glFrontColorTheme(color)
		{
			assert(fontFamily != nullptr && "no fontFamily");
			FontFamily = fontFamily;
			Text(text);
		}
		
		/**
		 * @brief Set the text for the widget and format it using a variable argument list.
		 * 
		 * @param text The format string for the text.
		 * @param ... Additional arguments for formatting the text.
		 */
		void Text(const char *text, ...)
		{
			if (text == nullptr)
			{
				_Text[0] = '\0'; // Ensure null termination
				// Mark the widget as invalidated to trigger a redraw
				ImInvalidated = true;
				return;
			}
			
			// Temporary buffer to store the formatted string
			char buffer[length+1]; // Adjust the size as necessary

			// Initialize the variable argument list
			va_list args;
			va_start(args, text);

			// Format the text and store it in the buffer
			vsnprintf(buffer, length, text, args);

			// End the variable argument list
			va_end(args);

			if (strcmp(_Text, buffer) != 0)
			{
				// Copy the formatted string to the class member variable _Text
				// Ensure the string is null-terminated
				strncpy(_Text, buffer, length);
				_Text[length] = '\0'; // Ensure null termination

				// Mark the widget as invalidated to trigger a redraw
				ImInvalidated = true;
			}
		}

		const char *Text()
		{
			return _Text;
		}

		/**
		 * @brief Calculate the total width and height of the text based on the font information.
		 * 
		 * @return gl2DPoint_t The dimensions (width and height) of the text.
		 */
		gl2DPoint_t TextSize()
		{
			P_t height = FontFamily->h; // Initialize the height counter to the height of one line
			P_t width = 0; // Initialize the width counter for the current line
			P_t maxWidth = 0; // Initialize the maximum width found across all lines
			char *pc = _Text; // Pointer to the current character in the text

			// Iterate over each character in the text
			while (*pc != 0)
			{
				const FontItem* font;

				// Handle space characters
				if (*pc == ' ')
				{
					width += FontFamily[SpaceChar - FontFamily->c].w;
					pc++;
					continue;
				}
				// Handle newline characters
				else if (*pc == '\n')
				{
					// Update maxWidth if the current line width is greater
					if (width > maxWidth) maxWidth = width;

					// Reset width for the new line and increment height by the line height
					width = 0;
					height += FontFamily->h;
					pc++;
					continue;
				}
				// Handle characters outside the font family range
				else if (*pc < FontFamily->c)
					font = &FontFamily['?' - FontFamily->c];
				// Handle valid characters within the font family range
				else
					font = &FontFamily[*pc - FontFamily->c];

				// Ensure the retrieved font corresponds to the current character
				assert(font->c == *pc);

				// Accumulate the width of the character
				width += font->w;

				// Move to the next character in the text
				pc++;
			}

			// Update maxWidth if the last line's width is greater
			if (width > maxWidth) maxWidth = width;

			// Return the dimensions of the text
			return gl2DPoint_t(0, 0, maxWidth, height);
		}

		/**
		 * @brief Redraw the widget if it is marked as invalidated.
		 */
		virtual void Redraw() override
		{
			// Check if the widget needs to be redrawn
			if (!ImInvalidated) return;

			// Calculate the center position of the widget
			gl2DPoint_t pos = _Region.Center(TextSize());

			// Initialize the starting position for drawing text
			P_t xs = pos.L();
			P_t ys = pos.T();
			char *pc = _Text;

			// Iterate over each character in the text
			while (*pc != 0)
			{
				// Pointer to store the font information for the character
				const FontItem *f;

				// Handle spaces by advancing the x position
				if (*pc == ' ')
				{
					xs += FontFamily[SpaceChar - FontFamily->c].w;
					pc++;
					continue;
				}
				// Handle newlines by resetting the x position and advancing the y position
				else if (*pc == '\n')
				{
					xs = pos.L();
					ys += FontFamily->h;
					pc++;
					continue;
				}
				// Handle characters outside the font family range
				else if (*pc < FontFamily->c)
					f = &FontFamily['?' - FontFamily->c];
				// Handle valid characters within the font family range
				else
					f = &FontFamily[*pc++ -FontFamily->c];

				// Draw the character at the calculated position
				DrawChar(f, xs, ys, pos);

				// Move the horizontal position for the next character
				xs += f->w;
			}

			// Check if the last band of video memory is reached and reset the invalidation flag
			if (glVideoMemory::lastBand())
				ImInvalidated = false;
		}
	
		gl2DPoint_t InvalidRegion() override
		{
			return _Region;
		}

		bool Touch(const glTouchPoint_t &) override { return false; }
	private:
		char _Text[length+1];
		const FontItem *FontFamily;
		const char SpaceChar = '!';
		
		/**
		 * @brief Draw a character from the specified font at the given position within a region.
		 * 
		 * @param f Pointer to the FontItem structure containing the character's data.
		 * @param xs X-coordinate of the starting position to draw the character.
		 * @param ys Y-coordinate of the starting position to draw the character.
		 * @param region The 2D point representing the region where the character should be drawn.
		 */
		void DrawChar(const FontItem *f, P_t xs, P_t ys, const gl2DPoint_t &region)
		{
			// Buffer to hold pixel data
			C_t pix[150];
			assert(f->w < sizeof(pix)); // Ensure buffer size is not exceeded

			// Initialize the color to the front color
			glColor_t color = _FrontColor;

			// Adjust the starting y-coordinate by the character's y-bearing
			ys += f->yb;

			// Iterate over each row of the character
			for (int r = 0, y = ys; r < f->StrideY && y < region.B(); ++r, ++y)
			{
				// Extract pixel data for the current row
				ExtractPixelRow(f, r, pix, _FrontColor.A);

				// Iterate over each pixel in the row
				for (int c = 0, x = xs; c < f->w && x < region.R(); ++c, ++x)
				{
					// Plot the pixel if its value is greater than 0
					if (pix[c] > 0)
					{
						color.A = pix[c];
						Plot(x, y, color);
					}
				}
			}
		}
		
		/**
		 * @brief Extract pixel data for a given row of a character.
		 * 
		 * @param f Pointer to the FontItem structure containing the character's data.
		 * @param row The row index to extract pixel data from.
		 * @param pix Array to store the extracted pixel data.
		 * @param alpha The alpha value to apply to non-zero pixels.
		 */
		void ExtractPixelRow(const FontItem *f, int row, C_t pix[], C_t alpha)
		{
			// Initialize variables
			int BitsPerPixel = f->BitsPerPixel;
			uint8_t *Data = &f->Data[f->StrideX * row]; // Pointer to the start of character data for the specified row
			uint32_t currentByte = 0; // Variable to store the current byte being processed

			if (BitsPerPixel == 1) 
			{
				// Special case for 1 bit per pixel
				for (int pixelIndex = 0; pixelIndex < f->w; ++pixelIndex) {
					// Load a new byte when needed
					if (pixelIndex % 8 == 0) {
						currentByte = Data[pixelIndex / 8];
					}

					// Extract pixel value
					uint8_t pixelValue = (currentByte >> (7 - (pixelIndex % 8))) & 1;
					pix[pixelIndex] = pixelValue > 0 ? alpha : 0;
				}
				return;
			}

			// Variables for bit manipulation
			int BPP = 1 << BitsPerPixel; // Calculate the number of possible pixel values
			int bitPosition = 0; // Bit position within the data

			// Iterate over each pixel in the character
			for (int pixelIndex = 0; pixelIndex < f->w; ++pixelIndex)
			{
				// Unpack each pixel from the packed data
				for (int b = 0; b < BitsPerPixel && pixelIndex < f->w; ++b)
				{
					// Check if we need to read a new byte
					if (bitPosition % 8 == 0)
						currentByte = Data[bitPosition / 8];

					// Extract the pixel value from the current byte
					int shift = 8 - (bitPosition % 8 + BitsPerPixel);
					uint32_t pixelValue = 0;

					// Handle case where the pixel spans across two bytes
					if (shift < 0)
					{
						pixelValue = currentByte << -shift;
						currentByte = Data[(bitPosition / 8) + 1];
						pixelValue = (pixelValue | (currentByte >> (8 + shift))) & (BPP - 1);
					}
					else
					{
						pixelValue = (currentByte >> shift) & (BPP - 1);
					}

					// Apply alpha value to non-zero pixels
					pix[pixelIndex] = pixelValue > 0 ? alpha / (BPP - pixelValue) : 0;

					// Increment the bit position
					bitPosition += BitsPerPixel;
				}
			}
		}

	};
