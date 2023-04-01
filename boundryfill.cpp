//Create a shape and use boundry fill algorithm to fill it with green color

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
boundry_fill(int x, int y, int fill_color, int border_color)
{
	if(getpixel(x,y)!=fill_color && getpixel(x,y)!=border_color)
	{
		putpixel(x,y,fill_color);
		boundry_fill(x+1,y,fill_color,border_color);
		boundry_fill(x-1,y,fill_color,border_color);
		boundry_fill(x,y+1,fill_color,border_color);
		boundry_fill(x,y-1,fill_color,border_color);
	}
}

int main()
{
	int gd = DETECT, gm;
	initgraph(&gd,&gm,(char*)"");
	line(100,100,150,100);
	line(150,100,150,50);
	line(150,50,200,100);
	line(200,100,250,100);
	line(250,100,250,150);
	line(250,150,200,150);
	line(200,150,100,100);
//	rectangle(100,100,400,400);
	boundry_fill(200,135,2,15);
	getch();
	closegraph();
}
