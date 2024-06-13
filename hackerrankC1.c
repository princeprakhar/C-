#include<stdio.h>
#include<stdlib.h>
void sort(int array[],int total_count)
{
  for (int counter = 0 ; counter < total_count - 1; counter++)
{
for (int counter1 = 0 ; counter1 < total_count - counter - 1; counter1++)
{
if (array[counter1] > array[counter1+1]) /* For decreasing order use < */
{
int swap_var        = array[counter1];
array[counter1]   = array[counter1+1];
array[counter1+1] = swap_var;
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
    p=(int*) calloc(1000,sizeof(int));
    q=(int*) calloc(1000,sizeof(int));
    r=(int*) calloc(1000,sizeof(int));
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            // printf("%d\t",i&j);
           
            p[x]=i&j;
            q[x]=i|j;
            r[x]=i^j;
             ++x;
        
        }
    }
    sort(p,x);
    sort(q,x);
    sort(r,x);
    int u=-1;
    ma=p[0];
    for(int i=0;i<x;i++)
    {
        
       if(ma<k)
       {
      
       u=i;    
       }
        ma=p[i+1];
    }
    if(u<0||ma==k)
    ma=0; 
    else 
    ma=p[u];
    mo=q[0];
    u=-1;
    for(int i=0;i<x;i++)
    {
        
       if(mo<k)
       {
       
       u=i;    
       }
       mo=q[i+1]; 
    }
     if(u<0||ma==k)
    mo=0; 
    else 
    mo=q[u];
    mx=r[0];
    u=-1;
    for(int i=0;i<x-1;i++)
    {    
       if(mx<k)
       {
       
       u=i;    
       }
        mx=r[i+1];
    }
     if(u<0||mx==k)
    mx=0; 
    else 
    mx=r[u];
    printf("%d\n%d\n%d",ma,mo,mx);
    // for(int i=0;i<x;i++)
    // {
        // printf("%d  ",p[i]);
    // }
    
}

