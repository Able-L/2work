/// 这个cpp文件主要实现按钮中相关函数的实现
/// 
/// 包括按钮和提示框的绘制
/// 
#include "button.h"
Button::Button() {};
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
	setbkmode(TRANSPARENT);  /*!< 背景模式设计*/
	settextcolor(BLACK);  /*!< 文字颜色设计*/
	settextstyle(30, 0, textString.c_str());   /*!< 文字样式设计*/
	outtextxy(x+abs(150-textwidth(textString.c_str()))/2, y+abs(50 - textheight(textString.c_str()))/2, textString.c_str());  /*!< 文字打印输出*/
};
void Button::drawTip1()
{
	setfillcolor(this->color);
	fillrectangle(x, y, xx, yy);
	setbkmode(TRANSPARENT);
	settextcolor(BLACK);
	settextstyle(30, 0, textString.c_str());
	outtextxy(x, y + abs(50 - textheight(textString.c_str())) / 2,textString.c_str());
};

void Button::changeColor(MOUSEMSG m)
{
	if (isInButton(m))
		color = YELLOW;
	else
		color = WHITE;
}

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
/// 返回按钮颜色
/// 
/// </summary>
COLORREF& Button::getColor()
{
	return color;
};
/// 返回按钮文字
/// 
/// </summary>
string& Button::getText()
{
	return textString;
};
