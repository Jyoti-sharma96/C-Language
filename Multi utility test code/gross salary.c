
#include<stdio.h>
#define p printf
#define s scanf
main()

{
	float bs,h,d,t,gs;
	p("Enter your Base Salary :");
	s("%f",&bs);
	p("Enter your HRA in percentage : ");
	s("%f",&h);
	p("Enter your DA in percentage : ");
    s("%f",&d);
    p("Enter your TA in percentage : ");
    s("%f",&t);
    p("Calculating your Gross Salary\n");
    gs = bs + (bs * h / 100) + (bs * d / 100) + (bs * t / 100);
    p("Your Gross Salary is : %.2f",gs);
}
