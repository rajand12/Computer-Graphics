//Create a 2D solar system by using ellipse and circle

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT, gm; 
    initgraph(&gd, &gm, (char*)"");
//    setfillstyle(SOLID_FILL,RED);
    circle(310,250,15);
//    floodfill(312,252,15);
    ellipse(310,250,0,360,65,30);
    circle(375,250,10);
    ellipse(310,250,0,360,115,60);
    circle(400,215,12);
    ellipse(310,250,0,360,165,90);
    circle(150,230,12);
    ellipse(310,250,0,360,215,120);
    circle(245,365,12);
    ellipse(310,250,0,360,265,150);
    circle(300,400,12);
	getch();
	closegraph();
}


