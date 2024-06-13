#include<iostream>
using namespace std;
inline int min(int a,int b, int c)
{
	if(a>b)
	{
		if(b>c)
		return(c);
		else
		return(b);
	}
	else
	{
		if(c>a)
		return(a);
		else
		{
		return(c);
		}
	}
	
}
inline int max(int a,int b,int c)
{
	if(a>b)
	{
		if(b>c)
		return(a);
		else
		return(b);
	}
	else
	{
		if(b>c)
		return(b);
		else
		{
		return(c);
		}
	}
}
int main()
{
	int a,b,c;
	cout<<"enter the 3 numbers\n";
	cin>>a>>b>>c;
	cout<<"maximum is :"<<max(a,b,c);
	cout<<"\nminimum is :"<<min(a,b,c);
	return 0;
	
}
