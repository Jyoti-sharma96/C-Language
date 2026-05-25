#include<stdio.h>
main()
{
	int x=10, y=20;
	int z;
	z=x ;
    x=y ; 
    y=z ; 
	printf("swapped value of x is :%d\n",x);
	printf("swapped value of y is :%d",y);		
}
