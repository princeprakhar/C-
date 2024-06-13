#include<iostream>
using namespace std;
void operation(int n)
{
	if(n==1)
	{
		return;
	}
	else if(n%2==0)
	{
		n=n/2;
		cout<<n<<" ";
		operation(n);
	}
	else 
	{
		n=3*n+1;
		cout<<n<<" ";
		operation(n);
	}
}
int main()
{
		int n;
		cin>>n;
		cout<<n<<" ";
		operation(n);
}

