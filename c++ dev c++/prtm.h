#include<iostream>
#define pie 3.14
using namespace std;
namespace prmt{
	double r,l1,l2,l3,ql,ql;
	void cinput();
	void cdisplay();
	void qinput();
	void qdisplay();
	void tinput();
	void tdisplay();
}
void prtm::cinput()
{
	cout<<"Enter the radius of circle: ";
	cin>>r;
}
void prtm::cdisplay()
{
	cout<<"Perimetre of circle is: "<<setprecision(6)<<r*2*pie;
}
void prtm::qinput()
{
	cout<<"Enter the length of Quadrilateral: ";
	cin>>ql;
	cout<<"Enter the breath of Quadrilateral: ";
	cin>>qb;
}
void prtm::qdisplay()
{
	cout<<"Perimetre of Quadrilateral is: "<<setprecision(6)<<(ql+qb)*2;
}
void prtm::tinput()
{
	cout<<"Enter the length first side of Triangel: ";
	cin>>l1;
	cout<<"Enter the length second side of Triangel: ";
	cin>>l2;
	cout<<"Enter the length third side of Triangel: ";
	cin>>l3;
}
void prtm::tdisplay()
{
	cout<<"Perimetre of Triangel is: "<<setprecision(6)<<l1*l2*l3;
}

