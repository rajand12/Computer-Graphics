//Shift/Translate a point form (20,20) using translatin t(x) = 100 t(y) = 200

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT, gm; 
    initgraph(&gd, &gm, (char*)"");
	int x0 = 20;
	int y0 = 20;
	int tx = 100;
	int ty = 200;
	putpixel(x0, y0, 4);
	putpixel(x0+tx,y0+ty,11);
	getch();
	closegraph();
		
}
