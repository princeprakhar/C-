#include<stdio.h>
#define n 10
int b_search(int* a1,int r,int l,int x)
{
	int p=((r+l)/2);
	if(a1[p]==x)
	return 1;
	if(x>a1[p])
	return b_search(a1,p+1,l,x);
	else
	return b_search(a1,r,p-1,x);
	return 0;
}
int main()
{
	int a[10],i=0,x,c=0,l=n-1,r=0;
	
	printf("Enter the sorted array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number you want to search: ");
	scanf("%d",&x);
	if(b_search(a,r,l,x))
	printf("Number found!");
	else
	printf("Number not found!");
	return 0;
}
