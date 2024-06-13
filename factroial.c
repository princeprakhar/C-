#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("enter the number:\n");
    scanf("%d",&n);
    for(i=n-1;i<n;i--)
    {

        fact=n*i;
        n=fact;

    }
    printf("the of %d is %d",n,fact);
}
