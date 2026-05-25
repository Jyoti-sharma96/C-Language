#include<stdio.h>
main()
{
	int x=10, y=20;
    x=x+y ;
    y=x-y; 
    x=x-y; 
    printf("swapping the value using adding and subtraction \n");
	printf("value of x is :%d\n",x);
	printf("value of y is :%d\n\n\n",y);
	
	int a=10, b=20;
    a=a*b;
    b=a/b; 
    a=a/b; 
    printf("swapping the value using multiplication and division \n");
	printf("value of x is :%d\n",x);
	printf("value of y is :%d",y);		
}
