#include<stdio.h>
int main()
{
    int x;
    printf("enter the number \n");
    scanf("%d",&x);
    if(x%2==0)
        goto even;
    else
        goto odd;
    even:printf("number is even number");
    odd:printf("number is odd");
}
