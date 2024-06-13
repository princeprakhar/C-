#include <iostream>
using namespace std;

int main() 
{
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n,x=10000,y;
	    cin>>n;
	    long long a[x];
	    int i=0;
	    for(i=0;i<x;i++)
    	{
	       a[i]=i+1;
	       for(int j=0;j<x;j++)
	        {
	            y=a[i]*a[j];
	            if(y==n)
	            {
	                cout<<a[i]<<" "<<a[j];
	                 break;
	            }
	            else
	            {
	            continue;
	            }
	        }
	        if(y==n)
	        break;
	    }
	    /*for(i=0;i<x;i++)
	    {
	        for(int j=0;j<x;j++)
	        {
	            y=a[i]*a[j];
	            if(y==n)
	            {
	                cout<<a[i]<<" "<<a[j];
	                 return 0;
	            }
	            else
	            {
	            continue;
	            }
	        }
	        cout<<endl;*/
	    
	   
	    cout<<endl;
     }
	return 0;
}

