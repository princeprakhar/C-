#include <stdio.h>



int main()

{

  int a,b,c;

  printf("Enter value of a,b and c\n");

  scanf("%d%d%d",&a,&b,&c);

  if(a>b && a>c) //a=5, b=7 //0 && 0

  {

     printf("Largest no is %d",a);

  }

  else if(b>a && b>c) // 7>5 && 7>6

  {

     printf("Largest no is %d",b);

  }

  else

  {

     printf("largest no is %d\n",c);

  }

  printf("Hello class");

  return 0;

}
