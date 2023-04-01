//Write a program to draw a square using putpixel function of graphics.h and any line drawing algorithm.

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
	int x0,y0,x1,y1,x2,y2,x3,y3,side;
	printf("Enter the starting pixels for the square: ");
	scanf("%d %d",&x0,&y0);
	printf("Enter the side of the square: ");
	scanf("%d",&side);
//	x0 = 100;
//	y0 = 100;
//	side = 100;
	x1 = x0 + side;
	y1 = y0;
	x2 = x1;
	y2 = y1 + side;
	x3 = x2 - side;
	y3 = y2;
//	printf("%d %d %d %d",x2,y2,x3,y3);
	drawLine(x0,y0,x1,y1);
	drawLine(x1,y1,x2,y2);
	drawLine(x3,y3,x2,y2);
	drawLine(x0,y0,x3,y3);
	getch();  
    closegraph();
}
