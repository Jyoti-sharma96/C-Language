#include<stdio.h>
main()
{
	int a;
	printf("Enter your number :");
	scanf("%d",&a);
	
	if(a>0)	
	{
		printf("\nYour given number is POSITIVE.");
	}
	else if(a<0)
	{
		printf("\nYour given number is NEGATIVE.");
	}
	else 
	{
		printf("\nYour given number is NEUTRAL.");
	}
}
	
