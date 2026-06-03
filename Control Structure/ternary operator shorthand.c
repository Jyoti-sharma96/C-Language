#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n Enter the value for the first Number :");
	scanf("%d",&a);
	printf("\n Enter the value for the Second Number :");
	scanf("%d",&b);
	printf("\n Enter the value for the Third Number :");
	scanf("%d",&c);
	
	(a<b)?
		(a<c)?printf("\n %d is Minimum.",a)	
		:printf("\n %d is Minimum.",c)
	:
		(b<c)?printf("\n %d is Minimum.",b)	
		:printf("\n %d is Minimum.",c);
}
