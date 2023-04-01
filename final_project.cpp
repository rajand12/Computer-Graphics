// Final Project

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void translation(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int x5,int y5,int x6,int y6,int x7,int y7,int x8,int y8)
{
	while(!kbhit())
	{
		
		int trn;
		for(trn=1;trn<=260;trn+=2)
		{
			delay(50);
			cleardevice();
			int new_x1 = x1 + trn;
			int new_y1 = y1;
			int new_x2 = x2 + trn;
			int new_y2 = y2;
			int new_x3 = x3 + trn;
			int new_y3 = y3;
			int new_x4 = x4 + trn;
			int new_y4 = y4;
			int new_x5 = x5 + trn;
			int new_y5 = y5;
			int new_x6 = x6 + trn;
			int new_y6 = y6;
			int new_x7 = x7 + trn;
			int new_y7 = y7;
			int new_x8 = x8 +trn;
			int new_y8 = y8;
			
			//back square
			line(new_x1,new_y1,new_x2,new_y2);
			line(new_x2,new_y2,new_x3,new_y3);
			line(new_x3,new_y3,new_x4,new_y4);
			line(new_x1,new_y1,new_x4,new_y4);
			//front square
			line(new_x5,new_y5,new_x6,new_y6);
			line(new_x6,new_y6,new_x7,new_y7);
			line(new_x7,new_y7,new_x8,new_y8);
			line(new_x5,new_y5,new_x8,new_y8);
			//connecting lines
			line(new_x1,new_y1,new_x5,new_y5);
			line(new_x2,new_y2,new_x6,new_y6);
			line(new_x3,new_y3,new_x7,new_y7);
			line(new_x4,new_y4,new_x8,new_y8);
		}
	}
}
void scaling(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int x5,int y5,int x6,int y6,int x7,int y7,int x8,int y8)
{
	while(!kbhit())
	{
		
		float scf;
		for(scf=1;scf>=0.0125;scf-=0.0125)
		{
			delay(25);
			cleardevice();
			float new_x1 = ((x1-275) * scf) + 275;
			float new_y1 = ((y1-275) * scf) + 275;
			float new_x2 = ((x2-275) * scf) + 275;
			float new_y2 = ((y2-275) * scf) + 275;
			float new_x3 = ((x3-275) * scf) + 275;
			float new_y3 = ((y3-275) * scf) + 275;
			float new_x4 = ((x4-275) * scf) + 275;
			float new_y4 = ((y4-275) * scf) + 275;
			float new_x5 = ((x5-275) * scf) + 275;
			float new_y5 = ((y5-275) * scf) + 275;
			float new_x6 = ((x6-275) * scf) + 275;
			float new_y6 = ((y6-275) * scf) + 275;
			float new_x7 = ((x7-275) * scf) + 275;
			float new_y7 = ((y7-275) * scf) + 275;
			float new_x8 = ((x8-275) * scf) + 275;
			float new_y8 = ((y8-275) * scf) + 275;
			//back square
			line(new_x1,new_y1,new_x2,new_y2);
			line(new_x2,new_y2,new_x3,new_y3);
			line(new_x3,new_y3,new_x4,new_y4);
			line(new_x1,new_y1,new_x4,new_y4);
			//front square
			line(new_x5,new_y5,new_x6,new_y6);
			line(new_x6,new_y6,new_x7,new_y7);
			line(new_x7,new_y7,new_x8,new_y8);
			line(new_x5,new_y5,new_x8,new_y8);
			//connecting lines
			line(new_x1,new_y1,new_x5,new_y5);
			line(new_x2,new_y2,new_x6,new_y6);
			line(new_x3,new_y3,new_x7,new_y7);
			line(new_x4,new_y4,new_x8,new_y8);
		}
	}
}
void rotationX(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int x5,int y5,int x6,int y6,int x7,int y7,int x8,int y8)
{
	while(!kbhit())
	{
		delay(100);
		cleardevice();
		float angle;
		angle += 0.0872664626;
		float new_x1 = x1;
		float new_y1 = ((y1-275) * cos(angle)) + 275;
		float new_x2 = x2;
		float new_y2 = ((y2-275) * cos(angle)) + 275;
		float new_x3 = x3;
		float new_y3 = ((y3-275) * cos(angle)) + 275;
		float new_x4 = x4;
		float new_y4 = ((y4-275) * cos(angle)) + 275;
		float new_x5 = x5;
		float new_y5 = ((y5-275) * cos(angle)) + 275;
		float new_x6 = x6;
		float new_y6 = ((y6-275) * cos(angle)) + 275;
		float new_x7 = x7;
		float new_y7 = ((y7-275) * cos(angle)) + 275;
		float new_x8 = x8;
		float new_y8 = ((y8-275) * cos(angle)) + 275;
		//back square
		line(new_x1,new_y1,new_x2,new_y2);
		line(new_x2,new_y2,new_x3,new_y3);
		line(new_x3,new_y3,new_x4,new_y4);
		line(new_x1,new_y1,new_x4,new_y4);
		//front square
		line(new_x5,new_y5,new_x6,new_y6);
		line(new_x6,new_y6,new_x7,new_y7);
		line(new_x7,new_y7,new_x8,new_y8);
		line(new_x5,new_y5,new_x8,new_y8);
		//connecting lines
		line(new_x1,new_y1,new_x5,new_y5);
		line(new_x2,new_y2,new_x6,new_y6);
		line(new_x3,new_y3,new_x7,new_y7);
		line(new_x4,new_y4,new_x8,new_y8);
	}
}
void rotationY(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int x5,int y5,int x6,int y6,int x7,int y7,int x8,int y8)
{
	while(!kbhit())
	{
		delay(100);
		cleardevice();
		float angle;
		angle += 0.0872664626;
		float new_x1 = ((x1-275) * cos(angle)) + 275;
		float new_y1 = y1;
		float new_x2 = ((x2-275) * cos(angle)) + 275;
		float new_y2 = y2;
		float new_x3 = ((x3-275) * cos(angle)) + 275;
		float new_y3 = y3;
		float new_x4 = ((x4-275) * cos(angle)) + 275;
		float new_y4 = y4;
		float new_x5 = ((x5-275) * cos(angle)) + 275;
		float new_y5 = y5;
		float new_x6 = ((x6-275) * cos(angle)) + 275;
		float new_y6 = y6;
		float new_x7 = ((x7-275) * cos(angle)) + 275;
		float new_y7 = y7;
		float new_x8 = ((x8-275) * cos(angle)) + 275;
		float new_y8 = y8;
		//back square
		line(new_x1,new_y1,new_x2,new_y2);
		line(new_x2,new_y2,new_x3,new_y3);
		line(new_x3,new_y3,new_x4,new_y4);
		line(new_x1,new_y1,new_x4,new_y4);
		//front square
		line(new_x5,new_y5,new_x6,new_y6);
		line(new_x6,new_y6,new_x7,new_y7);
		line(new_x7,new_y7,new_x8,new_y8);
		line(new_x5,new_y5,new_x8,new_y8);
		//connecting lines
		line(new_x1,new_y1,new_x5,new_y5);
		line(new_x2,new_y2,new_x6,new_y6);
		line(new_x3,new_y3,new_x7,new_y7);
		line(new_x4,new_y4,new_x8,new_y8);
	}
}
void rotationZ(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int x5,int y5,int x6,int y6,int x7,int y7,int x8,int y8)
{
	while(!kbhit())
	{
		delay(100);
		cleardevice();
		float angle;
		angle += 0.0277777778;
		float new_x1 = ((x1-275) * cos(angle)) - ((y1-275) * sin(angle)) + 275;
		float new_y1 = ((x1-275) * sin(angle)) + ((y1-275) * cos(angle)) + 275;
		float new_x2 = ((x2-275) * cos(angle)) - ((y2-275) * sin(angle)) + 275;
		float new_y2 = ((x2-275) * sin(angle)) + ((y2-275) * cos(angle)) + 275;
		float new_x3 = ((x3-275) * cos(angle)) - ((y3-275) * sin(angle)) + 275;
		float new_y3 = ((x3-275) * sin(angle)) + ((y3-275) * cos(angle)) + 275;
		float new_x4 = ((x4-275) * cos(angle)) - ((y4-275) * sin(angle)) + 275;
		float new_y4 = ((x4-275) * sin(angle)) + ((y4-275) * cos(angle)) + 275;
		float new_x5 = ((x5-275) * cos(angle)) - ((y5-275) * sin(angle)) + 275;
		float new_y5 = ((x5-275) * sin(angle)) + ((y5-275) * cos(angle)) + 275;
		float new_x6 = ((x6-275) * cos(angle)) - ((y6-275) * sin(angle)) + 275;
		float new_y6 = ((x6-275) * sin(angle)) + ((y6-275) * cos(angle)) + 275;
		float new_x7 = ((x7-275) * cos(angle)) - ((y7-275) * sin(angle)) + 275;
		float new_y7 = ((x7-275) * sin(angle)) + ((y7-275) * cos(angle)) + 275;
		float new_x8 = ((x8-275) * cos(angle)) - ((y8-275) * sin(angle)) + 275;
		float new_y8 = ((x8-275) * sin(angle)) + ((y8-275) * cos(angle)) + 275;
		//back square
		line(new_x1,new_y1,new_x2,new_y2);
		line(new_x2,new_y2,new_x3,new_y3);
		line(new_x3,new_y3,new_x4,new_y4);
		line(new_x1,new_y1,new_x4,new_y4);
		//front square
		line(new_x5,new_y5,new_x6,new_y6);
		line(new_x6,new_y6,new_x7,new_y7);
		line(new_x7,new_y7,new_x8,new_y8);
		line(new_x5,new_y5,new_x8,new_y8);
		//connecting lines
		line(new_x1,new_y1,new_x5,new_y5);
		line(new_x2,new_y2,new_x6,new_y6);
		line(new_x3,new_y3,new_x7,new_y7);
		line(new_x4,new_y4,new_x8,new_y8);
	}
}
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	float x1=200,y1=200,x2=300,y2=200,x3=300,y3=300,x4=200,y4=300,x5=250,y5=250,x6=350,y6=250,x7=350,y7=350,x8=250,y8=350;
	//back square
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x4,y4);
	line(x1,y1,x4,y4);
	//front square
	line(x5,y5,x6,y6);
	line(x6,y6,x7,y7);
	line(x7,y7,x8,y8);
	line(x5,y5,x8,y8);
	//connecting lines
	line(x1,y1,x5,y5);
	line(x2,y2,x6,y6);
	line(x3,y3,x7,y7);
	line(x4,y4,x8,y8);
	int choice;
	
	printf("1: Rotation about X axis\n2: Rotation about Y axis\n3: Rotation about Z axis\n4: Scaling about own centre\n5: Translation on X coordinate by 1 point\n");
	choice:
	printf("Enter accordingly:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			rotationX(x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8);
		case 2:
			rotationY(x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8);
		case 3:
			rotationZ(x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8);
		case 4:
			scaling(x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8);
		case 5:
			translation(x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8);
		default:
			printf("Invalid Choice\n");
			goto choice;
	}
	getch();
	closegraph();
}
