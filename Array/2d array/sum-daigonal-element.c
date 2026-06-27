#include<stdio.h>
main()
{
    int row,col,sum;
    printf("Enter number of rows :");
    scanf("%d",&row);
    printf("Enter number of columns :");
    scanf("%d",&col);

    int a[row][col];
    sum=0;
    printf("Enter array elements :\n");
    for(int i=0;i<row;i++)
    {
     for(int j=0;j<col;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                printf("%d ",a[i][j]);
                sum=sum+a[i][j];
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("Sum of Diagonal elements:%d", sum);
}