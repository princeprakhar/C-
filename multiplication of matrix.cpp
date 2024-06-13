#include <stdio.h>
int main()
{
int r,c,a[10][10],b[10][10],product[10][10],k,i,j;
printf("Enter the number of rows\n");
scanf("%d",&r);
printf("Enter the number of columns\n");
scanf("%d",&c);
printf("\nEnter elements of 1st matrix:\n");
for (i=0;i<r;i++)
for (j=0;j<c;j++)
{
printf("Enter element a[i]of matrix ");
scanf("%d",&a[i][j]);
}
printf("Enter elements of 2nd matrix:\n");
for (i=0;i<r;i++)
for (j=0;j<c;j++)
{
printf("Enter element ");
scanf("%d", &b[i][j]);
}
for (i=0;i<r;i++)
for (j=0;j<c;j++)
{
product[i][j]=0;    
for(k=0;k<c;k++)
product[i][j]+= a[i][k]*b[k][i];
}
printf("\nproduct of two matrices: \n");
for (i=0;i<r;i++)
for (j=0;j<c;j++) 
{
printf("%d  ", product[i][j]);
if (j==c-1)
{
printf("\n\n");
}
}
}
