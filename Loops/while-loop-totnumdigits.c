#include<stdio.h>
main()                    
{
    int n,rem,a=0;           
    printf("Enter your Number :");
    scanf("%d", &n);                   
    while (n > 0)             
    {
        rem=n%10;         
        a++;               
        n = n/10;            
    }
    printf("Total Number of digits :%d\t",a); 
}