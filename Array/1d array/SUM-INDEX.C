#include<stdio.h>
main()
{
    int size,sum,x;
    printf("Enter the size of the array  :");
    scanf("%d",&size);

    int a[size];
    printf("Enter array elements :\n");
    for(int i=0;i<size;i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter any sum of values entered  : ");
    scanf("%d",&sum);
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            x=a[i]+a[j];
            if(x==sum)
            {
                printf("%d and %d are the index Numbers.\n",i,j);
            }
        }
    }
    if(x!=sum)
    {
        printf("No such index numbers found.\n");
    }
}