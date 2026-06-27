#include<stdio.h>

main()
{
    //datatype array_name[size];
    int size;
    printf("Enter array size :");
    scanf("%d",&size);

    int a[size];

    for(int i=0;i<size;i++)
    {
        printf("Enter array elements :");
        scanf("%d",&a[i]);
    }
    printf("Length of an Array : %d", size);
}