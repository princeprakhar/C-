  #include<iostream>
#include<conio.h>
using namespace std;
class st
{
	private:
	string name;
	string code;
	public:
	void input()
	{
		 cout<<"enter the name\n";
	     cin>>name;
	     cout<<"enter the code";
	     cin>>code;
	}
	void output()
	{
		 cout<<"\nname:"<<name;
		 cout<<"\ncode:"<<code;
	}
};
class teacher:public st
{
	private:
       string subject;
	   int pub;
	   public:
	   void input1()	
	   {
	   	 input();
	   	 cout<<"\nenter the subject \n";
	   	 cin>>subject;
	   	 cout<<"\nenter the publication";
	   	 cin>>pub;
	   }
	   void output1()
	   {
	   	 output();
	   	 cout<<"\nsubject: "<<subject;
	   	 cout<<"\npublication: "<<pub;
	   }
};
class officer:public st
{ 
    private: 
	char grade;
	public:
	void input2()
	{
		input();
		cout<<"\nenter the grade";
		cin>>grade;
		
	}
	void output2()
	{
		output();
		cout<<"\ngrade: "<<grade;
	}
	
};
class typist:public teacher
{
	private:
	int speed,wages;
	public:
	void input3()
	{
		input();
		cout<<"\nenter the speed of typist: ";
		cin>>speed;
		cout<<"\nenter the daily wages of typist: ";
		cin>>wages;
	}
	void output3()
	{
		output();
		cout<<"\nspeed of typist: "<<speed;
		cout<<"\ndaily wages: "<<wages;
	}
};
int main()
{
	teacher a;
	a.input1();
	officer b;
	b.input2();
	typist c;
	c.input3();
	system("cls");
	a.output1();
	cout<<"\n";
	b.output2();
	cout<<"\n";
	c.output3();
	getch();
	return 0;
}

