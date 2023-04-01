//Scale rectangle A(10,10),B(110,10),C(10,50) and D(110,50) by the factor 2.
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT, gm; 
    initgraph(&gd, &gm, (char*)"");
	int x0 = 10;
	int y0 = 10;
	int x1 = 110;
	int y1 = 10;
	int x2 = 110;
	int y2 = 50;
	int x3 = 10;
	int y3 = 50;
	int scf = 2; //scaling factor
	setcolor(4);
	line(x0,y0,x1,y1);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x0,y0,x3,y3);
	setcolor(11);
	line(x0*scf,y0*scf,x1*scf,y1*scf);
	line(x1*scf,y1*scf,x2*scf,y2*scf);
	line(x2*scf,y2*scf,x3*scf,y3*scf);
	line(x0*scf,y0*scf,x3*scf,y3*scf);
	getch();
	closegraph();
		
}
