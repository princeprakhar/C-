/*1 WAP to create a class that will maintain the records of person with details (Name and Age) and find the eldest among them.
 The program must use this pointer to return the result by overloading> operator among two objects.*/
#include<iostream>
using namespace std;
class person
{
	int age;
	string name;
	public:
	   void input()
	   {
	   	cout<<"enter the name of person: ";
	   	cin>>name;
	   	cout<<"enter the age of person:";
	   	cin>>age;
	   }
	   void display()
	   {
	   	cout<<"name: "<<name<<endl<<"age: "<<age<<endl;
	   }
	  person* operator >(person p)
	   {
	   	if(this->age>p.age)
	   	{
	   	    return this ;
		}
		else
		{
		   	return &p;
		}
	   }
};
int main()
{
	person p1,p2;
	p1.input();
	p2.input();
	person *p3;
	cout<<"first person deatil : "<<endl;
	p1.display();
	cout<<"second person detail: "<<endl;
	p2.display();
	cout<<"eldest person detail: "<<endl;
	p3=p1>p2;
    p3->display();
  return 0;	
}

