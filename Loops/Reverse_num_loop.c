#include<stdio.h>
main()
{
	int n,rem,rev;
	
	printf("Enter your Number :");
	scanf("%d",&n);
	while(n!=0)
	{
		rem= n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("Reverse of your given Number is :%d",rev);
}