#include<stdio.h>
#include<string.h>
main()
{
    char name[20];
    char surname[20];
    char copy[20];
    
    printf("Enter your name: ");
    gets(name);
    printf("Enter your surname: ");
    gets(surname);  

    strcat(name, " ");
    strcat(name, surname);
    printf("Full name: %s", name);

    strcpy(copy,name); // copies the full name to the copy string
    printf("\nCopied string: %s", copy); // displays the copied string

    
    
    int cmp=strcmp(name,surname); // compares the full name with the surname
    
    //name=aman
    //surname= sharma

    //65-97=-32=-1
    //97-65=32=1
    
    
    if(cmp==0)
    {
        printf("\nBoth strings are equal..%d",cmp);
    }
    else
    {
        printf("\nBoth strings are not equal..%d",cmp);
    }

}
