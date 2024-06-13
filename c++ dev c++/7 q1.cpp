/*1 WAP to create a class that will maintain the records of person with details (Name and Age) and find the eldest among them.
 The program must use this pointer to return the result by overloading> operator among two objects.*/
#include<bits/stdc++.h>
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
	   int operator >(person p)
	   {
	   	if(age>p.age)
	   	{
	   	    return 1;
		}
		else
		{
		   	return 0;
		}
	   }
};
int main()
{
	person p1,p2;
	p1.input();
	p2.input();
	if(p1>p2)
	{
		cout<<"eldest person: "<<endl;
		p1.display();
	}
	else
	{
		cout<<"youngest person: "<<endl;
		p1.display();
	}
	
    
  return 0;	
}

