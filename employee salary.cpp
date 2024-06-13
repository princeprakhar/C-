//take memory of salary of n employees for department 1 and then store salary of n employees for department 2, then print maximum salary of department 1 and department 2
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n1,n2;
	printf("enter the no of employee in department 1\t");
	scanf("%d",&n1);
	printf("enter the no of employee in department 2\t");
	scanf("%d",&n2);
	int d[n1],d2[n2],max1,max2;
	printf("enter salary of employee in department 1\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&d[i]);
	}
	for(i=0;i<n2;i++)
	{
		scanf("%d",&d2[i]);
	}
	max1=d1[0];
	int temp;
	for(i=0;i<n1;i++)
	{
		if(max1>d1[i+1])
		{
			temp=d1[i+1];
			d1[i+1]=
		}
	}
	
	
}
