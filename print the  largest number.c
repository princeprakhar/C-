#include<stdio.h>
int main()
{
    int x,y,z,larg;
    printf("Enter the numbers") ;
    scanf("%d %d %d",&x,&y,&z);
    larg=y>x?(y>z?y:z):(z<x?x:z);
    printf("the largest number is %d",larg);
    return 0;
}
