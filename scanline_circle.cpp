//Write a program to fill a circle by scanline algorithm.

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	int radius=50,y;
	int x1=0,x2=0;
	setcolor(4);
	for(y=0;y>-radius;y--)
	{
		x1 = sqrt((radius*radius)-(y*y));
		x2 = -sqrt((radius*radius)-(y*y));
		line(x1+100,y+100,x2+100,y+100);
	}
	for(y=0;y<=radius;y++)
	{
		x1 = sqrt((radius*radius)-(y*y));
		x2 = -sqrt((radius*radius)-(y*y));
		line(x1+100,y+100,x2+100,y+100);
	}
	getch();
	closegraph();
}
