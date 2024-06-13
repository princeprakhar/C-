/*wap to check number even or odd*/

#include <stdio.h>

int main()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("\na is even");
    }
    else
    {
        printf("a is odd");
    }
    return 0;
}

