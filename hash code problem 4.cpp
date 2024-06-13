#include<stdio.h>
int main()
{
	int n;
	printf("n=");
	scanf("%d",&n);
	int a[n][n],b[n][n],i,j;
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[j][i];
			
		}
		
	}
	
	printf("New Matrix:\n");
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
			
		}
		printf("\n");
	}
	
	
	
	
}

