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
	this->textString = "�����ε����Ϊ��";
	this->textStyle = "����";
	if (unit == 'b')     /*!<ʵ�ֵ�λת���ķ�֧*/
	{
		double R_long1, R_height1;
		R_height1 = R_height * 2.54;
		R_long1 = R_long * 2.54;
		area = R_height1 * R_long1;
	}
	else
		area = R_height * R_long;
};
void Retangle::showArea()
{
	string area0 = to_string(area);
	int area0_long = area0.size();
	area0.erase(area0.begin() + area0_long-3, area0.begin() + area0_long);  /*!< �ַ���ɾ��������λС��*/
	string show = "�����ε����Ϊ" + area0 + "ƽ������";
	textString = show;
	drawTip1();
}

Triangle::Triangle(string x1, string x2, char c) :Button()
{
	this->T_height =stod(x1);   /*!< stod�������ַ���ת��double����*/
	this->T_bottom =stod(x2);
	this->unit = c;
	this->x = 0;
	this->y = 150;
	this->xx = 800;
	this->yy = 200;
	this->color = WHITE;
	this->textString = "�����ε����Ϊ��";
	this->textStyle = "����";
	if (unit == 'b')
	{
		double T_height1, T_bottom1;
		T_height1 = T_height * 2.54;
		T_bottom1 = T_bottom * 2.54;
		area = T_height1 * T_bottom1 / 2;
	}
	else
		area = T_height * T_bottom / 2;
}
void Triangle::showArea()
{
	
	string area0 = to_string(area);
	int area0_long = area0.size();
	area0.erase(area0.begin() + area0_long - 3, area0.begin() + area0_long);  /*!< �ַ���ɾ��������λС��*/
	string show = "�����ε����Ϊ" + area0 + "ƽ������";
	textString = show;
	drawTip1();
}

Circle::Circle(string r1, char c) :Button()
{
	this->r = stod(r1);
	this->unit = c;
	this->r = stod(r1);
	this->unit = c;
	this->x = 0;
	this->y = 150;
	this->xx = 800;
	this->yy = 200;
	this->color = WHITE;
	this->textString = "Բ�����Ϊ:";
	this->textStyle = "����";
	if (unit == 'b')
	{
		double r1;
		r1 = r * 2.54;
		area = PI * r1 * r1;
	}
	else
		area = PI * r * r;
}
void Circle::showArea()
{
	
	string area0 = to_string(area);
	int area0_long = area0.size();
	area0.erase(area0.begin() + area0_long - 3, area0.begin() + area0_long);  /*!< �ַ���ɾ��������λС��*/
	string show = "Բ�����Ϊ" + area0 + "ƽ������";
	textString = show;
	drawTip1();
}