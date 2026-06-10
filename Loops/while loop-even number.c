#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int i=1,n;
	p("Enter any value = ");
	s("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			p("%d\n\n",i);
		}
		i++;
	}
}
