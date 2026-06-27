#include<stdio.h>
main()
{
	int n,a=2;
	printf("Enter your Number :");
	scanf("%d",&n);
	do{
		if(a % 2==0)
		{
		 printf("%d\t",a);	
		}
		a++;
	}while(a<=n);
}