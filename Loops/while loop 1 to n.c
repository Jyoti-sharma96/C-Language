#include<stdio.h>
#define p printf
#define s scanf

main()
{
	int n;
	p("Enter the number :");
	s("%d",&n);
	int i=1;
	while(i<=n)
	{
		p("%d \n",i);
   	    i++; 
	}
}
