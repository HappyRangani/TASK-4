#include<stdio.h>

main()
{
	int x,y,result;
	
	printf("enter your value x =");
	scanf("%d",&x);
	
	printf("enter your value y =");
	scanf("%d",&y);
	
	result = x*x+2*x*y+y*y;
	printf("Result =%d",result);
	
}