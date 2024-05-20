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

#include <glMain.h>
#include <glPage.h>
#include <glFont.h>

class GUIPageTest : public glPage
{
public:
	GUIPageTest()
		: glPage("PageTest")
	{
		_Color = glColor_t(0, 0, 0);
	}
	// Initialize widget
	virtual void Init()
	{
		l1 = glLine(0, 0, _Region.Width(), _Region.Height(), Cr);
		l2 = glLine(_Region.Width(), 0, 0, _Region.Height(), Cg);
		Add(&p1);
		Add(&p2);
		Add(&p3);
		Add(&p4);
		Add(&l1);
		Add(&l2);
		Add(&r1);
		Add(&c1);
		Add(&r2);
		Add(&a1);
		Add(&f1);
		Add(&r3);
		Add(&fa1);
		Add(&r6);
		Add(&r5);
		Add(&r4);
		Add(&rr1);
		Add(&rrf1);
		
		Add(&B1);
		Add(&B2);
	}
private:

	glColor_t Cr = glColor_t(glColors::RED);
	glColor_t Cg = glColor_t(glColors::GREEN);
	glColor_t Cb = glColor_t(glColors::BLUE);
	glPixel p1 = { 100, 100, Cr };
	glPixel p2 = { 100, 101, glColors::RED };
	glPixel p3 = { 100, 102, glColors::RED };
	glPixel p4 = { 100, 103, glColors::RED };
	glLine l1;
	glLine l2;
	glRectangle r1 = { 110, 110, 400, 400, Cr };
	glCircle c1 = { 500, 300, 100, glColors::RED };
	glRectangle r2 = { gl2DPoint_t(200, 200, 300, 300), glColors::GREEN };
	glArc a1 = { gl2DPoint_t(200, 200, 300, 300), glPoint_t(200, 200), 50, glColors::BLUE };
	glCircleFill f1 = { 700, 300, 100, glColors::BLUE };
	glRectangle r3 = { gl2DPoint_t(200, 450, 300, 550), glColors::BLANCHED_ALMOND };
	glArcFill fa1 = { gl2DPoint_t(200, 450, 300, 550), glPoint_t(300, 550), 100, glColors::BISQUE };
	glRectangle r4 = { gl2DPoint_t(400 - 2, 450 - 2, 500 + 2, 550 + 2), glColors::DARK_OLIVE_GREEN };
	glRectangle r5 = { gl2DPoint_t(400 - 1, 450 - 1, 500 + 1, 550 + 1), glColors::LIGHT_SKY_BLUE };
	glRectangleFill r6 = { gl2DPoint_t(400, 450, 500, 550), glColors::LAWN_GREEN };
	
	glRectangleRound rr1 = { gl2DPoint_t(500, 10, 700, 100), 30, glColors::GREEN_YELLOW };
	glRectangleRoundFill rrf1 = { gl2DPoint_t(200, 10, 400, 100), 30, glColors::LIME_GREEN };
	
	glButton B1 = { gl2DPoint_t(0, 0, 200, 100) };
	glButtonText<20, Arial_16_1> B2 = { gl2DPoint_t(200, 300, 500, 400), "Hello" };
};

class GUIPageTexts : public glPage
{
public:
	GUIPageTexts()
		: glPage("Page1")
	{
		_Color = glColors::LIGHT_PINK;
	}
	// Initialize widget
	virtual void Init()
	{
		P_t xmax=0,x = 0,y=0;
		for (int i = 0; i < 18; i++)
		{
			Add(&glTexts[i]); 
			glTexts[i].Region().MoveTo(gl2DPoint_t(x, y, x+ glTexts[i].TextWidth(), y+ glTexts[i].TextHeight()).Inflate(0, 0, 5, 5));
			y = glTexts[i].Region().B();
			if (glTexts[i].Region().R() > xmax) xmax = glTexts[i].Region().R();
			if (y > glVideoMemory::ScreenHeight())
			{
				x = xmax;
				y = 0;
				if (x > glVideoMemory::ScreenWidth())
					x = 0;
				glTexts[i].Region().MoveTo(gl2DPoint_t(x, y, x + glTexts[i].TextWidth(), y + glTexts[i].TextHeight()).Inflate(0, 0, 5, 5));
				y = glTexts[i].Region().B();
			}
		}
	}
private:
	glText<20> glTexts[18]
	{
		{ gl2DPoint_t(0, 0, 0, 0), "jArial_10_1", Arial_10_1 }, // 0
		{ gl2DPoint_t(0, 0, 0, 0), "jArial_12_1", Arial_12_1 },
		{ gl2DPoint_t(0, 0, 0, 0), "jArial_14_1", Arial_14_1 },
		{ gl2DPoint_t(0, 0, 0, 0), "jArial_16_1", Arial_16_1 },
		{ gl2DPoint_t(0, 0, 0, 0), "jArial_19_1", Arial_19_1 },
		{ gl2DPoint_t(0, 0, 0, 0), "jArial_22_1", Arial_22_1 },
		{ gl2DPoint_t(0, 0, 0, 0), "jArial_26_1", Arial_26_1 },
		{ gl2DPoint_t(0, 0, 0, 0), "jArial_31_1", Arial_31_1 },
		{ gl2DPoint_t(0, 0, 0, 0), "jArial_37_1", Arial_37_1 },
		{ gl2DPoint_t(0, 0, 0, 0), "jArial_44_1", Arial_44_1 },
		{ gl2DPoint_t(0, 0, 0, 0), "jArial_52_1", Arial_52_1 }, // 10
		{ gl2DPoint_t(0, 0, 0, 0), "jArial_62_1", Arial_62_1 },
		{ gl2DPoint_t(0, 0, 0, 0), "jArial_74_1", Arial_74_1 },
		{ gl2DPoint_t(0, 0, 0, 0), "jArial_88_1", Arial_88_1 },
		{ gl2DPoint_t(0, 0, 0, 0), "jArial_105_1", Arial_105_1 },
		{ gl2DPoint_t(0, 0, 0, 0), "jArial_126_1", Arial_126_1 }, 
		{ gl2DPoint_t(0, 0, 0, 0), "jArial_151_1", Arial_151_1 },
		{ gl2DPoint_t(0, 0, 0, 0), "jArial_181_1", Arial_181_1, glColor_t(glColor_t::eColorOperation::ComplementBackground) }, // 17
	}
	;
};

class GUIPageButtons : public glPage
{
public:
	GUIPageButtons()
		: glPage("Page1")
	{
		_Color = glColor_t(0, 0, 0);
	}
	// Initialize widget
	virtual void Init()
	{
		B2.TextColor(glColor_t(glColor_t::eColorOperation::ComplementBackground));
		
		B1.BackColor(glColors::LAWN_GREEN);
		B1.PressedColor(glColors::BURLYWOOD);
		
		Add(&B1);
		Add(&B2);
	}
private:
	glButton B1 = { gl2DPoint_t(100, 450, 300, 550) };
	glButtonText < 20, Arial_22_1> B2 = { gl2DPoint_t(400, 450, 600, 550), "Page1" };
};

/*
 * This is the "main" class for controlling the GUI
 * handles pages and GUI state
 * reports to CM4 and other code of GUI changes
 * 
 */
class GUIApplication : glMain
{
public:
	GUIApplication()
	{
	}
	void Init()
	{
		glMain::Init();

		// construct the GUI
		glMain::AddPage(&PageTest);
		glMain::AddPage(&PageTexts);
		glMain::AddPage(&PageButtons);
		
		PageTest.Init();
		PageTexts.Init(); 
		PageButtons.Init();

		//		glMain::UnitTest();
	}

private:
	GUIPageTest PageTest;
	GUIPageTexts PageTexts;
	GUIPageButtons PageButtons;
};