#include "button.h"
#include "figure.h"
int main()
{
	initgraph(800, 600);
	Button* tip = new Button(0, 0, 800,600,WHITE, "��ѡ����Ҫ���������ͼ�Σ�", "����");
	tip->drawTip1();
	Button* circle = new Button(50, 50, 250, 100, WHITE, "Բ��", "����");
	Button* retangle0 = new Button(250,50,450,100,WHITE,"������","����");
	Button* delta = new Button(450, 50, 650, 100, WHITE, "������", "����");
	while (1) 
	{
		MOUSEMSG m = GetMouseMsg();  /*!<���������Ϣ */
		circle->drawButton();
        retangle0->drawButton();
	    delta->drawButton();
		circle->changeColor(m);
		retangle0->changeColor(m);
		delta->changeColor(m);
		circle->clickButton(m);
		if (retangle0->clickButton(m))    /*!< ����Ƿ�����ť*/
		{
			Button* tip2 = new Button(0, 100, 800, 150, WHITE, "�����볤���εĳ��Ϳ�", "����");
			tip2->drawTip1();
			char m1[10];
			InputBox(m1, 10, "�����볤��");   /*!< Inpubox����������ʾ���������*/
			char m2[10];
			InputBox(m2, 10, "�������");
			char m3[10];
			InputBox(m3, 10, "��ѡ��λ��a������) �� b��Ӣ�磩");
			string x1 = m1;
			string x2 = m2;
			char x3 = m3[0];
			Retangle* retangle1 = new Retangle(x1, x2, x3);
			retangle1->showArea();
		}
		if (circle->clickButton(m))
		{
			Button* tip2 = new Button(0, 100, 800, 150, WHITE, "������Բ�İ뾶:", "����");
			tip2->drawTip1();
			char m1[10];
			InputBox(m1, 10, "������뾶:");
			char m3[10];
			InputBox(m3, 10, "��ѡ��λ��a������) �� b��Ӣ�磩");
			string x1 = m1;
			char x3 = m3[0];
			Circle* circle = new Circle(x1, x3);
			circle->showArea();
		}
	}
	_getch();  /*!<�û������ַ�����ֹ���� */
	closegraph();
	return 0;
}
