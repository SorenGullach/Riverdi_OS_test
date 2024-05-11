
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

#include <cstdint>

struct __attribute__((packed)) FontItem {
	// Public properties
	char c; // this char  
	uint8_t w, h; // Width and height of the image
	uint8_t xb, yb, xe, ye; // Start and end coordinates of the image
	uint8_t BitsPerPixel; // Number of bits per pixel
	uint8_t StrideX, StrideY; // Stride in X and Y directions
	uint8_t* Data; // Image data
};

extern const FontItem Arial_16_1[];
extern const FontItem Arial_16_2[];
extern const FontItem Arial_18_1[];
extern const FontItem Arial_18_2[];
extern const FontItem Arial_20_1[];
extern const FontItem Arial_20_2[];
extern const FontItem Arial_22_1[];
extern const FontItem Arial_22_2[];
extern const FontItem Arial_24_1[];
extern const FontItem Arial_24_2[];
extern const FontItem Arial_26_1[];
extern const FontItem Arial_26_2[];
extern const FontItem Arial_28_1[];
extern const FontItem Arial_28_2[];
extern const FontItem Arial_95_1[];
extern const FontItem Arial_95_2[];
