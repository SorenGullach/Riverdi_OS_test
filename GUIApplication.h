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
#include <Fonts/GUIFont.h>

class GUIPageTest : public glPage
{
public:
	GUIPageTest()
		: glPage("PageTest")
	{
		_Color = glColor_t(0, 0, 0);
	}
	// Initialize object
	virtual void Init()
	{
		l1 = glLine(0, 0, _Position.Width(), _Position.Height(), Cr);
		l2 = glLine(_Position.Width(), 0, 0, _Position.Height(), Cg);
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

class GUIPage1 : public glPage
{
public:
	GUIPage1()
		: glPage("Page1")
	{
		_Color = glColor_t(0, 0, 0);
	}
	// Initialize object
	virtual void Init()
	{
		B1.BackColor(glColor_t(glColors::LAWN_GREEN));
		B1.PressedColor(glColor_t::FindNearestColor(0, 255, 255));
		
		Add(&B1);
		Add(&B2);
		Add(&glText1);
		Add(&glText2);
		Add(&glText3);
		Add(&glText4);
		Add(&glText5);
		Add(&glText6);
		Add(&glText7);
		Add(&glText8);
		Add(&glText9);
		Add(&glText10);
		Add(&glText11);
		Add(&glText12);
		Add(&glText13);
		Add(&glText14);
		Add(&glText15);
		Add(&glText16);

	}
private:
	glButton B1 = { gl2DPoint_t(100, 300, 300, 400) };
	glButtonText < 20, Arial_22_2> B2 = { gl2DPoint_t(200, 100, 500, 200), "Page1" };
	
	glText<20> glText1 = { gl2DPoint_t(0, 0, 200, 100), "Page1", Arial_16_1 };
	glText<20> glText2 = { gl2DPoint_t(300, 0, 500, 100), "Page1", Arial_16_2 };
	glText<20> glText3 = { gl2DPoint_t(0, 100, 200, 200), "Page1", Arial_18_1 };
	glText<20> glText4 = { gl2DPoint_t(300, 100, 500, 200), "Page1", Arial_18_2 };
	glText<20> glText5 = { gl2DPoint_t(0, 200, 200, 300), "Page1", Arial_20_1 };
	glText<20> glText6 = { gl2DPoint_t(300, 200, 500, 300), "Page1", Arial_20_2 };
	glText<20> glText7 = { gl2DPoint_t(0, 300, 200, 400), "Page1", Arial_22_1 };
	glText<20> glText8 = { gl2DPoint_t(300, 300, 500, 400), "Page1", Arial_22_2 };
	glText<20> glText9 = { gl2DPoint_t(0, 400, 200, 500), "Page1", Arial_24_1 };
	glText<20> glText10 = { gl2DPoint_t(300, 400, 500, 500), "Page1", Arial_24_2 };

	glText<20> glText11 = { gl2DPoint_t(500 + 0, 0, 500 + 200, 100), "Page1", Arial_26_1 };
	glText<20> glText12 = { gl2DPoint_t(500 + 300, 0, 500 + 500, 100), "Page1", Arial_26_2 };
	glText<20> glText13 = { gl2DPoint_t(500 + 0, 100, 500 + 200, 200), "Page1", Arial_28_1 };
	glText<20> glText14 = { gl2DPoint_t(500 + 300, 100, 500 + 500, 200), "Page1", Arial_28_2 };
	glText<20> glText15 = { gl2DPoint_t(500 + 0, 200, 500 + 200, 300), "Page1", Arial_95_1 };
	glText<20> glText16 = { gl2DPoint_t(500 + 300, 200, 500 + 500, 300), "Page1", Arial_95_2 };
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
		glMain::AddPage(&Page1);
		
		PageTest.Init();
		Page1.Init(); 

		//		glMain::UnitTest();
	}

private:
	GUIPageTest PageTest;
	GUIPage1 Page1;
};