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

#include "glWidgets.h"
#include <algorithm>

/**
 * @brief Helper function to plot a line with a low slope using Bresenham's line algorithm.
 *
 * This function handles plotting lines where the absolute change in y is less than the absolute change in x.
 *
 * @param x0 The x-coordinate of the start point.
 * @param y0 The y-coordinate of the start point.
 * @param x1 The x-coordinate of the end point.
 * @param y1 The y-coordinate of the end point.
 * @param color The color of the line.
 */
void glPlot2DHelper::PlotLineLow(P_t x0, P_t y0, P_t x1, P_t y1, const glColor_t &color) 
{
	int dx = x1 - x0;
	int dy = y1 - y0;
	int yi = 1;

	if (dy < 0) {
		yi = -1;
		dy = -dy;
	}

	int D = 2 * dy - dx;

	while (x0 <= x1) {
		Plot(x0, y0, color);
		if (D > 0) {
			y0 += yi;
			D += 2 * (dy - dx);
		}
		else {
			D += 2 * dy;
		}
		++x0;
	}
}

/**
 * @brief Helper function to plot a line with a high slope using Bresenham's line algorithm.
 *
 * This function handles plotting lines where the absolute change in y is greater than or equal to the absolute change in x.
 *
 * @param x0 The x-coordinate of the start point.
 * @param y0 The y-coordinate of the start point.
 * @param x1 The x-coordinate of the end point.
 * @param y1 The y-coordinate of the end point.
 * @param color The color of the line.
 */
void glPlot2DHelper::PlotLineHigh(P_t x0, P_t y0, P_t x1, P_t y1, const glColor_t &color) 
{
	int dx = x1 - x0;
	int dy = y1 - y0;
	int xi = 1;

	if (dx < 0) {
		xi = -1;
		dx = -dx;
	}

	int D = 2 * dx - dy;

	while (y0 <= y1) {
		Plot(x0, y0, color);
		if (D > 0) {
			x0 += xi;
			D += 2 * (dx - dy);
		}
		else {
			D += 2 * dx;
		}
		++y0;
	}
}
/**
 * @brief Helper function to plot a vertical line on a 2D plane.
 *
 * This function plots a vertical line between two points with the specified color.
 *
 * @param x0 The x-coordinate of the start point.
 * @param y0 The y-coordinate of the start point.
 * @param y1 The y-coordinate of the end point.
 * @param color The color of the line.
 */
void glPlot2DHelper::PlotVLine(P_t x0, P_t y0, P_t y1, const glColor_t &color) 
{
	while (y0 <= y1) Plot(x0, y0++, color);
}

/**
 * @brief Helper function to plot a horizontal line on a 2D plane.
 *
 * This function plots a horizontal line between two points with the specified color.
 *
 * @param x0 The x-coordinate of the start point.
 * @param x1 The x-coordinate of the end point.
 * @param y0 The y-coordinate of the point.
 * @param color The color of the line.
 */
void glPlot2DHelper::PlotHLine(P_t x0, P_t x1, P_t y0, const glColor_t &color) 
{
	while (x0 <= x1) Plot(x0++, y0, color);
}

/**
 * @brief Plots a line on a 2D plane using Bresenham's line algorithm.
 *
 * This function plots a line between two points with the specified color.
 * It uses Bresenham's line algorithm to efficiently plot the line.
 * 
 * @param x0 The x-coordinate of the start point.
 * @param y0 The y-coordinate of the start point.
 * @param x1 The x-coordinate of the end point.
 * @param y1 The y-coordinate of the end point.
 * @param color The color of the line.
 * endpoints is inclusive
 */
void glPlot2DHelper::PlotLine(P_t x0, P_t y0, P_t x1, P_t y1, const glColor_t &color) 
{
	// Bresenham's line algorithm
	// https://en.wikipedia.org/wiki/Bresenham%27s_line_algorithm
	// Bresenham's line algorithm
	// https://en.wikipedia.org/wiki/Bresenham%27s_line_algorithm
		
	if (x0 == x1) {
		// Vertical line
		if (y0 < y1) PlotVLine(x0, y0, y1, color);
		else PlotVLine(x0, y1, y0, color);
		return;
	}
	if (y0 == y1) {
		// Horizontal line
		if (x0 < x1) PlotHLine(x0, x1, y0, color);
		else PlotHLine(x1, x0, y0, color);
		return;
	}
	// Determine the direction of the line
	if (abs(y1 - y0) < abs(x1 - x0)) {
		// Low slope
		if (x0 > x1) PlotLineLow(x1, y1, x0, y0, color);
		else PlotLineLow(x0, y0, x1, y1, color);
	}
	else {
		// High slope
		if (y0 > y1) PlotLineHigh(x1, y1, x0, y0, color);
		else PlotLineHigh(x0, y0, x1, y1, color);
	}
}

void glPlot2DHelper::PlotRectangle(const glRegion_t &region, const glColor_t &color)
{
	PlotLine(region.L(), region.T(), region.R() - 1, region.T(), color);
	PlotLine(region.R() - 1, region.T(), region.R() - 1, region.B() - 1, color);
	PlotLine(region.L(), region.B() - 1, region.R() - 1, region.B() - 1, color);
	PlotLine(region.L(), region.T(), region.L(), region.B() - 1, color);
}

void glPlot2DHelper::PlotRectangleFill(const glRegion_t &region, const glColor_t &color)
{
	FillRegion(region, color);
//	for (P_t y = region.T(); y < region.B(); y++)
	//	for (P_t x = region.L(); x < region.R(); x++)
		//	Plot(x, y, color);
}

/**
 * @brief Plots a rectangle with rounded corners.
 * 
 * @param region The region defining the rectangle.
 * @param radius The radius for the rounded corners.
 * @param color The color to draw the rectangle.
 */
void glPlot2DHelper::PlotRectangleRound(glRegion_t region, P_t radius, glColor_t color)
{
	// If radius is zero, plot a regular rectangle.
	if (radius == 0)
	{
		PlotRectangle(region, color);
		return;
	}

	// Limit the radius to half the width or height, whichever is smaller.
	radius = static_cast<P_t>(std::min(static_cast<int>(radius), 
		std::min(static_cast<int>(region.Height() / 2), static_cast<int>(region.Width() / 2))));

	// Plot the four sides of the rectangle, adjusted for the corner arcs.
	PlotLine(region.L() + radius, region.T(), region.R() - radius + 1, region.T(), color); // Top side
	PlotLine(region.R() - 1, region.T() + radius, region.R() - 1, region.B() - radius, color); // Right side
	//PlotLine(region.R() - radius, region.B(), region.L() + radius + 1, region.B(), color); // Bottom side
	PlotLine(region.L() + radius, region.B() - 1, region.R() - radius, region.B() - 1, color); // Bottom side
	//PlotLine(region.L(), region.B() - radius, region.L(), region.T() + radius + 1, color); // Left side
	PlotLine(region.L(), region.T() + radius, region.L(), region.B() - radius, color); // Left side

	// Plot the four rounded corners.
    
	// Top-left corner
	glRegion_t b(region.L(), region.T(), region.L() + radius, region.T() + radius);
	glPoint_t p(region.L() + radius, region.T() + radius);
	PlotArc(b, p, radius, color);

	// Top-right corner
	b = glRegion_t(region.R() - radius - 1, region.T(), region.R(), region.T() + radius);
	p = glPoint_t(region.R() - radius - 1, region.T() + radius);
	PlotArc(b, p, radius, color);

	// Bottom-right corner
	b = glRegion_t(region.R() - radius, region.B() - radius, region.R(), region.B());
	p = glPoint_t(region.R() - radius - 1, region.B() - radius - 1);
	PlotArc(b, p, radius, color);

	// Bottom-left corner
	b = glRegion_t(region.L(), region.B() - radius, region.L() + radius, region.B());
	p = glPoint_t(region.L() + radius, region.B() - radius - 1);
	PlotArc(b, p, radius, color); 
}


void glPlot2DHelper::PlotRectangleRoundFill(glRegion_t region, P_t radius, glColor_t color)
{
	if (radius == 0)
	{
		PlotRectangleFill(region, color);
		return;
	}
	if (radius > region.Height() / 2)
		radius = region.Height() / 2;
	if (radius > region.Width() / 2)
		radius = region.Width() / 2;

	// center + top + bottom
	PlotRectangleFill(region.Inflate(-radius, 0, -radius, 0), color);
		
	// left
	PlotRectangleFill(glRegion_t(region.L(), region.T() + radius, region.L() + radius, region.B() - radius - 1), color);
	// right
	PlotRectangleFill(glRegion_t(region.R() - radius-1, region.T() + radius, region.R(), region.B() - radius - 1), color);

	// left top
	glRegion_t b(region.L(), region.T(), region.L() + radius, region.T() + radius);
	glPoint_t p(region.L() + radius, region.T() + radius);
	PlotArcFill(b, p, radius, color);

	// right top
	b = glRegion_t(region.R() - radius - 1, region.T(), region.R(), region.T() + radius);
	p = glPoint_t(region.R() - radius - 1, region.T() + radius);
	PlotArcFill(b, p, radius, color);

	// right bottom
	b = glRegion_t(region.R() - radius - 1, region.B() - radius - 1, region.R(), region.B());
	p = glPoint_t(region.R() - radius - 1, region.B() - radius - 1);
	PlotArcFill(b, p, radius, color);

	// left bottom
	b = glRegion_t(region.L(), region.B() - radius - 1, region.L() + radius, region.B());
	p = glPoint_t(region.L() + radius, region.B() - radius - 1);
	PlotArcFill(b, p, radius, color);
}

/*
// https://web.archive.org/web/20120422045142/https://banu.com/blog/7/drawing-circles/
void glPlot2DHelper::PlotCircle(glPoint_t &center, P_t radius, glARGB_t color)
{
	// cos pi/4 = 185363 / 2^18 (approx) 
	int l = ((radius * 185363) >> 18)+1;
	
	// At x=0, y=radius 
	int y = radius; 
	
	int y2;
	int r2 = y2 = y * y;
	int ty = (2 * y) - 1;
	int y2_new = r2 + 3;
	
	for (P_t x = 0; x <= l; x++) 
	{
		y2_new -= (2 * x) - 3;

		if ((y2 - y2_new) >= ty) {
			y2 -= ty;
			y -= 1;
			ty -= 2;
		}
		
		Plot(center.X + x, center.Y + y, color);
		Plot(center.X + x, center.Y - y, color);
		Plot(center.X - x, center.Y + y, color);
		Plot(center.X - x, center.Y - y, color);

		Plot(center.X + y, center.Y + x, color);
		Plot(center.X + y, center.Y - x, color);
		Plot(center.X - y, center.Y + x, color);
		Plot(center.X - y, center.Y - x, color);
	}
}
*/

/**
 * @brief Plots a circle on a 2D plane using the Midpoint Circle Algorithm.
 *
 * This function plots a circle centered at the given point with the specified radius and color.
 * It uses the Midpoint Circle Algorithm to efficiently plot the circle.
 * 
 * @param center The center point of the circle.
 * @param radius The radius of the circle.
 * @param color The color of the circle.
 */
void glPlot2DHelper::PlotCircle(const glPoint_t &center, P_t radius, const glColor_t &color) 
{
	// https://en.wikipedia.org/wiki/Midpoint_circle_algorithm
		
	int t1 = radius / 16;
	int x = radius;
	int y = 0;
    
	while (x >= y) {
		// Plot the eight symmetrical points
		Plot(center.X + x, center.Y + y, color);
		Plot(center.X + x, center.Y - y, color);
		Plot(center.X - x, center.Y + y, color);
		Plot(center.X - x, center.Y - y, color);

		Plot(center.X + y, center.Y + x, color);
		Plot(center.X + y, center.Y - x, color);
		Plot(center.X - y, center.Y + x, color);
		Plot(center.X - y, center.Y - x, color);

		// Update y and t1 for the next point
		++y;
		t1 += y;
		int t2 = t1 - x;

		// If the point is outside the circle, adjust x
		if (t2 >= 0) {
			t1 = t2;
			--x;
		}
	}
}

/**
 * @brief Plots a filled circle on a 2D plane.
 *
 * This function plots a filled circle centered at the given point with the specified radius and color.
 *
 * @param center The center point of the circle.
 * @param radius The radius of the circle.
 * @param color The color of the circle.
 */
void glPlot2DHelper::PlotCircleFill(const glPoint_t &center, P_t radius, const glColor_t &color) 
{
	int rSquared = radius * radius;
    
	for (int y = -radius; y <= radius; ++y) {
		for (int x = -radius; x <= radius; ++x) {
			if ((x * x) + (y * y) <= rSquared) {
				Plot(center.X + x, center.Y + y, color);
			}
		}
	}
}

/**
 * @brief Plots an arc within a bounding box on a 2D plane.
 *
 * This function plots an arc centered at the given point with the specified radius and color within the given bounding box.
 * 
 * @param box The bounding box where the arc will be plotted.
 * @param center The center point of the arc.
 * @param radius The radius of the arc.
 * @param color The color of the arc.
 */
void glPlot2DHelper::PlotArc(const glRegion_t &box, const glPoint_t &center, P_t radius, const glColor_t &color) 
{
	int t1 = radius / 16;
	int x = radius;
	int y = 0;
    
	while (x >= y) {
		Plot(box, center.X + x, center.Y + y, color);
		Plot(box, center.X + x, center.Y - y, color);
		Plot(box, center.X - x, center.Y + y, color);
		Plot(box, center.X - x, center.Y - y, color);

		Plot(box, center.X + y, center.Y + x, color);
		Plot(box, center.X + y, center.Y - x, color);
		Plot(box, center.X - y, center.Y + x, color);
		Plot(box, center.X - y, center.Y - x, color);

		++y;
		t1 += y;
		int t2 = t1 - x;
		if (t2 >= 0) {
			t1 = t2;
			--x;
		}
	}
}

/**
 * @brief Plots a filled arc within a bounding box on a 2D plane.
 *
 * This function plots a filled arc centered at the given point with the specified radius and color within the given bounding box.
 *
 * @param box The bounding box where the arc will be plotted.
 * @param center The center point of the arc.
 * @param radius The radius of the arc.
 * @param color The color of the arc.
 */
void glPlot2DHelper::PlotArcFill(const glRegion_t &box, const glPoint_t &center, P_t radius, const glColor_t &color) 
{
	int rSquared = radius * radius;
    
	for (int y = -radius; y <= radius; ++y) {
		for (int x = -radius; x <= radius; ++x) {
			if ((x * x) + (y * y) <= rSquared) {
				Plot(box, center.X + x, center.Y + y, color);
			}
		}
	}
}

void glPlot2DHelper::PlotBorder(glRegion_t region, P_t width, P_t radius, glColor_t color)
{
	if (radius == 0)
		for (P_t i = 0; i < width; i++)
			PlotRectangle(region.Inflate(-i), color);
	else
		for (P_t i = 0; i < width; i++)
			PlotRectangleRound(region.Inflate(-i), radius - i, color);
}


