#include <stdio.h>
#include<string.h>
main()
{
   char str[20];
   printf("Enter a string: "); 
   gets(str); // gets user input for string

   puts(str); // displays the string

   printf("Length of the string: %d", strlen(str)); // displays the length of the string
   
   strupr(str); // converts the string to uppercase
   printf("\nString in uppercase: %s", str); // displays the string in uppercase

    strlwr(str); // converts the string to lowercase
    printf("\nString in lowercase: %s", str); // displays the string in lowercase

    strrev(str); // reverses the string
    printf("\nReversed string: %s", str); // displays the reversed string


}
