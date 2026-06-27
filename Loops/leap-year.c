#include<stdio.h>
main()
{
	int x,y;
	printf("Enter your First year:");
	scanf("%d",&x);
	printf("Enter your Second year:");
	scanf("%d",&y);
	
	while(y>=x)
	{
		if(x%4 == 0 && x<=y)
		{
			printf("The leap years in between given number of years are :- %d\t",x);
		}
		x++;
	}
}