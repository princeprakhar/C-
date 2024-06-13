#include <stdio.h>

int main()
{
    int i,j,n;
    long int fact=1;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d =%ld",n,fact);


    return 0;
}

