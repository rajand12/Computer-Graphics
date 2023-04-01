//Create a rectangle and use flood fill algorithm to fill the rectangle with red color

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
flood_fill(int x, int y, int fill_color, int old_color)
{
	if(getpixel(x,y)==old_color)
	{
		putpixel(x,y,fill_color);
		flood_fill(x-1,y,fill_color,old_color);
		flood_fill(x+1,y,fill_color,old_color);
		flood_fill(x,y+1,fill_color,old_color);
		flood_fill(x,y-1,fill_color,old_color);
	}
}

int main()
{
	int gd = DETECT, gm;
	initgraph(&gd,&gm,(char*)"");
	rectangle(100,100,150,200);
	flood_fill(120,120,4,0);
	getch();
	closegraph();
}
