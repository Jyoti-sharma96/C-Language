#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int i ,j;
	for (i=5;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			p("%d",j);
		}
		p("\n");
	}
}
