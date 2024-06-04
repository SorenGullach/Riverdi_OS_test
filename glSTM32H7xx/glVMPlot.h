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

#include "glTypes.h"

#define USE_DMA2D
/**
 * @brief Represents video memory and provides methods to manage it.
 */
class glVideoMemory
{
public:
	glVideoMemory()
	{
#ifdef USE_DMA2D
		_Dma2D.Init();
		_Dma2D.StartM2MTransfer(pVMLTDC, 10, 10, pVMShadow, 0);
#endif		
	}
	
	static void CopyVideoMem()
	{
		//		Printf(",");
				/*
				glARGB_t *pStart = pVMLTDC, *pStart1 = pVMShadow, *pEnd = pVMLTDC + _VideoRegion.Width()*_VideoRegion.Height();
				while(pStart<pEnd)
					*pStart++ = *pStart1++;
			*/
#ifndef USE_DMA2D
		P_t w = _VideoRegion.Width();
		P_t xs = _InvalidRegion.L();
		P_t ys = _InvalidRegion.T();
		P_t xe = _InvalidRegion.R();
		P_t ye = _InvalidRegion.B();
		for (P_t x = xs; x < xe; x++)
			for (P_t y = ys; y < ye; y++)
				pVMLTDC[x + y*w] = pVMShadow[x + y*w]; 
#endif
#ifdef USE_DMA2D
		P_t w = _VideoRegion.Width();
		P_t ys = 0; //_InvalidRegion.T();
		uint32_t lineOffset = 0; //w- _InvalidRegion.L(); 
		P_t hi = _VideoRegion.Height(); // _InvalidRegion.Height();
		_Dma2D.StartM2MTransfer(
			&pVMLTDC[ys*w],
			w,
			hi,
			&pVMShadow[ys*w],
			lineOffset);
#endif
		//		Printf(";");
	}
	static bool IsTransferComplete()
	{
#ifdef USE_DMA2D
		return _Dma2D.IsTransferComplete();
#else
		return true;
#endif
	}
protected:
	// Pointer to graphic shadow buffer
	static glARGB_t *pVMShadow; 
	// Pointer to graphic buffer, used by LTDC
	static glARGB_t *pVMLTDC; 
private:
	static hwDMA2D _Dma2D;
public:
	static glRegion_t _VideoRegion; // Video region

	/**
	 * @brief Limits the region to the intersection with the current drawing region.
	 */
	static glRegion_t LimitRegion(const glRegion_t &region)
	{
		return region.Intersection(_VideoRegion);
	}

	/**
	 * @brief Initializes the video memory with the specified dimensions and buffer.
	 * @param w The width of the screen.
	 * @param h The height of the screen.
	 * @param pvm Pointer to the video memory buffer.
	 */
	static void Init(const P_t w, const P_t h, glARGB_t *pvmLTDC, glARGB_t *pvmShadow)
	{
		pVMLTDC = pvmLTDC; 
		pVMShadow = pvmShadow; 
		_VideoRegion = glRegion_t(0, 0, w, h);
	}
};

/// helper class for plotting on the Video memory
class glVideoMemoryPlot : protected glVideoMemory
{
public:
	// plot in invalid region and box
	void Plot(const glRegion_t &box, P_t x, P_t y, const glColor_t &color)	
	{ 
		// narrow invalid region down to box
		glRegion_t IVR = _PlotRegion.Intersection(box);
		if (IVR.IsInside(x, y))
		{
			assert(x < _VideoRegion.Width() && y < _VideoRegion.Height());
			glARGB_t *pPixel = &pVMShadow[x + y*_VideoRegion.Width()];
			*pPixel = 
				color.operation == glColor_t::eColorOperation::Replace ? 
				(glARGB_t)color : 
				color.Color(*pPixel); 
		}
	}

	// plot in invalid region
	void Plot(P_t x, P_t y, const glColor_t &color)
	{ 
		// narrow down to invalid region
		if (_PlotRegion.IsInside(x, y))
		{
			assert(x < _VideoRegion.Width() && y < _VideoRegion.Height());
			glARGB_t *pPixel = &pVMShadow[x + y*_VideoRegion.Width()];
			*pPixel = 
				color.operation == glColor_t::eColorOperation::Replace ? 
				(glARGB_t)color : 
				color.Color(*pPixel); 
		}
	}

	// plot in invalid region
	void Plot(const glPoint_t &p, const glColor_t &color) { Plot(p.X, p.Y, color); }
	// plot in invalid region and box
	void Plot(const glRegion_t box, const glPoint_t &p, const glColor_t &color)	{ Plot(box, p.X, p.Y, color); }
	
	void InvalidRegion(const glRegion_t &ivr)
	{
		_PlotRegion = LimitRegion(ivr);
	}
private:
	static glRegion_t _PlotRegion; // Invalid region
};
