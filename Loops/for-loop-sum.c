#include<stdio.h>
main()
{
	int n,a,sum;
	printf("Enter your Number :");
	scanf("%d",&n);
	sum=0;
	for(a=1;a<=n;a++)
		sum=sum+a;
		
	printf("Sum of all Numbers :%d",sum);
}