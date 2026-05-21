#include<stdio.h>

#define p printf
#define pi 3.14

main()

{
float r;
	p("Enter the value of Radius :");
	scanf("%f",&r);
	float perimeter = 2*pi*r;
	p("Perimiter of the circle is = %.2f",perimeter);
	
}
