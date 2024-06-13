#include<iostream>

#include<string>

#include<fstream>

using namespace std;

int main()

{

  string name;

  string tn;

  /*cout<<"enter the name: ";

  getline(cin,name);

  cout<<"enter the telephone number of 10 digits: ";

  getline(cin,tn);

  ofstream fout;

  fout.open("a.txt",ios::out);

  fout<<name<<endl<<tn<<endl;

  fout.close();*/

  string names;

  string tns;

  fflush(stdin);

  cout<<"enter the name seaching for: ";

  getline(cin,names);

  // cin>>names;

  cout<<"enter the number seaching for: ";

  cin>>tns;

  ifstream fin;

  fin.open("a.txt",ios::in);

  string a,b;

  fin.seekg(0,ios::beg);

  getline(fin,a);

  fin.seekg(-11,ios::end);

  getline(fin,b);

  if(a==names && b==tns)

  {

   cout<<"yes! record found.\ndetail are:-\n";

   cout<<"name: "<<a<<endl<<"telephone no: "<<b;

     

  }

  else

  {

  cout<<"record not found!";

}

  fin.close();

  return 0;

}
