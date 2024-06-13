#include<stdio.h>
int main()
{
int a =10, b =10, c=30, d=0;
printf("%d || %d = %d\n",a==b,a>c,a==b || a>c);
printf("!(%d || %d) = %d\n",a==b,a>c,!(a==b || a>c));
printf("!a =%d\n",!a);
printf("!d = %d\n",!d);
return 0;
}

