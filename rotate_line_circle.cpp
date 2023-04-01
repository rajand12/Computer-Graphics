//Rotate a line A(100,100) B(200,100) and a circle at centre (400,400) with radius 50 about origin by 30 degree.

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
int main()
{
	int gd=DETECT, gm; 
    initgraph(&gd, &gm, (char*)"");
	int x0 = 100;
	int y0 = 100;
	int x1 = 200;
	int y1 = 100;
	int radius = 50;
	int degree = 30;
	float angle = degree * (3.141592/180); //in radian
	int cent_x0 = 200;
	int cent_y0 = 200;
	setcolor(4);
	line(x0,y0,x1,y1);
	circle(cent_x0,cent_y0,radius);
	setcolor(11);
	line((x0*cos(angle)-y0*sin(angle)),(y0*cos(angle)+x0*sin(angle)),(x1*cos(angle)-y1*sin(angle)),(y1*cos(angle)+x1*sin(angle)));
	circle((cent_x0*cos(angle)-cent_y0*sin(angle)),(cent_y0*cos(angle)+cent_x0*sin(angle)),radius);
	getch();
	closegraph();	
}
