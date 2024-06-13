#include<stdio.h>
int main()
{
    int i,j,a[20][20],b[20][20],C[20][20],r,c,I,O=1,Z=0;
    printf("enter the row\n");
    scanf("%d",&r);
    printf("enter the column\n");
    scanf("%d",&c);
    printf("enter the matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i!=j)
            {
                a[i][j]=Z;
                printf("   %d   ",a[i][j]);
            }
            else
            {
                a[i][j]=O;
                printf("   %d   ",a[i][j]);
            }
        }
        printf("\n");
    }
    printf("enter the scalar value that you want to subtract \n");
    scanf("%d",&I);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            C[i][j]=b[i][j]-I*a[i][j];
        }
    }
    printf("the final of matrix is :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("   %d   ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
