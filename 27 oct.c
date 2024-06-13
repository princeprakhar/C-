#include<stdio.h>
int main()
{
    int a=5;
    int b=a++;
    printf("%d%d\n",a,b);
    a>b?printf("a is greater"):printf("b is greater");
    return 0;
}
