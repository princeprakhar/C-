#include<stdio.h>
int main()
{
    int m[10],n,i,sum=0;
    float avg;
    printf("enter the number of students :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the marks:\n");
        scanf("%d",&m[i]);
        sum=sum+m[i];
        printf("sum is %d\n",sum);
    }
     avg=sum/n;
    printf("average marks is %f ",avg);

    return 0;
}
