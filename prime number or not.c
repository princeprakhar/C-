#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    if(n%i==0)
    {
        printf("number is not prime");
        break;

    }
    if(n==i)
    printf("number is prime");
    return 0;
}
