#include<stdio.h>
#define p printf
#define s scanf
main()
{
	float pr,r;
	int t;
	p("Enter the principle amount :");
	s("%f",&pr);
	p("Enter the rate of interest :");
	s("%f",&r);
	p("Enter the time period in months:");
	s("%d",&t);
	float SI=(pr*r*t)/100*12;
	p("Interest for %d months is : %.2f",t,SI);
	
}
