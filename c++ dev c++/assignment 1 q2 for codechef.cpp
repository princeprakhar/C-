#include<bits/stdc++.h>
using namespace std;
int check(int n)
{
    for(int i=2;i<=sqrt(n);i++)
	    {
	        if(n%i==0)
	        {
	            return 0;
	        }
	        else
	        {
	            return 1;
	        }
	    }
    
}
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n==1)
	    {
	        cout<<"-1"<<"   "<<"-1";
	    }
	    else
	    {
	    for(int i=2;i<=sqrt(n);i++)
	    { 
	       int x= n-i;
	        if(check(x))
	        {
	            cout<<i<<"  "<<x;
	            break;
	        }
	        
	        
	        
	    }
	    }
	   cout<<endl; 
	}
	return 0;
}

