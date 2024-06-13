#include<iostream>
using namespace std;
class B;
class A
{
	int x;
	public :
		void input()
		{
			cout<<"enter the value of x\n";
			cin>>x;
		}
		void display()
		{
			cout<<"\nx="<<x;
		}
		friend int add(A & ob, B & ob1);
		friend int sub(A & ob, B & ob1);
		friend int mul(A & ob, B & ob1);
		friend float div(A & ob, B & ob1);
};
class B
{
	int y;
	public :
		void input()
		{
			cout<<"enter the value of y\n";
			cin>>y;
		}
		void display()
		{
			cout<<"\ny="<<y;
		}
	 	friend int add(A & ob,B & ob1);
	 	friend int sub(A & ob,B & ob1);
	    friend int mul(A & ob, B & ob1);
	    friend float div(A & ob, B & ob1);
};
int add(A &ob,B &ob1)
{
	int c;
	c=ob.x+ob1.y;
	return c;
	
}
    int sub(A &ob,B &ob1)
{
	int c;
	c=ob.x-ob1.y;
	return c;
}
int mul(A &ob,B &ob1)
{
	int c;
	c=ob.x*ob1.y;
	return c;
}
float div(A &ob,B &ob1)
{
	float c;
	c=ob.x/ob1.y;
	return c;
}
int main()
{
	A d;
	B d1;
	d.input();
	d1.input();
	add(d,d1);
    cout<<"\nAfter addtion : "<<add(d,d1);
	sub(d,d1);
	cout<<"\nAfter subtraction : "<<sub(d,d1);
	mul(d,d1);
	cout<<"\nAfter multiplication : "<<mul(d,d1);
	div(d,d1);
	cout<<"\nAfter division : "<<div(d,d1);	
	return 0;
}
