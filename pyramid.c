#include<stdio.h>
#include<math.h>
int main()
{
 int i,j,n,f;
 printf("how many rows");
 scanf("%d",&n);
 for(i=1;i<=n;i++){
 	for(j=1;j<=2*n-1;j++){
 		if(j<=n+(i-1)&& j>=n-(i-1))
		{
 			if(i%2==0)
			 {
	 			if(j%2==0)
	 			printf(" ");
				else printf("*");
			 }
			 if(i%2!=0)
			{
	 			if(j%2!=0)
	 			printf(" ");
				else printf("*");
 			}
 		}
		 else	printf(" ");
		 
		
	}
	 printf("\n");
 }	
}
