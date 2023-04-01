//Write a program to implement reflection of a rectangle about y= x line. 

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	int x1=300,y1=100,x2=400,y2=100,x3=400,y3=400,x4=300,y4=400;
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x4,y4);
	line(x1,y1,x4,y4);
	//reflection about y=x	
	line(y1,x1,y2,x2);
	line(y2,x2,y3,x3);
	line(y3,x3,y4,x4);
	line(y1,x1,y4,x4);
	getch();
	closegraph();
}


