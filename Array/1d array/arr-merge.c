#include<stdio.h>
main()
{
    int size1,size2,size3;
    printf("Enter first array size :");//getting size input from user
    scanf("%d",&size1);

    printf("Enter second array size :");
    scanf("%d",&size2);

    printf("Enter Third array size :");
    scanf("%d",&size3);

    int a[size1],b[size2],c[size3],merge[size1+size2+size3]; //declaring arrays

    for(int i=0;i<size1;i++) //getting array elements from user
    {
        printf("Enter First array elements :");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size2;i++)
    {
        printf("Enter Second array elements :");
        scanf("%d",&b[i]);
    }
    for(int i=0;i<size3;i++)
    {
        printf("Enter Third array elements :");
        scanf("%d",&c[i]);
    }
    for(int i=0;i<size1;i++)//merging arrays
        merge[i]=a[i];

    for(int i=0;i<size2;i++)
        merge[size1+i]=b[i];

    for(int i=0;i<size3;i++)
        merge[size1+size2+i]=c[i];

    printf("Merged array elements are :\n");
    for(int i=0;i<size1+size2+size3;i++)
        printf("%d\t",merge[i]);
}