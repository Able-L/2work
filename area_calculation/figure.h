/// 这是一个图形头文件
/// 
/// 其中包含三角形类，矩形类，和圆形类，这些类继承了按钮类#pragma once
#include "button.h"
const double PI = 3.1415926;
/// 矩形类
/// 
/// </summary>
class Retangle :public Button
{
	double R_long, R_height;  /*!< 矩形的长和宽*/
	char unit ;  /*!< 单位厘米和英寸的选择*/
public:
	Retangle(string x1, string x2,char c); /*!< 类的初始化*/
	void showArea();    /*!< 结果打印输出函数*/

};
/// 三角形类
/// 
/// </summary>
class Triangle :public Button
{
	double T_height,T_bottom;  /*!< 三角形的底和高*/
	char unit;  /*!< 单位厘米和英寸的选择*/
public:
	Triangle(string x1, string x2,char c);  /*!< 类的初始化*/
	void showArea();  /*!< 结果打印输出函数*/

};
/// 圆形类
/// 
/// </summary>
class Circle :public Button
{
	double r;  /*!< 半径*/
	char unit;   /*!< 单位厘米和英寸的选择*/
public:
	Circle(string r1,char c);  /*!< 类的初始化*/
	void showArea();  /*!< 结果打印输出函数*/

};