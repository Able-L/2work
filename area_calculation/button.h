#pragma once
#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<string>
using namespace std;
class Button
{
public:
	Button(int x, int y, int xx, int yy, COLORREF color, string textString, string textStyle);
	void drawButton();
	void drawButton2();
	bool isInButton(MOUSEMSG m);
	bool clickButton(MOUSEMSG m);
	COLORREF& getColor();
	string& getText();
protected:
	int x;
	int y;
	int xx;
	int yy;
	COLORREF color ;
	string textString;
	string textStyle;
};
