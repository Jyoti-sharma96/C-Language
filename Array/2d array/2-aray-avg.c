#include<stdio.h>
main()
{
    int rowsize,columnsize,sum;
    printf("Enter row size of array :");
    scanf("%d",&rowsize);
    printf("Enter column size of array :");
    scanf("%d",&columnsize);

    int a[rowsize][columnsize];
    sum=0;
    printf("Enter array elements :\n");
    for(int i=0;i<rowsize;i++)
     for(int j=0;j<columnsize;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
    printf("Average of array elements :%d", sum/(rowsize*columnsize));
}