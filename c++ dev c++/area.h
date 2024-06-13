#include<iostream>
#include<iomanip>
#define pie 3.14
using namespace std;
namespace area{
	double r,l,b,ql,qb;
	double ar;
	void cinput();
	void cdisplay();
	void qinput();
	void qdisplay();
	void tinput();
	void tdisplay();
}
void area::cinput()
{
	cout<<"Enter the radius of circle: ";
	cin>>r;
}
void area::cdisplay()
{
	cout<<"Area of circle is: "<<setprecision(6)<<r*r*pie;
}
void area::qinput()
{
	cout<<"Enter the length of Quadrilateral: ";
	cin>>ql;
	cout<<"Enter the breath of Quadrilateral: ";
	cin>>qb;
}
void area::qdisplay()
{
	cout<<"Area of Quadrilateral is: "<<setprecision(6)<<ql*qb;
}
void area::tinput()
{
	cout<<"Enter the height of Triangel: ";
	cin>>l;
	cout<<"Enter the base of Triangel: ";
	cin>>b;
}
void area::tdisplay()
{
	cout<<"Area of Triangel is: "<<setprecision(6)<<0.5*l*b;
}


