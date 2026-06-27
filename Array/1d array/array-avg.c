#include<stdio.h>
main()
{
    int size,sum;
    printf("Enter array size :");
    scanf("%d",&size);

    int a[size];
    sum=0;
    for(int i=0;i<size;i++)
    {
        printf("Enter array elements :");
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Average of array elements :%d", sum/size);
}