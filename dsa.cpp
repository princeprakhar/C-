#include<stdio.h>
int main()
{
	int a[5],c=0,s,p,x,i=0;
	printf("Enter the element of the array: \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nArray is : ");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter the position of element you want to delete: ");
	scanf("%d",&p);
	printf("\nEnter the element you want to insert: ");
	scanf("%d",&x);
	a[p-1]=x;
	printf("\nEnter the element you want to search: ");
	scanf("%d",&s);
	for(i=0;i<5;i++)
	{
		if(a[i]==s)
		{
			c=1;
			break;
		}
	}
	if(c==1)
    printf("\nElement found!");
    else
    printf("\nElement Not found!");
	return 0;
}
