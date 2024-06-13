/*switch statement
/Rules of switch statement

1. not allowed to add duplicate case

2. only those expressions are allowed in switch, whose results constant value

3. float and string type is not allowed

4.variable expressions are not allowed in case labels,although macros are allowed*/

#include <stdio.h>

int main()
{
   int a=2,b=4,c=2;
   switch(a+b*c)
   {
       case 1:printf("x is equal to 1");
       break;
       case 2:printf("x is equal to 12");
       break;



       case 5+5:printf("x is equal to 10");
       break;
     default:printf("x is no other then 1,12,19");
     break ;

   }
   printf("\nexample of switch statement");
    return 0;
}

