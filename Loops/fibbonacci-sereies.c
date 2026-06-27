#include<stdio.h>
main()
{
	int i,n,a=0,b=1,c;
	printf("Enter your Number :");
	scanf("%d",&n);
	printf("%d\t%d\t",a,b);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}	
}