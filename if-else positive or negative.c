/*wap to display is number positive or negative
(num>=0)*/

#include <stdio.h>

int main()
{
    int x;
    printf("enter the number\n");
    scanf("%d",&x);
    if(x>=0)
    {
        printf("no. is positive");
    }
    else{
        printf("no is negative");
    }
    printf("\nexample of if-else");
    return 0;
}

