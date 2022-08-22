/**
@file area.cpp
*/
#pragma once
#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<string>
using namespace std;
/// ����һ����ť��
/// 
/// ������ʵ�ְ�ť�Ļ����Լ������ʾ��Ļ���
class Button
{
public:
	Button();
	Button(int x, int y, int xx, int yy, COLORREF color, string textString, string textStyle);
	void drawButton();   /*!< ���ư�ť*/
	void drawTip1();  /*!< ������ʾ�� */
	void changeColor(MOUSEMSG m);  /*!< �ı䰴ť��ɫ */
	bool isInButton(MOUSEMSG m);   /*!<�ж�����Ƿ��ڰ�ť�� */
	bool clickButton(MOUSEMSG m);  /*!< ����Ƿ�����ť */
	COLORREF& getColor();  
	string& getText();
	double area;   /*!< ��ť������� */
protected:
	int x;           /*!< �������϶���ĺ�����*/
	int y;          /*!< �������϶����������*/
	int xx;          /*!< �������¶���ĺ�����*/
	int yy;           /*!< �������¶����������*/
	COLORREF color ; /*!< ���ο򱳾�����ɫ*/
	string textString;  /*!<  �����������*/
	string textStyle;  /*!<  ���ֵ���ʽ*/
};
