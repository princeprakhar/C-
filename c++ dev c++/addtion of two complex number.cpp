#include<iostream>
using namespace std;
class complex
{
   int a,b;
   public:
   void input()
   {
   	 cout<<"enter the real part of number: ";
   	 cin>>a;
   	 cout<<"enter the imiginary part of number: ";
   	 cin>>b;
   }
    complex addr(complex ob1,complex ob2)
   {
     complex ob3;
     ob3.a=ob1.a+ob2.a;
     ob3.b=ob1.b+ob2.b;
     return ob3;
   }
   
     
    void display()
   {
   	cout<<a<<"+"<<b<<"i";
   }
  
   
};
int main()
{
	complex p,q,r;
	p.input();
	q.input();
	r=r.addr(p,q);
	cout<<"1st complex number is : ";
	p.display();
	cout<<"\n2nd complex number is: ";
	q.display();
	cout<<"\nsum of complex number is: ";
	r.display();

	return 0;
}
