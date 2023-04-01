//Write a program to draw a octagon using putpixel function of graphics.h and any line drawing algorithm.

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void drawLine(int x0, int y0, int x1, int y1)
{
	int i;
	float x,y,dx,dy,steps;
    dx = (float)(x1 - x0);  
    dy = (float)(y1 - y0);  
    if(dx>=dy)  
           {  
        steps = dx;  
    }  
    else  
           {  
        steps = dy;  
    }  
    dx = dx/steps;  
    dy = dy/steps;
    x = x0;  
    y = y0;  
    i = 1;  
    while(i<= steps)  
    {  
        putpixel(x, y, RED);  
        x += dx;  
        y += dy;  
        i+=1;  
    }	
}
int main()
{
	int gd = DETECT, gm;
	initgraph(&gd,&gm,(char*)"");
	
//	x0 = 100;
//	y0 = 100;
//	printf("%d %d %d %d",x2,y2,x3,y3);
	drawLine(100,100,200,100);
	drawLine(100,100,50,150);
	drawLine(200,100,250,150);
	drawLine(250,150,250,200);
	drawLine(50,150,50,200);
	drawLine(250,200,200,250);
	drawLine(50,200,100,250);
	drawLine(100,250,200,250);
	getch();  
    closegraph();
}
