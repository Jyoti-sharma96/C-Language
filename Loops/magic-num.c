#include <stdio.h>
main() 
{
	int n, rem, sum, mul;
    printf("Enter your Number: ");
    scanf("%d", &n);
    sum = 0; 
    mul = 1; 
    while(n != 0) 
	{
        rem = n % 10;
        sum = sum + rem;
        mul = mul * rem;
        n = n / 10;
    }
    (sum == mul) 
	? printf("Your given Number is a Magic Number\n")
	: printf("Your given Number is not a Magic Number\n");               
}