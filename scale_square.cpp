//Scale the square at centre 125,125 and of side 50 about its centre and about origin by factor of 2.

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT, gm; 
    initgraph(&gd, &gm, (char*)"");
    //centre 125,125
    int x0 = 100;
    int y0 = 100;
    int x1 = 150;
    int y1 = 100;
    int x2 = 150;
    int y2 = 150;
    int x3 = 100;
    int y3 = 150;
    line(x0,y0,x1,y1);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x0,y0,x3,y3);
    int scf = 2; //scaling factor
    setcolor(9);
    line(x0*scf,y0*scf,x1*scf,y1*scf);
    line(x1*scf,y1*scf,x2*scf,y2*scf);
    line(x2*scf,y2*scf,x3*scf,y3*scf);
    line(x0*scf,y0*scf,x3*scf,y3*scf);
    //translating to origin and scaling and translating back to its origin
  	x0 = x0-125;
    y0 = y0-125;
    x1 = x1-125;
    y1 = y1-125;
    x2 = x2-125;
    y2 = y2-125;
    x3 = x3-125;
    y3 = y3-125;
    line(x0*scf +125,y0*scf +125,x1*scf +125,y1*scf +125);
    line(x1*scf +125,y1*scf +125,x2*scf +125,y2*scf +125);
    line(x2*scf +125,y2*scf +125,x3*scf +125,y3*scf +125);
    line(x0*scf +125,y0*scf +125,x3*scf +125,y3*scf +125);
    getch();
    closegraph();
}
