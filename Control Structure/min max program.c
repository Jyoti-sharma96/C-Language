#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the value for the First number :");
	scanf("%d",&a);
	printf("Enter the value for the Second Number :");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("\n\n %d is maximum and %d is minimum.",a,b);
	}
	else if(b>a)
	{
		printf("\n\n %d is maximum and %d is minimum.",b,a);
	}
	else
	{
		printf("Both the given numbers are equal");
	}
}
	
