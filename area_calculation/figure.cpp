#include "figure.h"
#include<iomanip>
Retangle:: Retangle(string x1, string x2, char c):Button()
{
	this->R_long = stod(x1);
	this->R_height = stod(x2);
	this->unit = c;
	this->x = 0;
	this->y = 150;
	this->xx = 800;
	this->yy = 200;
	this->color = WHITE;
	this->textString = "长方形的面积为：";
	this->textStyle = "楷体";
};
void Retangle::showArea()
{
	double R_long1, R_height1;
	if (unit == 'b')
	{
		R_height1 = R_height * 2.54;
		R_long1 = R_long * 2.54;
		area = R_height1 * R_long1;
	}
	else
		area = R_height * R_long;
	string area0 = to_string(area);
	string show = "长方形的面积为" + area0 + "平方厘米";
	textString = show;
	drawTip1();
	
}

Triangle::Triangle(string x1, string x2, char c) :Button()
{
	this->T_height =stod(x1);   /*!< stod函数将字符串转化double类型*/
	this->T_bottom =stod(x2);
	this->unit = c;
}
void Triangle::showArea()
{

}

Circle::Circle(string r1, char c) :Button()
{
	this->r = stod(r1);
	this->unit = c;
}
void Circle::showArea()
{

}