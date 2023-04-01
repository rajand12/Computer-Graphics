//Translate a square three times by 100 to the right.

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT, gm; 
    initgraph(&gd, &gm, (char*)"");
	int x0 = 10, y0 = 10;
	int x1 = 10, y1 = 30;
	int x2 = 30, y2 = 30;
	int x3 = 30, y3 = 10;
	int tx = 0;
	line(x0+tx,y0,x1+tx,y1);
	line(x1+tx,y1,x2+tx,y2);
	line(x2+tx,y2,x3+tx,y3);
	line(x0+tx,y0,x3+tx,y3);
	tx += 100;
	line(x0+tx,y0,x1+tx,y1);
	line(x1+tx,y1,x2+tx,y2);
	line(x2+tx,y2,x3+tx,y3);
	line(x0+tx,y0,x3+tx,y3);
	tx += 100;
	line(x0+tx,y0,x1+tx,y1);
	line(x1+tx,y1,x2+tx,y2);
	line(x2+tx,y2,x3+tx,y3);
	line(x0+tx,y0,x3+tx,y3);
	tx += 100;
	line(x0+tx,y0,x1+tx,y1);
	line(x1+tx,y1,x2+tx,y2);
	line(x2+tx,y2,x3+tx,y3);
	line(x0+tx,y0,x3+tx,y3);
	getch();
	closegraph();
}
//void translate()

