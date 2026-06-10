#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int i = 1;
	int n;
	p("Enter any value :- ");
	s("%d",&n);
	int fact=1;
	
	while(i<=n)
	{
	   fact=fact*i;
	   p("%d  *  ",i);
	   i++;
	}
	p("\n\n");
	p("Factorial :- %d",fact);
	
}
