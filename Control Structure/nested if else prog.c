#include<stdio.h>
main()
{
	int x,y,z,j;
	printf("\n Enter the value for the  first Number :");
	scanf("%d",&x);
	printf("\n Enter the value for the Second Number :");
	scanf("%d",&y);
	printf("\n Enter the value for the Third Number :");
	scanf("%d",&z);
	printf("\n Enter the value for the Fourth Number :");
	scanf("%d",&j);
	
	if(x>y)
	{
		if(x>z)
		{
			if(x>j)
			{
				printf("\n %d is Maximum.",x);
			}
			else
			{
				printf("\n %d is Maximum.",j);
			}
		}
		else
		{
			if(z>j)
			{
				printf("\n %d is Maximum.",z);	
			}
			else
			{
				printf("\n %d is Maximum.",j);
			}
		}
		
	}
	else
	{
		if(y>z)
		{
			if(y>j)
			{
				printf("\n %d is Maximum.",y);
			}
			else
			{
				printf("\n %d is Maximum.",j);
			}
		}
		else
		{
			if(z>j)
			{
				printf("\n %d is Maximum.",z);		
			}
			else
			{
				printf("\n %d is Maximum.",j);	
			}
		}
	}
}
