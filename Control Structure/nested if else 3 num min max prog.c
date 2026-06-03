#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n Enter the value of first Number :");
	scanf("%d",&a);
	printf("\n Enter the value of Second Number :");
	scanf("%d",&b);
	printf("\n Enter the value of Third Number :");
	scanf("%d",&c);
	
	if(a<b)
	{
		if(a<c)
		{
			printf("\n %d is Minimum.",a);	
		}
		else
		{
			printf("%d is Minimum.",c);
		}
	}
	else
	{
		if(b<c)
		{
			printf("\n %d is Minimum.",b);	
		}
		else
		{
			printf("\n %d is Minimum.",c);
		}
	}
}
