/**
@file area.cpp
*/
#pragma once
#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<string>
using namespace std;
/// 这是一个按钮类
/// 
/// 它可以实现按钮的绘制以及相关提示框的绘制
class Button
{
public:
	Button();
	Button(int x, int y, int xx, int yy, COLORREF color, string textString, string textStyle);
	void drawButton();   /*!< 绘制按钮*/
	void drawTip1();  /*!< 绘制提示框 */
	void changeColor(MOUSEMSG m);  /*!< 改变按钮颜色 */
	bool isInButton(MOUSEMSG m);   /*!<判断鼠标是否在按钮上 */
	bool clickButton(MOUSEMSG m);  /*!< 鼠标是否点击按钮 */
	COLORREF& getColor();  
	string& getText();
	double area;   /*!< 按钮区域面积 */
protected:
	int x;           /*!< 矩形左上顶点的横坐标*/
	int y;          /*!< 矩形左上顶点的纵坐标*/
	int xx;          /*!< 矩形右下顶点的横坐标*/
	int yy;           /*!< 矩形右下顶点的纵坐标*/
	COLORREF color ; /*!< 矩形框背景的颜色*/
	string textString;  /*!<  矩形里的文字*/
	string textStyle;  /*!<  文字的样式*/
};
