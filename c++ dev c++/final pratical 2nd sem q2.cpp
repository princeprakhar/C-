#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string para;
	getline(cin,para);
	ofstream fout;
	fout.open("o.txt");
	fout<<para;
	fout.close();
	string r;
	ifstream fin;
	fin.open("o.txt");
    while(!fin.eof())
    {
    	getline(fin,r);
	}
	fin.close();
	fout.open("c.txt");
	fout<<r;
	fout.close();
	string p;
	fin.open("c.txt");
	while(!fin.eof())
	{
		getline(fin,p);
	}
	cout<<p;
	
}
