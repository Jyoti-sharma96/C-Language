#include<stdio.h>
#define p printf
main()
{
float x,y;
p("Enter the value of x :");
scanf("%f",&x);
p("Enter the value of y :");
scanf("%f",&y);	
p("Evaluating the formulae :(x+y)^3\n");
float result;
p("value of x is :%.2f and value of y is :%.2f \n\n " ,x,y);
p("Answer of evaluation is : %.2f",result=(x + y) * (x + y)*(x+y));
}
