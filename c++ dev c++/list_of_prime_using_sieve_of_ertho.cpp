#include<bits/stdc++.h>
using namespace std;
void prime(long long n)
{
	vector<bool>a(n,true);
	vector<long long>list_of_primes;
	a[0]=a[1]=false;
	if(n<2)
	{
		return;
	}
	else
	{
		for(long long i=2;i*i<=n;i++)
		{
			for(long long j=i*i;j<=n;j+=i)	
			{	
				a[j]=false;
			}
		}
	}
	for(long long i=0;i<n;i++)
	{
		if(a[i]!=false)
		{
			list_of_primes.push_back(i);
		}
	}
	for(long long i=0;i<list_of_primes.size();i++)
	{
		cout<<list_of_primes[i]<<"\t";
	}
}
int main()
{
	long long x;
	cout<<"Enter the number: ";
	cin>>x;
	prime(x);
	return 0;
}

