#include<iostream>
using namespace std;
class A
{
		int a,b,c;
		public:
	    A(int x, int y)
		{
		   	a=x;
		   	b=y;
		}
		void add()
		{
			c=a+b;
			cout<<"sum is: "<<c;
		}
		
};
int main()
{
	A *ptr=new A(5,10);
	ptr->add();
	return 0;
}
