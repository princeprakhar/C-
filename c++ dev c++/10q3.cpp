#include<iostream>
#include<fstream>
using namespace std;
class student
{
   string name;
   int age;
   string r;
   public:
   	void input()
   	{
   	    cout<<"enter the name: ";
   	    getline(cin,name);
   	    cout<<"enter the age: ";
   	    cin>>age;
   	    cout<<"enter the roll no: ";
   	    cin>>r;
	   }
	   void display()
	   {
	   	cout<<"name: "<<name<<endl<<"age: "<<age<<endl<<"roll no: "<<r;
	   }
};
int main()
{
   student s;
   s.input();
   ofstream fout;
   fout.open("worksheet.txt",ios::out|ios::binary);
   if(!fout)
   cout<<"ofstream object not created";
   else
   	cout<<"ofstream object created successfully"<<endl;
   fout.write((char*)& s,sizeof(s));
   fout.close();
   ifstream fin;
   fin.open("worksheet.txt",ios::in|ios::binary);
   	if(!fin)
	cout<<"ifstream object not created";
	else
	cout<<"ifstream object created successfully"<<endl;
   fin.read((char*)& s, sizeof(s));
   cout<<"CONTENT OUTPUT: ";
   s.display();
   fin.close();
   
}
