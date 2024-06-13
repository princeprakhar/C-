/**Rules of switch statement

1. not allowed to add duplicate case

2. only those expressions are allowed in switch, whose results constant value

3. float and string type is not allowed

4.variable expressions are not allowed in case labels,although macros are allowed*/


#include <stdio.h>

int main()

{

  char grade='B'; //variable declaration

  switch(grade)

  {

     case 'A':printf("Excellent\n");

         break;

     case 'B':printf("Good\n");

         break;

     case 'C':printf("requires improvement\n");

         break;

    case 'D': printf("Just passed\n");

         break;

     default:printf("Invalid input\n");





   }

   return 0;



}
