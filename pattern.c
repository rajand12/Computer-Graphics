//Patterns
#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<10;i++)
		printf("*");
	printf("\n");
	printf("\n");
	printf("\n");
	for(i=0;i<10;i++)
		printf("*\n");
	printf("\n");
	printf("\n");
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("*\n");
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
			
	}
	printf("\n");
	printf("\n");
	printf("\n");
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j>=i)
			{
				printf("*");
			}
			if(i>j)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("\n");
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("*"); 
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("\n");
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(i==1 || i==4 || j==1 || j==9)
			{
				printf("*");
			}
		else
		{
			printf(" ");
		}	
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("\n");
	
		
}
