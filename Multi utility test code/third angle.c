#include<stdio.h>
main()
{
	float a,b;
	const int ta=180;
	printf("Enter the value of First angle :");
	scanf("%f",&a);
	printf("Enter the value of Second angle :");
	scanf("%f",&b);
	printf("Third angle:%.2f",ta-(a+b));
	
}
