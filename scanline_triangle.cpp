//Write a program to fill a triangle by scanline algorithm.

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	int i,j;
	int x1 = 200, y1= 200, x2= 50, y2= 300, x3= 350, y3= 300;
	float slope1 = (x2 - x1) / (y2 - y1);
	float slope2 = (x3 - x1) / (y3 - y1);
	float cutx1 = x1;
	float cutx2 = y1;
	setcolor(6);
	for (i = y1; i <= y2; i++)
	{
		line((int)cutx1, i, (int)cutx2, i);
    	cutx1 += slope1;
    	cutx2 += slope2;
	}
	getch();
	closegraph();
}
