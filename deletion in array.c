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
    printf("Enter the location where you wish to delete element\n");
   scanf("%d", &pos);

   if (pos >= d+1)
      printf("Deletion of any element is not possible.\n");
   else
   {
      for (i = pos ; i < d -1; i++)
         a[i] = a[i+1];

      printf("Resultant array:\n");

      for (i = 0; i < d - 1; i++)
         printf("%d\n", a[i]);
   }

   return 0;
}
