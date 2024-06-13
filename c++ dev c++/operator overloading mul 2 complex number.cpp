#include<iostream>
using namespace std;
class complex
{
	int x,y;
	public:
	void get_data(int a,int b)
	{
		x=a;
		y=b;
	}
	

	complex operator *(complex c)
		{
		complex temp;
	    temp.x=x*c.x-y*c.y;
		temp.y=x*c.y+y*c.x;
		return (temp);
	}
	void display()
	{
		cout<<x<<"+"<<y<<"i";
	}
	
};

int main()
{
	
	int i,j,k,l;
	cout<<"enter the real and imaginary part of complex numbers:"<<endl;
	cin>>i>>j>>k>>l;
   complex z1,z2;
	z1.get_data(i,j);
	z2.get_data(k,l);
	complex z3;
	z3=z1*z2;
	cout<<"first complex number: ";
	z1.display();
	cout<<endl;
	cout<<"second complex number: ";
	z2.display();
	cout<<endl;
	cout<<"product of complex number: ";
	z3.display();
	cout<<endl;
	return 0;
	
}
