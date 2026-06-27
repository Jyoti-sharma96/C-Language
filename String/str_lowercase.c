#include<stdio.h>
main()
{
    char name[50];
    printf("Enter your Name :");
    scanf("%[^\n]",&name);

    for (int i = 0; name[i]!=0 ; i++)
    {
        if(name[i]>='A' && name[i]<='Z')
       {
         name[i]+=32;
       }
    }
    printf("Lowercase of your Name is :%s",name);
}