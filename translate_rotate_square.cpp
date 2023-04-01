//Translate a square by 100 to the right , then rotate it by 25 degree, then after rotate by -50 degree about the origin.

#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
int main()
{
	int gd=DETECT, gm; 
    initgraph(&gd, &gm, (char*)"");
    int x0 = 100;
    int y0 = 100;
    int x1 = 200;
    int y1 = 100;
    int x2 = 200;
    int y2 = 200;
    int x3 = 100;
    int y3 = 200;
    line(x0,y0,x1,y1);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x0,y0,x3,y3);
    int tr = 100; //right translate
    x0 = x0 + tr;
	x1 = x1 + tr;
	x2 = x2 + tr;
	x3 = x3 + tr;
	setcolor(9);
	line(x0,y0,x1,y1);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x0,y0,x3,y3);
    int rotate1 = 25;
    int rotate2 = -15;
    float angle1 = rotate1 * (3.141592/180); //in radian
    float angle2 = rotate2 * (3.141592/180); //in radian
    setcolor(3);
	line((x0*cos(angle1)-y0*sin(angle1)),(y0*cos(angle1)+x0*sin(angle1)),(x1*cos(angle1)-y1*sin(angle1)),(y1*cos(angle1)+x1*sin(angle1)));
	line((x1*cos(angle1)-y1*sin(angle1)),(y1*cos(angle1)+x1*sin(angle1)),(x2*cos(angle1)-y2*sin(angle1)),(y2*cos(angle1)+x2*sin(angle1)));
	line((x2*cos(angle1)-y2*sin(angle1)),(y2*cos(angle1)+x2*sin(angle1)),(x3*cos(angle1)-y3*sin(angle1)),(y3*cos(angle1)+x3*sin(angle1)));
	line((x0*cos(angle1)-y0*sin(angle1)),(y0*cos(angle1)+x0*sin(angle1)),(x3*cos(angle1)-y3*sin(angle1)),(y3*cos(angle1)+x3*sin(angle1)));
	setcolor(7);
	line((x0*cos(angle2)-y0*sin(angle2)),(y0*cos(angle2)+x0*sin(angle2)),(x1*cos(angle2)-y1*sin(angle2)),(y1*cos(angle2)+x1*sin(angle2)));
	line((x1*cos(angle2)-y1*sin(angle2)),(y1*cos(angle2)+x1*sin(angle2)),(x2*cos(angle2)-y2*sin(angle2)),(y2*cos(angle2)+x2*sin(angle2)));
	line((x2*cos(angle2)-y2*sin(angle2)),(y2*cos(angle2)+x2*sin(angle2)),(x3*cos(angle2)-y3*sin(angle2)),(y3*cos(angle2)+x3*sin(angle2)));
	line((x0*cos(angle2)-y0*sin(angle2)),(y0*cos(angle2)+x0*sin(angle2)),(x3*cos(angle2)-y3*sin(angle2)),(y3*cos(angle2)+x3*sin(angle2)));
    getch();
    closegraph();
}
