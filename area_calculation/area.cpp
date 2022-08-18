#include "button.h"
int main()
{
	initgraph(800, 600);
	Button* tip = new Button(100, 30, 700,80,WHITE, "请选择所要计算面积的图形：", "楷体");
	tip->drawButton2();
	Button* circle = new Button(100, 100, 250, 150, WHITE, "圆形", "楷体");
	Button* retangle = new Button(300,100,450,150,WHITE,"长方形","楷体");
	Button* delta = new Button(500, 100, 650, 150, WHITE,"三角形", "楷体");
	while (1) 
	{
		MOUSEMSG m = GetMouseMsg();
		circle->drawButton();
	    retangle->drawButton();
	    delta->drawButton();
		if (circle->isInButton(m))
			circle->getColor() = YELLOW;
		else circle->getColor() = WHITE;

		if (retangle->isInButton(m))
			retangle->getColor() = YELLOW;
		else retangle->getColor() = WHITE;

		if (delta->isInButton(m))
			delta->getColor() = YELLOW;
		else delta->getColor() = WHITE;

	}
	




	_getch();
	closegraph();
	return 0;
}
