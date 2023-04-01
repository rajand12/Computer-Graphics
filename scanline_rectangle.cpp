//Write a program to fill a rectangle by scanline algorithm.

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	int i,j;
	int top_x = 50, top_y = 50, bot_x = 150, bot_y = 100;
	for(i=top_x;i<=bot_x;i++)
	{
		for(j=top_y;j<=bot_y;j++)
		{
			line(i,j,bot_x,j);
		}
	}
	getch();
	closegraph();
}
