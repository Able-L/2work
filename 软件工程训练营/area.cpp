#include "button.h"
#include "figure.h"
int main()
{
	initgraph(800, 600);
	Button* tip = new Button(0, 0, 800,600,WHITE, "请选择所要计算面积的图形：", "楷体");
	tip->drawTip1();
	Button* circle = new Button(50, 50, 250, 100, WHITE, "圆形", "楷体");
	Button* retangle0 = new Button(250,50,450,100,WHITE,"长方形","楷体");
	Button* delta = new Button(450, 50, 650, 100, WHITE, "三角形", "楷体");
	while (1) 
	{
		MOUSEMSG m = GetMouseMsg();  /*!<返回鼠标信息 */
		circle->drawButton();
        retangle0->drawButton();
	    delta->drawButton();
		circle->changeColor(m);
		retangle0->changeColor(m);
		delta->changeColor(m);
		circle->clickButton(m);
		if (retangle0->clickButton(m))    /*!< 鼠标是否点击按钮*/
		{
			Button* tip2 = new Button(0, 100, 800, 150, WHITE, "请输入长方形的长和宽：", "楷体");
			tip2->drawTip1();
			char m1[10];
			InputBox(m1, 10, "请输入长：");   /*!< Inpubox函数弹出提示框接受输入*/
			char m2[10];
			InputBox(m2, 10, "请输入宽：");
			char m3[10];
			InputBox(m3, 10, "请选择单位：a（厘米) 或 b（英寸）");
			string x1 = m1;
			string x2 = m2;
			char x3 = m3[0];
			Retangle* retangle1 = new Retangle(x1, x2, x3);
			retangle1->showArea();
		}
		if (circle->clickButton(m))
		{
			Button* tip2 = new Button(0, 100, 800, 150, WHITE, "请输入圆的半径:", "楷体");
			tip2->drawTip1();
			char m1[10];
			InputBox(m1, 10, "请输入半径:");
			char m3[10];
			InputBox(m3, 10, "请选择单位：a（厘米) 或 b（英寸）");
			string x1 = m1;
			char x3 = m3[0];
			Circle* circle = new Circle(x1, x3);
			circle->showArea();
		}
	}
	_getch();  /*!<用户接受字符，防止闪屏 */
	closegraph();
	return 0;
}
