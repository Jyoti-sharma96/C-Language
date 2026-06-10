#include<stdio.h>
#define p printf
#define s scanf

main()
{
	int n;
	p("Enter the number :");
	s("%d",&n);
	int i=1;
	int sum=0;
	while(i<=n)
	{
		sum=sum+i;
		p("%d \t",i);
   	    i++; 
	}
	p("\n\nSum of shown numbers:- %d",sum);
}
