#include<bits/stdc++.h>
using namespace std;
long long binary_expon(long long a,long long n)
{
	long long res=1;
	while(n)
	{
		if(n%2)
		{
			res=res*a;
			n--;
		}
		else
		{
			a=a*a;
			n=n/2;
		}
	}
	return res;
}
long long modulus_expon(long long a,long long n,long long m)
{
	long long res=1;
	while(n)
	{
		if(n%2)
		{
			res=(res*a)%m;
			n--;
		}
		else
		{
			a=(a*a)%m;
			n=n/2;
		}
	}
	return res;
}
int main()
{
	long long a,b,m;
	cin>>a>>b>>m;
	cout<<"Binary expon: "<<binary_expon(a,b)<<endl<<"Modulus expon: "<<modulus_expon(a,b,m);
	return 0;
}
