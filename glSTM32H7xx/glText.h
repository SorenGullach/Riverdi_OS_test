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
	class glText : public glWidgetLink, public glWidgetColor, private glVideoMemoryPlot
	{
	public:
		glText(const gl2DPoint_t &region, 
			const char *text, 
			const FontItem *fontFamily, 
			const glColor_t &color = glColors::WHITE) 
			: glWidgetLink("Text", region)
			, glWidgetColor(color, color)
		{
			assert(fontFamily != nullptr && "no fontFamily");
			FontFamily = fontFamily;
			assert(text != nullptr && "no text");
			Text(text);
		}
		
		void Text(const char *text)
		{
			strncpy(_Text, text, length-1);
		}

		// Calculate the total width of the text based on the font information
		P_t TextWidth()
		{
			P_t width = 0; // Initialize the width counter
			char *pc = _Text;

			// Iterate over each character in the text
			while (*pc != 0)
			{
				if (*pc < FontFamily->c)
				{
					if (*pc == ' ')
						width += FontFamily[SpaceChar - FontFamily->c].w;
					else
						width += FontFamily['?' - FontFamily->c].w;
					pc++;
					continue;
				}
				// Retrieve font information for the character
				const FontItem* font = &FontFamily[*pc - FontFamily->c]; // Adjust font pointer based on character

				// Ensure the retrieved font corresponds to the current character
				assert(font->c == *pc);

				// Accumulate the width of the character
				width += font->w;

				// Move to the next character in the text
				pc++;
			}

			return width;  // Return the total width of the text
		}

		P_t TextHeight()
		{
			// Calculate height of font
			return FontFamily->h;
		}
		virtual void Redraw() override
		{
			// Check if the widget needs to be redrawn
			if (!ImInvalidated) return;

			// Calculate the center position of the widget
			gl2DPoint_t pos = Center();

//			glRectangle(_Region, glColors::BLACK).Draw();
//			glRectangle(pos, glColors::RED).Draw();

			// Initialize variables
			glColor_t color = _FrontColor;
			C_t pix[200];
			P_t xs = pos.L();
			char *pc = _Text;

			// Iterate over each character in the text
			while (*pc != 0)
			{
				// Retrieve font information for the character
				const FontItem *f;
				if (*pc < FontFamily->c)
				{
					if (*pc == ' ')
					{	
						xs += FontFamily[SpaceChar - FontFamily->c].w;
						pc++;
						continue;
					}
					f = &FontFamily['?' -FontFamily->c];					
				}
				else
					f = &FontFamily[*pc++ -FontFamily->c];					

				assert(f->w < sizeof(pix)); // Ensure buffer size is not exceeded
				P_t ys = pos.T() + f->yb;

				//				glRectangle(f->xb, pos.T() + f->yb, f->xe, pos.T()f->ye, glColors::GREEN).Draw();

								// Iterate over each row of the character
				for (int l = 0, y = ys; l < f->StrideY/* && y < pos.B()*/; ++l, ++y)
				{
					// Extract pixel data for the row
					ExtractPixelRow(f, l, pix, _FrontColor.A);

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
			if (glVideoMemory::lastBand()) 
				ImInvalidated = false;
		}
	
		gl2DPoint_t InvalidRegion() override
		{
			return _Region;
		}

		void Touch(const glTouchPoint_t &) override {}
	private:
		char _Text[length];
		const FontItem *FontFamily;
		const char SpaceChar = '!';

		// Function to extract pixel data for a character
		void ExtractPixelRow(const FontItem *f, int l, C_t pix[], C_t alpha)
		{
			// Initialize variables
			int BitsPerPixel = f->BitsPerPixel;
			uint8_t *Data = &f->Data[f->StrideX * l]; // Pointer to the start of character data
			uint32_t currentByte = 0;

			if (BitsPerPixel == 1) 
			{
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
			int BPP = 1 << f->BitsPerPixel;
			int bitPosition = 0;

			// Iterate over each pixel in the character
			for (int pixelIndex = 0; pixelIndex < f->w; pixelIndex++)
			{
				// Unpack each pixel from the packed data
				//for (int b = BitsPerPixel - 1; b >= 0 && pixelIndex < f->w; --b)
				for (int b = 0; b < BitsPerPixel && pixelIndex < f->w; ++b)
				{
					// Check if we need to read a new byte
					if (bitPosition % 8 == 0)
						currentByte = Data[bitPosition / 8];

					// Extract the pixel value from the current byte
					int shift = 8 - (bitPosition % 8 + BitsPerPixel);
					uint32_t pixelValue = 0;
					if (shift < 0)
					{
						pixelValue = currentByte<<-shift;
						currentByte = Data[(bitPosition / 8)+1];
						pixelValue = (pixelValue | (currentByte >> (8 + shift))) & (BPP - 1);
					}
					else
						pixelValue = (currentByte >> shift) & (BPP - 1);
					pix[pixelIndex] = pixelValue > 0 ? alpha / (BPP - pixelValue) : 0;

					// Increment the bit position and pixel index
					bitPosition += BitsPerPixel;
				}
			}
		}

		// find center pos
		gl2DPoint_t Center()
		{
			// Initialize variables
			P_t w = TextWidth();
			P_t h = TextHeight();

			// Calculate x-coordinate for centering
			P_t x = _Region.L();
			if (w < _Region.Width())
				x += (_Region.Width() - w) / 2;

// Calculate y-coordinate for centering
			P_t y = _Region.T();
			if (h < _Region.Height())
				y += (_Region.Height() - h) / 2;

// Return intersection point between position and calculated rectangle
			return gl2DPoint_t(x, y, x + w, y + h); //.Intersection(_Position);
		}


		
	};
