//store marks of n student find the average marks then expand the space for m+n value .enter the data for another m student then find the avg
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,avg,sum=0,m;
	int *p;
	printf("how many student \n");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+1));
		sum=sum+*(p+i);	
	}
	avg=sum/n;
	printf("avg marks of %d student =%d",n,avg);
	printf("how many more student \n");
    scanf("%d",&m);
    p=(int*)realloc(p,(m+n)*sizeof (int));
    for(i=n;i<m+n;i++)
    {
    	scanf("%d",(p+i));
    	sum=sum+*(p+i);
	}
	avg=sum/(m+n);
	printf("new avg=%d",avg);
	free(p);
}
