#include<stdio.h>
main()
{
    int i,size;
    printf("Enter array size :");
    scanf("%d",&size);

    int a[size];

    for(int i=0;i<size;i++)
    {
        printf("Enter array elements :");
        scanf("%d",&a[i]);
    }
    printf("Negative Array elements are :\t");
    for(int i=0;i<size;i++)
    {
        if(a[i]<0)
        {
            printf("%d\t",a[i]);
        }
    }
    if(a[i]>=0)
    {
        printf("No negative elements in the array");
    }
}