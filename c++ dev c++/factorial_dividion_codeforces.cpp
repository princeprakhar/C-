#include<bits/stdc++.h>
using namespace std;
long long fact(long long n)
{
	if(n==1||n==0)
	{
		return 1;
	}
	else
	{
		return (n*fact(n-1));
	}
}
int main()
{
		long long n,x,sum=0;
		cin>>n>>x;
		vector<long long>a(n);
		for(long long i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=fact(a[i]);
		}
		if(sum%fact(x)==0)
		{
			cout<<"Yes";
		}
		else
		{
			cout<<"No";
		}
		cout<<endl;
}
