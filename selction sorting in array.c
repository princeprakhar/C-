#include<stdio.h>
int main()
{
    int i,j,a[20],n,temp,index;
    printf("enter the size of array :\n");
    scanf("%d",&n);
    printf("enter the %d element of the array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min;
    for (i=0;i<n;i++)
    {
        min=a[i];
        for (j=i;j<n;j++)
        {
          if (min>=a[j])
          {
            min=a[j];
            index=j;
          }
        }
        temp=a[i];
        a[i]=a[index];
        a[index]=temp;
    }
    printf("sorted array of element %d is :\n",n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);

    }

    getch();
    return 0;
}
