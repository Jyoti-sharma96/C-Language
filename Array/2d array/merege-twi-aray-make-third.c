#include<stdio.h>
main()
{
    int rowsize,columnsize;
    printf("Enter row size of array :");
    scanf("%d",&rowsize);
    printf("Enter column size of array :");
    scanf("%d",&columnsize);


    int a[rowsize][columnsize],b[rowsize][columnsize],sum[rowsize][columnsize];

    printf("Enter First-array elements :\n");
    for(int i=0;i<rowsize;i++)
     for(int j=0;j<columnsize;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    printf("Enter Second-array elements :\n");
    for(int i=0;i<rowsize;i++)
     for(int j=0;j<columnsize;j++)
        {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    for(int i=0;i<rowsize;i++)
     for(int j=0;j<columnsize;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
        printf("Third Array is :\n");
    for(int i=0;i<rowsize;i++)
    {
        for(int j=0;j<columnsize;j++)
     {
        printf("%d\t", sum[i][j]);
     }
    printf("\n");
    }
}