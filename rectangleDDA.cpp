//Write a program to draw a rectangle using putpixel function of graphics.h and any line drawing algorithm.

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
	drawLine(100,100,200,100);
	drawLine(100,100,100,250);
	drawLine(200,100,200,250);
	drawLine(100,250,200,250);
	getch();  
    closegraph();
}
