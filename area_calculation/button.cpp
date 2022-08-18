#include "button.h"
Button::Button(int x, int y, int xx, int yy, COLORREF color, string textString, string textStyle)
{
	this->x = x;
	this->y = y;
	this->xx = xx;
	this->yy = yy;
	this->color = color;
	this->textString = textString;
	this->textStyle = textStyle;
};
void Button:: drawButton()
{
	setfillcolor(this->color);
	fillrectangle(x, y, xx, yy);
	setbkmode(TRANSPARENT);
	settextcolor(BLACK);
	settextstyle(30, 0, textString.c_str());
	outtextxy(x+abs(150-textwidth(textString.c_str()))/2, y+abs(50 - textheight(textString.c_str()))/2, textString.c_str());
};
void Button::drawButton2()
{
	setfillcolor(this->color);
	fillrectangle(x, y, xx, yy);
	setbkmode(TRANSPARENT);
	settextcolor(BLACK);
	settextstyle(30, 0, textString.c_str());
	outtextxy(x, y + abs(50 - textheight(textString.c_str())) / 2,textString.c_str());
};
bool Button::isInButton(MOUSEMSG m)
{
	if (m.x > x && m.y > y && m.x<xx && m.y<yy)
		return true;
	return false;
};
bool Button::clickButton(MOUSEMSG m)
{
	if (isInButton(m))
	{
		if (m.uMsg == WM_LBUTTONDOWN || m.uMsg == WM_RBUTTONDOWN)
			return true;
		return false;

	}
};
COLORREF& Button::getColor()
{
	return color;
};
string& Button::getText()
{
	return textString;
};