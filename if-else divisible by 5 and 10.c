/*wap to no divisible by 5 and 10 or not*/

#include <stdio.h>

int main()
{
    int a;
    printf("enter the no.\n");
    scanf("%d",&a);
    if(a%5==0&&a%10==0)
    {
        printf("no is divisible by 5 and 10");
    }
    else
    {
     printf("no is not divisible by 5 and 10");
    }

    return 0;
}

