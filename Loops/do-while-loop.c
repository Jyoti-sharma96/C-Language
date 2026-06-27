#include<stdio.h>

main()
{
	char x='a';
	
		printf("%c\t",x);
	do{
		if(x++ %4 != 0 )
		{
			continue;		
		}
		else
		{
			printf("%c\t",x);
		}
		
	}while(x<='z');
}