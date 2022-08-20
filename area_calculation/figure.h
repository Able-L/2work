#pragma once
#include "button.h"
const double PI = 3.1415926;
class Retangle :public Button
{
	double R_long, R_height;
	char unit ;
public:
	Retangle(string x1, string x2,char c);
	void showArea();

};
class Triangle :public Button
{
	double T_height,T_bottom;
	char unit;
public:
	Triangle(string x1, string x2,char c);
	void showArea();

};
class Circle :public Button
{
	double r;
	char unit;
public:
	Circle(string r1,char c);
	void showArea();

};