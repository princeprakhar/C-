#include<bits/stdc++.h>
using namespace std;
class OB
{
	int A;
	float B;
	public:
		
		void cube(int a)
		{
			A=(pow(a,3));
		}
		void cube(float b)
		{
			B=(pow(b,3));
		}
		void display(int a)
		{
			cout<<"cube of integer value is: "<<A;
		}
		void display(float b)
		{
			cout<<"cube of float value is: "<<B;
		}
};
int main()
{
	OB ob;
	int a;
	float b;
	cout<<"enter integer value : ";
	cin>>a;
	cout<<"enter the float value: ";
	cin>>b;
	ob.cube(a);
	ob.cube(b);
	ob.display(a);
	cout<<endl;
	ob.display(b);
	return 0;
	
}

