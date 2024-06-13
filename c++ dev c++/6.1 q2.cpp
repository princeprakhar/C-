/*2 Program to demonstrate the unary operator overloading for operator ++. Make a class test. Create a default constructor to initialize the variable.
1)	Overload operator ++ (Pre) with definition to pre-decrement the value of a variable
2)	Overload operator ++ (post) with definition to post-decrement the value of variable.*/

#include<bits/stdc++.h>
using namespace std;
class A
{
  int a ,b;
  public:
  	void input()
  	{
  		cout<<"enter the a number: ";
  		cin>>a;
  		b=a;
	  }
  A operator++()	
  {
  	A temp;
  	temp.a=--a;
  	return temp;
  }
  A operator++(int)	
  {
  	A temp;
  	temp.b=b--;
  	return temp;
  }
  void display()
  {
  	cout<<a;
  }
  void display(int x )
  {
  	cout<<b;
  }
};
int main()
{
	A o1,o2;
	o1.input();
    o2=++o1;
    cout<<"after pre decrement number : ";
	o1.display();
	cout<<endl;
	cout<<"value assign: ";
	o2.display();
	o2=o1++;
	cout<<endl;
	cout<<"after post decrement number : ";
	o1.display(1);
	cout<<endl;
	cout<<"value assign: ";
	o2.display(1);
	return 0;
}

