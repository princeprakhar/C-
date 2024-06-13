#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ifstream fin;
   ofstream fout;
   fout.open("p.txt");
   fout<<"Helloprakhar";
   fout.close();
   fin.open("p.txt");
   char a;
   fin>>a;
   while(!fin.eof())
   {
   	cout<<a;
   	fin>>a;
   }
   cout<<endl;
    fin.close();
    char b;
    ofstream of1("q.txt");
    of1<<"OOPS";
    of1.close();
    ifstream  if1("q.txt");
    if1>>b;
   while(!if1.eof())
   {
   	cout<<b;
   	if1>>b;
   }
   if1.close();
    return 0;
}
