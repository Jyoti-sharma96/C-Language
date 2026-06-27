#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++) 
		{
			p("%d",j);
		}
		p("\n");
	}
}
