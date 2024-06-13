#include<iostream>
using namespace std;
class account
{
   string name;
   string add;
   string mn;
   string an;
   string pcn;
   string acc = "cucet216353";
   public:
   void input()
   {
   	cout<<"enter the name of person: ";
   	getline(cin,name);
   	cout<<"enter the address: ";
   	getline(cin,add);
   	cout<<"enter the mobile no: ";
   	getline(cin,mn);
   	cout<<"enter the aadhar no: ";
   	getline(cin,an);
   	cout<<"enter the pan card no:";
   	getline(cin,pcn);
   }
   void display()
   {
   	cout<<"name: "<<name<<endl;
   	cout<<"address: "<<add<<endl;
   	cout<<"mobile no.: "<<mn<<endl;
   	cout<<"account no: "<<acc<<endl;
   	cout<<"aadhar no: "<<an<<endl;
   	cout<<"pan card no.: "<<pcn<<endl;
   }
};
int main()
{
	account a;
	a.input();
	cout<<"customer detail: "<<endl;
	a.display();
	return 0;
}
