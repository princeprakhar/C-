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
		friend void swape(A & ob, B & ob1);
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
		friend void swape(A & ob,B & ob1);
	
};
void swape(A &ob,B &ob1)
{
	int temp;
	temp =ob.x;
	ob.x=ob1.y;
	ob1.y=temp;
}
int main()
{
	A d;
	B d1;
	d.input();
	d1.input();
	d.display();
	d1.display();
	swape(d,d1);
	cout<<"\nAfter swaping : ";
	d.display();
	d1.display();
	return 0;
}
