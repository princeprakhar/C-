#include<stdio.h>
int main()
{
    int n;
    printf("enter the numbers of elements :\n");
    scanf("%d",&n);
    int i,m[n],val;
    for(i=0;i<n;i++)
    {
        printf("enter the element:\n");
        scanf("%d",&m[i]);
    }
    printf("enter the value\n");
    scanf("%d",&val);
    for(i=0;i<n;i++)
    {
        if(m[i]==val)
        {
            printf("%d value matched with index %d",val,i);
            break;
        }
    }
    if(i==n)
    {
        printf("%d not found in",val);
    }
    return 0;

}
