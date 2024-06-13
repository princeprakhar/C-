#include<iostream>
using namespace std;
class demo
{
	int x;
	public:
		void input()
		{
			cout<<"enter the value of x: ";
			cin>>x;
		}
		void display()
		{
			cout<<"x= "<<x;
		}
		demo operator ++()
		{
			demo temp;
			temp.x=++x;
			return temp;
		}
};
int main()
{
	demo ob1,ob2;
	ob1.input();
	ob2=++ob1;
	ob1.display();
	cout<<endl;
	ob2.display();
	return 0;
}
