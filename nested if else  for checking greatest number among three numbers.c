/*WAP to find largest no.among three numbers, given by user.*/



#include <stdio.h>
int main()
{
     int num1,num2,num3;
     printf("enter three number\n");
     scanf("%d%d%d",&num1,&num2,&num3);
     if(num1>num2)
     {
         if(num1>num3)
         {
          printf("%d is greatest no among three",num1);
         }
         else
         {
         printf("%d is greater no among three ",num3);
         }
     }
     else(num2>num3);
     {
         if(num2>num3)
         {
          printf("%d is greatest no among three",num2);
         }
         else
         {
         printf("%d is greatest no among three",num3);
         }
     }
     return 0;
}

