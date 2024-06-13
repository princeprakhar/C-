#include<stdio.h>
int main()
{
    int i,j,a[20][20],b[20][20],C[20][20],r,c;
    printf("enter the row \n");
    scanf("%d",&r);
    printf("enter the columns\n");
    scanf("%d",&c);
    printf("enter the first matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("enter the second matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        C[i][j]=a[i][j]+b[i][j];

        }
    }
    printf("sum of matrix is :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        printf("  %d   ",C[i][j]);
        }
        printf("\n");
    }




}
