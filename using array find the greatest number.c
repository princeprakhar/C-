#include<stdio.h>
int main()
{
    int m[10],n,max,i;
    printf("enter the number :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&m[i]);
    }
    for(i=1;i<n;i++)
    {
        if(m[i]>max)
        {
           max=m[i];
        }
    }
     printf("greatest number is %d",max);

    return 0;


}
