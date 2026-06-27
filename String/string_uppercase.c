#include<stdio.h>
main()
{
    char name[50];
    printf("Enter your Name :");
    scanf("%[^\n]",&name);
    for (int i = 0; name[i]!=0 ; i++)
    {
        if(name[i]>='a' && name[i]<='z')
       {
         name[i]-=32;
       }
    }
    printf("\n Your name in UPPERCASE is  :%s",name);
}