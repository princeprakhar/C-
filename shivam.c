#include<stdio.h>
main() 
{
int a,b;
printf("Enter of two number: \n");
scanf("%d%d",&a,&b);
a=a*b;
b=a/b;
a=a/b;
printf("Swap of the number is: %d   %d",a,b);
return;
}
