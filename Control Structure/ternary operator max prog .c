#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("\n Enter the value of first Number :");
	scanf("%d",&a);
	printf("\n Enter the value of Second Number :");
	scanf("%d",&b);
	printf("\n Enter the value of Third Number :");
	scanf("%d",&c);
	printf("\n Enter the value of Fourth Number :");
	scanf("%d",&d);
	(a>b)?
		(a>c)?
			(a>d)
			?printf("\n %d is Maximum.",a)
			:printf("\n %d is Maximum.",d)
		: 
			(c>d)
			?printf("\n %d is Maximum.",c)
			:printf("\n %d is Maximum.",d)
	:
		(b>c)?
			(b>d)
			?printf("\n %d is Maximum.",b)
			:printf("\n %d is Maximum.",d)
		: 
			(c>d)
			?printf("\n %d is Maximum.",c)
			:printf("\n %d is Maximum.",d);
			
}
