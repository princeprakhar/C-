#include<stdio.h>
int main()
{
	int a[6]={4,3,2,9,6,5},i=0,j;
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(a[i]>a[j])
			{
	            int temp=a[i];
	            a[i]=a[j];
                a[j]=temp;
            }
		}
	}
	for(i=0;i<6;i++)
	printf("%d",a[i]);
	return 0;
}

