#include<stdio.h>

main()
{
	int x,y,result;
	
	printf("enter your value x =");
	scanf("%d",&x);
	
	printf("enter your value y =");
	scanf("%d",&y);
	
	result =x*x*x+3*x*x*y+3*y*y*x+y*y*y;
	printf("Result =%d",result);
}
