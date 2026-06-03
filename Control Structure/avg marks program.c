#include<stdio.h>
main()
{
	float e,s,m ;
	printf("Enter the Marks of English :");
	scanf("%f",&e);
	printf("Enter the Marks of Science :");
	scanf("%f",&s);
	printf("Enter the Marks of maths :");
	scanf("%f",&m);
	float a = (e+s+m)/3 ;
	printf("\n\n your average marks is :%.2f.\n",a);
	
	
	if(a>=90 && a<=100)
	{
		printf("Your Grade is A1.");
	}
	else if(a>=80 && a<90)
	{
		printf("Your Grade is A2.");	
	}
	else if(a>=70 && a<80)
	{
		printf("Your Grade is B1.");	
	}
	else if(a>=60 && a<70)
	{
		printf("Your Grade is B2");	
	}
	else if(a>=50 && a<60)
	{
		printf("Your Grade is C1");	
	}
	else if(a>=40 && a<50)
	{
		printf("Your Grade is C2");	
	}
	else if(a>=33 && a<40)
	{
		printf("Your Grade is D1");	
	}
	else if(a>=0 && a<33)
	{
		printf(" you have failed your exam.");	
	}
	else 
	{
		printf("Invalid Marks.");
	}
	
}
