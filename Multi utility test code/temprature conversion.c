#include<stdio.h> 
main()
{
	const float f=32;
	const float a=1.8; //9/5;
	float b;
	
	printf("The temperature in celcius :");
	scanf("%f",&b);
	printf("Converting the temprature from celcius to farenheit \n");
	printf("The Temperature in Fahrenheit :%.2f",(a*b)+f);	
}
