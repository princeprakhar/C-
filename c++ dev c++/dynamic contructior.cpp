#include<iostream>
using namespace std;
class A
{
	int  a,b;
	int *p;
	public:
		A()
		{
			 a=0; b=0; p=new int;
		}
		A(int x, int y,int z)//constructor
		{
		a=x; b=y;
		 p=new int;
		 *p=z;
		}
		void display()
		{
			cout<<a<<endl<<b<<endl<<*p;
		}
};
int main()
{
	A o1,o2,o3(3,4,5);
	o3.display();
	o2.display();
}
