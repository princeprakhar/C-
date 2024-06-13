#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string cn,md;
    string ceooc;
    cout<<"enter the company name: ";
    getline(cin,cn);
    cout<<"enter the ceo name: ";
    getline(cin,ceooc);
    cout<<"enter the md name: ";
    getline(cin,md);
    ofstream fout;
    ifstream fin;
    fout.open("pratice for seekg,seekp,tellg and tellp.txt");
    
    fout.close();
    fout.open("pratice for seekg,seekp,tellg and tellp.txt",ios::out);
    fout<<"company name: "<<cn<<endl<<"ceo name: "<<ceooc<<endl;
    fout.seekp(5,ios::beg);
    fout<<"M.D. name's: "<<md;
    fout.close();
    fin.open("pratice for seekg,seekp,tellg and tellp.txt",ios::in );
    fin.seekg(1,ios::beg);
    string read;
    while(!fin.eof())
    {
    	getline(fin,read);
    	cout<<read<<endl;
	}
     
	fin.close();
    
}
