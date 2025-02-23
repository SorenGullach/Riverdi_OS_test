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

#include "glButton.h"
#include "glLabel.h"
#include "glSlider.h"

class GUIPageWidgets : public glPageLink
{
public:
	GUIPageWidgets()
		: glPageLink("PageWidgets", glColors::BLACK)
	{
	}
	// Initialize widget
	virtual void Init()
	{
		l1 = glLine(glPoint_t(0, 0), glPoint_t(_Region.Width()-1, _Region.Height()-1), Cr);
		l2.MoveTo(glRegion_t(_Region.Width()-1, 0, 0, _Region.Height()-1));
		r7.MoveTo(glRegion_t(0, 0, _Region.Width(), _Region.Height())); 
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
		Add(&r7);
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
	glPixel p1 = { glPoint_t(100, 100), Cr };
	glPixel p2 = { glPoint_t(100, 101), glColors::RED };
	glPixel p3 = { glPoint_t(100, 102), glColors::RED };
	glPixel p4 = { glPoint_t(100, 103), glColors::RED };
	glLine l1 = { glPoint_t(), glPoint_t(), Cr };
	glLine l2 = { glPoint_t(), glPoint_t(), Cg };
 
	glRectangle r1 = { glRegion_t(110, 110, 400, 400), Cr };
	glCircle c1 = { glPoint_t(500, 300), 100, glColors::RED };
	glRectangle r2 = { glRegion_t(200, 200, 300, 300), glColors::GREEN };
	glArc a1 = { glRegion_t(200, 200, 300, 300), glPoint_t(200, 200), 50, glColors::BLUE };
	glCircleFill f1 = { glPoint_t(700, 300), 100, glColors::BLUE };
	glRectangle r3 = { glRegion_t(200, 450, 300, 550), glColors::BLANCHED_ALMOND };
	glArcFill fa1 = { glRegion_t(200, 450, 300, 550), glPoint_t(300, 550), 100, glColors::BISQUE };
	glRectangle r4 = { glRegion_t(400 - 2, 450 - 2, 500 + 2, 550 + 2), glColors::DARK_OLIVE_GREEN };
	glRectangle r5 = { glRegion_t(400 - 1, 450 - 1, 500 + 1, 550 + 1), glColors::LIGHT_SKY_BLUE };
	glRectangleFill r6 = { glRegion_t(400, 450, 500, 550), glColors::LAWN_GREEN };
	glRectangle r7 = { glRegion_t(0, 0, 1024, 600), glColors::WHITE };
	
	glRectangleRound rr1 = { glRegion_t(500, 10, 700, 100), 30, glColors::GREEN_YELLOW };
	glRectangleRoundFill rrf1 = { glRegion_t(200, 10, 400, 100), 30, glColors::LIME_GREEN };
	
	glButton<20, Arial_16_1> B1 = { glRegion_t(0, 0, 200, 100), "" };
	glButton<20, Arial_31_1> B2 = { glRegion_t(200, 300, 500, 400), "Hello" };
};

class GUIPageTexts : public glPageLink
{
public:
	GUIPageTexts()
		: glPageLink("PageTexts", glColors::CYAN)
	{
	}
	// Initialize widget
	virtual void Init()
	{
		P_t xmax = 0, x = 0, y = 0;
		for (int i = 0; i < 18; i++)
		{
			Add(&glTexts[i]); 
			glTexts[i].Region().MoveTo(glRegion_t(x, y, x + glTexts[i].TextSize().Width(), y + glTexts[i].TextSize().Height()).Inflate(0, 0, 5, 5));
			y = glTexts[i].Region().B();
			if (glTexts[i].Region().R() > xmax) xmax = glTexts[i].Region().R();
			if (y > hwLTDC::Height())
			{
				x = xmax;
				y = 0;
				if (x > hwLTDC::Width())
					x = 0;
				glTexts[i].Region().MoveTo(glRegion_t(x, y, x + glTexts[i].TextSize().Width(), y + glTexts[i].TextSize().Height()).Inflate(0, 0, 5, 5));
				y = glTexts[i].Region().B();
			}
		}
	}
private:
	glText<20> glTexts[18]
	{
		{ glRegion_t(0, 0, 0, 0), "jArial_10_1", Arial_10_1 }, // 0
		{ glRegion_t(0, 0, 0, 0), "jArial_12_1", Arial_12_1 },
		{ glRegion_t(0, 0, 0, 0), "jArial_14_1", Arial_14_1 },
		{ glRegion_t(0, 0, 0, 0), "jArial_16_1", Arial_16_1 },
		{ glRegion_t(0, 0, 0, 0), "jArial_19_1", Arial_19_1 },
		{ glRegion_t(0, 0, 0, 0), "jArial_22_1", Arial_22_1 },
		{ glRegion_t(0, 0, 0, 0), "jArial_26_1", Arial_26_1 },
		{ glRegion_t(0, 0, 0, 0), "jArial_31_1", Arial_31_1 },
		{ glRegion_t(0, 0, 0, 0), "jArial_37_1", Arial_37_1 },
		{ glRegion_t(0, 0, 0, 0), "jArial_44_1", Arial_44_1 },
		{ glRegion_t(0, 0, 0, 0), "jArial_52_1", Arial_52_1 }, // 10
		{ glRegion_t(0, 0, 0, 0), "jArial_62_1", Arial_62_1 },
		{ glRegion_t(0, 0, 0, 0), "jArial_74_1", Arial_74_1 },
		{ glRegion_t(0, 0, 0, 0), "jArial_88_1", Arial_88_1 },
		{ glRegion_t(0, 0, 0, 0), "jArial_105_1", Arial_105_1 },
		{ glRegion_t(0, 0, 0, 0), "jArial_126_1", Arial_126_1 }, 
		{ glRegion_t(0, 0, 0, 0), "jArial_151_1", Arial_151_1 },
		{ glRegion_t(0, 0, 0, 0), "jArial_181_1", Arial_181_1, glColor_t(glColor_t::eColorOperation::ComplementBackground) }, // 17
	}
	;
};

class GUIPageButtons : public glPageLink
{
public:
	GUIPageButtons()
		: glPageLink("PageButtons", glColors::LIGHT_CORAL)
	{
	}
	// Initialize widget
	virtual void Init()
	{
		B1.ReleasedColor(glColors::LAWN_GREEN);
		B1.PressedColor(glColors::BURLYWOOD);
		B3.CornerRadius(0);
		//	B3.Corners(glWidgetBorder::eCornerStyles::Angel);
		B3.BorderColor(glColors::RED);
		
		Add(&B1);
		Add(&B2);
		Add(&B3);
		
		Add(&l1);
		Add(&l2);
		Add(&l3);
	}
private:
	glButton< 35, Arial_22_1> B1 = { glRegion_t(100, 50, 300, 150), "B1 rc=LAWN_GREEN\npc=BURLYWOOD" };
	glButton< 35, Arial_31_1> B2 = { glRegion_t(400, 50, 600, 150), "B2 default" };
	glButton< 35, Arial_31_1> B3 = { glRegion_t(400, 200, 600, 300), "B3 Charp corners\nbc=RED" };
	
	glLabel< 35, Arial_31_1> l1 = { glRegion_t(100, 200, 350, 250), "l1 Label default" };
	glLabel< 35, Arial_31_1> l2 = {
		glRegion_t(100, 300, 350, 350),
		"l2 Label AGUAMARINE",
		glLabelTheme(glColor_t::eColorOperation::ComplementBackground, glColors::AQUAMARINE, glColors::WHITE, 5, 20)
	};
	glLabel< 35, Arial_31_1> l3 = { 
		glRegion_t(100, 400, 350, 450), 
		"l3 Label GREEN",
		glLabelTheme(glColor_t::eColorOperation::ComplementBackground, glColors::GREEN, glColors::WHITE, 5, 500)
	};
};

class GUIPageSliders : public glPageLink
{
public:
	GUIPageSliders()
		: glPageLink("PageSliders", glColors::LIGHT_GRAY)
	{
	}
	// Initialize widget
	virtual void Init()
	{
		Add(&S1);
		Add(&S2);
	}
private:
	glSlider< 35, Arial_31_1> S1 = { glRegion_t(100, 200, 500, 300), "S1 Slider" };
	glSlider< 35, Arial_31_1> S2 = { glRegion_t(600, 100, 700, 500), "S2 Slider" };
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
		glMain::AddPage(&PageSliders);
		
		PageTest.Init();
		PageTexts.Init(); 
		PageButtons.Init();
		PageSliders.Init();

		//		glMain::UnitTest();
	}

private:
	GUIPageWidgets PageTest;
	GUIPageTexts PageTexts;
	GUIPageButtons PageButtons;
	GUIPageSliders PageSliders;
};
