#include<bits/stdc++.h>
using namespace std;
int t=0;
int main()
{
    cin>>t;
    while(t--)
    {
    	int n,k;
        cin>>n>>k;
        int d[n];
        for(int i=0;i<n;i++)
        {
           cin>>d[i] ;
        }
        int r[n];
        for(int i=0;i<n;i++)
        {
          cin>>r[i]; 
        }
        int val[n];
        for(int i=0;i<n;i++)
        {
          val[i]=d[i]*k+r[i]; 
        }
        
        sort(val,val+n);

       cout<<val[0]<<endl;  
    } 
    return 0;
    
}

