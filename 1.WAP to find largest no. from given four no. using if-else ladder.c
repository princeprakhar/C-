#include <stdio.h>

int main()
{
   int x,y,z;
   printf("enter the numbers\n");
   scanf("%d,%d,%d",&x,&y,&z);
   if(x>y&&x>z)
   {
       printf(" largest number id %d\n",x);
   }
   else if(y>z&&y>x)
   {
       printf(" largest number is %d \n",y);
   }
   else
   {
       printf("largest number is %d\n",z);
   }
    return 0;
}

