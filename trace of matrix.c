#include<stdio.h>
int main()
{
    int i,j,a[20][20],x,r,c,trace;
    printf("enter the row\n");
    scanf("%d",&r);
    printf("enter the column\n");
    scanf("%d",&c);
    printf("enter the matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
         if(i!=j)
         {


         }
         else
         {
             trace+=a[i][j];
         }

        }

    }
    printf("TRACE OF MATRIX IS : %d",trace);
}
