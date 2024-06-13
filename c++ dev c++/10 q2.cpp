#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char para[1000];
	cin.getline (para,1000);
	ofstream fout;
	fout.open("item.txt");
	if(!fout)
	cout<<"ofstream object not created";
	else
	cout<<"ofstream object created successfully"<<endl;
	fout<<para;
	fout.close();
	ifstream fin("item.txt");
	if(!fin)
	cout<<"ifstream object not created";
	else
	cout<<"ifstream object created successfully"<<endl;
	while(!fin.eof())
	{
    fin.getline(para,1000);
    }
	fin.close();
	fout.open("employee.txt");
	fout<<para;
	fout.close();
	cout<<"COPIED CONTENT: "<<para;
	return 0;
	
	
}
