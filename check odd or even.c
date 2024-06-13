#include<stdio.h>
int main()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    a=(a/2==0)?printf("number is even"):printf("number is odd");
    return 0;
}
