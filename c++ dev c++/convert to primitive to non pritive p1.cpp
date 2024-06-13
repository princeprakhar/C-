#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
		public:
			complex(int k)
			{
				a=k; b=0;
			}
			void set(int x, int y)
			{
				a=x; b=y;
			}
			void show()
			{
				cout<<"r= "<<a<<"i= "<<b;
			}
};
int main()
{
	complex c1(4);
	int x=5;
	c1=x;
	c1.show();
	
}

