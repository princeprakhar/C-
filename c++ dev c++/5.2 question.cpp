 #include<bits/stdc++.h>
using namespace std;
class student
{
	string uid;
	public:
	void getnumber();
	void putnumber();
};
void student::getnumber()
{
	cout<<"enter the uid: ";
	cin>>uid;
}
void student::putnumber()
{
	cout<<"uid: "<<uid;
}
class test:public student
{
    protected:	
    int subject1,subject2;
    public:
    void getmarks();
    void putmarks();
};
void test::getmarks()
{
	cout<<"enter the marks for 1st subject: ";
	cin>>subject1;
	cout<<"enter the marks for 2nd subject: ";
	cin>>subject2;
	
}
void test::putmarks()
{
	cout<<"enter the marks for 1st subject: "<<subject1;
	cout<<"enter the marks for 1st subject: "<<subject2;
		
}
class sport:public student
{   protected:
	int score;
	public:
	void getscore();
	void putscore();
};
void sport::getscore()
{
	cout<<"enter the score: ";
	cin>>score;
}
void sport::putscore()
{
	cout<<"enter the score: "<<score;
}
class result:public test,public sport
{
	private:
	int total_marks;
	public:
	void display()
	{
		total_marks=score+subject1+subject2;
		cout<<"total marks: "<<total_marks;
	}
};
int main()
{
	result ob;
	ob.test::getnumber();
	ob.test::getmarks();
	ob.sport::getscore();
	ob.test::putnumber();
	cout<<"\n";
	ob.test::putmarks();
	cout<<"\n";
	ob.sport::putscore();
	cout<<"\n";
	ob.display();
	return 2;
	
}
