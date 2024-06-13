#include<stdio.h>
int main()
{
    int a,s,x;
    printf("Enter the number:");
    scanf("%d",&a);
    while (a>0)
    {
        a=a%10;
        s=s*10+(a%10);

        printf("%d",s);
    }

    getch();

}
