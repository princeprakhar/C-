#include<stdio.h>
#define n 10
int main()
{
	int a[10],i=0,x,c=0;
	printf("Enter the element of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number you want to search: ");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]==x){
			c=1;
			break;
		}
	}
	if(c==1)
	printf("Number found!");
	else
	printf("Number not found!");
	return 0;
}
