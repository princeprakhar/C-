#include<iostream>
using namespace std;
int fact(int m)
{
	int n=m;
	for(int i=1;i<m;i++)
	{
		n=n*i;
	}
	return n;
}
int main()
{
	int n;
	cout<<"Enter any number: ";
	while(1)
	{
	cin>>n;
	try
	{
		if(n<0)
		{
			throw 'n';
			continue;
		}
		else if(n==0)
			{
				throw 1;
				break;
			}
		else
		{
			cout<<"Factorial of numnber is:"<<fact(n);
			   break;
		}
	}
	catch(char s)
	{
		cout<<"factroial for this number is not possible \n Enter another number: ";
	}
	catch(int e)
	{
		cout<<"Factorial of numnber is: "<<e;
	}
    }
}
