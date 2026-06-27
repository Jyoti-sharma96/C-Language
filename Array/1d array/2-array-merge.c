#include<stdio.h>
main()
{
    int size1,size2;
    printf("Enter first array size :");
    scanf("%d",&size1);

    printf("Enter second array size :");
    scanf("%d",&size2);

    int a[size1],b[size2],merge[size1+size2];
    for(int i=0;i<size1;i++)
    {
        printf("Enter First array elements :");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size2;i++)
    {
        printf("Enter Second array elements :");
        scanf("%d",&b[i]);
    }
    for(int i=0;i<size1;i++)
        merge[i]=a[i];

    for(int i=0;i<size2;i++)
        merge[size1+i]=b[i];
        
    printf("Merged array elements are :\n");
    for(int i=0;i<size1+size2;i++)
        printf("%d\t",merge[i]);
}