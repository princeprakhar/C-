#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string name;
	int age;
	string rn;
	cout<<"enter the name of student: ";
	getline(cin,name);
	cout<<"enter the age of the student: ";
	cin>>age;
	cout<<"enter the roll no of student: ";
	cin>>rn;
	ofstream fout;
	fout.open("student.txt");
	if(!fout)
	cout<<"object not created";
	else
	cout<<"object created successfully"<<endl;
	fout<<"name: "<<name<<"\nage: "<<age<<"\nroll no: "<<rn;
	fout.close();
	ifstream fin;
	fin.open("student.txt");
	if(!fin)
	cout<<"object not created";
	else
	cout<<"object created successfully"<<endl;
	char a;
	a=fin.get();
   while(!fin.eof())
   {
   	cout<<a;
   	a=fin.get();
   }
   fin.close();
	
}
