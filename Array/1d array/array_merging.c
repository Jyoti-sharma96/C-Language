#include<stdio.h>

main()
{
    int size1,size2;
    printf("Enter the first size");
    scanf("%d",&size1);
    printf("Enter the second size");
    scanf("%d",&size2);
    int a[size1], b[size2], size3[size1 + size2],i;

    printf("Enter the first array elements\n");
    for(i=0; i<size1; i++)
    {
        printf("Enter the %d element of first array: \n",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the second array elements: \n");
    for(i=0; i<size2; i++)
    {
        printf("Enter the %d element of second array \n",i);
        scanf("%d",&b[i]);
    }
    for(i=0; i<size1;i++)
    {
        size3[i]=a[i];
    }
    for (i = 0; i < size2; i++)
    {
       size3[i+size1]=b[i]; /* code */
    }
    printf("merged array is :");

    for(i = 0; i < (size1 + size2); i++)
    {
        printf("%d ", size3[i]);
    }
    printf("\n");

}