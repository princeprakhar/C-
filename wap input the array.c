#include<stdio.h>
int main()
{
    int i,j,a[20][20],b[20][20],r,c,C[20][20];
    printf("enter the row\n");
    scanf("%d",&r);
    printf("enter the column\n");
    scanf("%d",&c);
    printf("enter the element of matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d %d",&a[i][j],&b[i][j]);
            C[i][j]=a[i][j]+b[i][j];

        }

    }
    printf("the sum of these two matrix is :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("[  %d   ]",C[i][j]);
        }
        printf("\n");

    }

    return 0;
}
