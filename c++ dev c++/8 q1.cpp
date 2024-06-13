#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the dividend: ";
	cin>>a;
    cout<<"Enter the divisor: ";
	while(1)
	{
    	cin>>b;
		try
		{
			if(b==0){
				throw 1;
				continue;
			}
			else
			{
				cout<<(float)a/b;
				break;
			}
		}
		catch(int c){
			cout<<"Enter another divisor: ";
		}
	}
}
