#include<stdio.h>
#include<stdlib.h>
void sort(int a[],int x)
{

for (int counter = 0 ; counter < x - 1; counter++)
{
for (int counter1 = 0 ; counter1 < x - counter - 1; counter1++)
{
if (a[counter1] > a[counter1+1]) /* For decreasing order use < */
{
  int swap_var        = a[counter1];
  a[counter1]   = a[counter1+1];
  a[counter1+1] = swap_var;
}
}
}
}
int main()
{
    int n,k;
     int x=0;
    scanf("%d %d",&n,&k);
    int *p,*q,*r,ma,mo,mx;
    p=(int*) malloc(n*(n-k+1)*sizeof(int*));
    q=(int*) malloc(n*(n-k+1)*sizeof(int*));
    r=(int*) malloc(n*(n-k+1)*sizeof(int*));
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
//             printf("%d\t",i&j);
//             printf("%d\t",i|j);
//             printf("%d\n",i^j);
            p[x]=i&j;
            q[x]=i|j;
            r[x]=i^j;
             ++x;
        
        }
    }
     sort(p,x);
     sort(q,x);
     sort(r,x);
    int u=0;
//    ma=p[0];
    for(int i=0;i<x;i++)
    {
         if(p[i]<=k)
         {
         	++u;
		 }
        
    }
    ma=p[u];
//    mo=q[0];
    u=0;
    for(int i=0;i<x;i++)
    {
         if(q[i]<=k)
         {
         	
         	 ++u;
        
		 }
    }
    mo=q[u];
    u=0;
    for(int i=0;i<x;i++)
    {
        if(r[i]<=k)
         {
            ++u;
		 }
    }
    mx=r[u];
    if(ma==k)
    ma=0;
    if(mo==k)
    mo=0;
    if(mx==k)
    mx=0;
    printf("%d\n%d\n%d",ma,mo,mx);
    
//    for(int i=0;i<x;i++)
//    {
//    	printf("%d\t",p[i]);
//	}
    
}
