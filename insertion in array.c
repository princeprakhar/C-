#include<stdio.h>
int main()
{
    int d;
    printf("enter the array size\n");
    scanf("%d",&d);
    int i,j,a[d],pos;
    printf("enter the element of array\n");
    for(i=0;i<d;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("number you want to insert\n");
    scanf("%d",&j);
    printf("enter the place you want in array\n");
    scanf("%d",&pos);
    d++;
    for (i = d-1; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
     a[pos - 1] = j;
     printf("the final array of new size %d \n",d);

    for (i = 0; i < d; i++)
    {
        printf("%d ", a[i]);
    printf("\n");
    }

    return 0;

}
