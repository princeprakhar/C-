#include<iostream>
using namespace std;
class area
{
	public:
		int x,y;
    	void input()
    	{
    		cout<<"enter the length of rectangle\n";
    		cin>>x;
    		cout<<"enter the breath of rectangle\n";
    		cin>>y;
		}
		int z()
		{
			int a;
			a=x*y;
			cout<<a;
			return 0;
		}
		
    	
};
int main()
{
  area ob;
  ob.input();
  cout<<"area of rectangle is: ";
  ob.z();
  return 0;	
}
