#include<stdio.h>

#define p printf
#define pi 3.14

main()

{
float r;
	p("Enter the value of Radius :");
	scanf("%f",&r);
	float ans = pi *r *r;
	p("Area of circle = %.2f",ans);
	
}
