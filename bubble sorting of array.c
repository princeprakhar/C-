#include<stdio.h>
int main()
{
    int i,s,j,a[20],temp;
    printf("enter the size of array\n");
    scanf("%d",&s);
    printf("enter the   array:\n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<s-1;i++)
    {
        for(j=0;j<s-1-i;j++)
        {
             if(a[j]>a[j+1])
             {
               temp=a[j] ;
               a[j]=a[j+1];
               a[j+1]=temp;
             }
        }

    }
    printf("the sorted array is :\n");
    for(i=0;i<s;i++)
    {
        printf("%d\n",a[i]);

    }
    getch();


}
