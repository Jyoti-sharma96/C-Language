#include <stdio.h>

main()
{
	int i;
	
	for(i=1; i<=7; i++)
	{
		if(i==1||i==3)
			printf("* * * * *\n");
		else if(i==2)
			printf("*       *\n");
		else
            printf("*\n");
	}
}

