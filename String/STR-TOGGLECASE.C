#include <stdio.h>
main()
{
    char name[50];
    printf("Enter your Name: ");
    scanf("%[^\n]", &name);
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] += 32;   
        }
        else if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] -= 32;   
        }
    }

    printf("Toggle case :- Name is: %s", name);
}