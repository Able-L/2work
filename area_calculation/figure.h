/// ����һ��ͼ��ͷ�ļ�
/// 
/// ���а����������࣬�����࣬��Բ���࣬��Щ��̳��˰�ť��#pragma once
#include "button.h"
const double PI = 3.1415926;
/// ������
/// 
/// </summary>
class Retangle :public Button
{
	double R_long, R_height;  /*!< ���εĳ��Ϳ�*/
	char unit ;  /*!< ��λ���׺�Ӣ���ѡ��*/
public:
	Retangle(string x1, string x2,char c); /*!< ��ĳ�ʼ��*/
	void showArea();    /*!< �����ӡ�������*/

};
/// ��������
/// 
/// </summary>
class Triangle :public Button
{
	double T_height,T_bottom;  /*!< �����εĵ׺͸�*/
	char unit;  /*!< ��λ���׺�Ӣ���ѡ��*/
public:
	Triangle(string x1, string x2,char c);  /*!< ��ĳ�ʼ��*/
	void showArea();  /*!< �����ӡ�������*/

};
/// Բ����
/// 
/// </summary>
class Circle :public Button
{
	double r;  /*!< �뾶*/
	char unit;   /*!< ��λ���׺�Ӣ���ѡ��*/
public:
	Circle(string r1,char c);  /*!< ��ĳ�ʼ��*/
	void showArea();  /*!< �����ӡ�������*/

};