//Write a program to implement layers in animation.
//Hint: Use at least 2 layers. Color the background of each layer separately. 
//Also draw a circle in the first layer, a rectangle in the second and so on. And take input from user to switch between layers.

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void layer1()
{
	int a[] = {0,0,639,0,639,479,0,479,0,0};
	setfillstyle(SOLID_FILL,RED);
	fillpoly(5,a);
	circle(300,300,40);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(301,301,15);
	
}
void layer2()
{
	int a[] = {0,0,639,0,639,479,0,479,0,0};
	setfillstyle(SOLID_FILL,GREEN);
	fillpoly(5,a);
	rectangle(100,100,200,300);
	setfillstyle(SOLID_FILL,CYAN);
	floodfill(101,101,15);
	
}
int main()
{
	int gd = DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	int choice;
	choice:
	printf("Press 1 for first layer and 2 for second layer:");
	scanf("%d",&choice);
	if(choice==1)
	layer1();
	if(choice==2)
	layer2();
	goto choice;
	getch();
	closegraph();
	
}
