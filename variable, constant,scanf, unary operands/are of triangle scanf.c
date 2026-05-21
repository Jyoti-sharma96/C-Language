#include<stdio.h>
#define p printf
#define s scanf
main()

{
	float base,height;
	p("Enter the value for base of the triangle :");
	s("%f",&base);
	p("Enter the value for height of the triangle :");
	s("%f",&height);
	float area=0.5*base*height;
	p("Area of the triangle is : %.2f",area);
	
}
