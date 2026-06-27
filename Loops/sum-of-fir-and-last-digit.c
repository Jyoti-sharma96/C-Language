#include <stdio.h>
main()                     
{
    int n,rem, sum = 0 ,a = 1;           
    printf("Enter any Number: ");
    scanf("%d", &n);                   
    while (n > 0)             
    {
        rem=n%10;
        if (a==1)
		{
            sum=sum+rem;
        }
        else if (n<10)
		{
            sum =sum+rem;
        }
        n = n / 10; 
        a++;        
    }
    	printf("Sum of first and last digit is: %d", sum);
}