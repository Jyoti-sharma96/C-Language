#include<stdio.h>
main()
{
	int n,a,mul;
	printf("Enter your Number :");
	scanf("%d",&n);
	mul=1;
	for(a=1;a<=n;a++)
		mul=mul*a;
		
	printf("Factorial of yor given Number :%d",mul);
}