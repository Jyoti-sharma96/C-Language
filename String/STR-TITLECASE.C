#include <stdio.h>
main()
{
    char name[50];
    printf("Enter your Name: ");
    scanf("%[^\n]",&name);
    for (int i = 0; i < 1; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] -= 32;  
        }
    }

    printf("Your Name in Title Case is: %s", name);
}