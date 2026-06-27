#include<stdio.h>
main()
{
    int size,i;
    printf("Enter array size :");
    scanf("%d",&size);

    int a[size],b[size],sum[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter First array elements :");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++)
    {
        printf("Enter Second array elements :");
        scanf("%d",&b[i]);
    }
    for(int i=0;i<size;i++)
    {
        sum[i]=a[i]+b[i];
    }
    for(int i=0;i<size;i++)
    {
        printf("%d\t",sum[i]);
    }
}