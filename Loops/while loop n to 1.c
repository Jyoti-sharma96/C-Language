#include<stdio.h>
#define p printf
#define s scanf

main()
{
	int n;
	p("Enter the number :");
	s("%d",&n);
	int i=1;
	while(n>=1)
	{
		p("%d \t",n);
   	    n--; 
	}
}
