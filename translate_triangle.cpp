//Translate a triangle with A(35,10),B(10,50) and C(60,60) by t(x)=100 and t(y)=100

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT, gm; 
    initgraph(&gd, &gm, (char*)"");
	int x0 = 35;
	int y0 = 10;
	int x1 = 10;
	int y1 = 50;
	int x2 = 60;
	int y2 = 60;
	int tx = 100;
	int ty = 100;
	setcolor(4);
	line(x0,y0,x1,y1);
	line(x1,y1,x2,y2);
	line(x0,y0,x2,y2);
	setcolor(11);
	line(x0+tx,y0+ty,x1+tx,y1+ty);
	line(x1+tx,y1+ty,x2+tx,y2+ty);
	line(x0+tx,y0+ty,x2+tx,y2+ty);
	getch();
	closegraph();
		
}
