#include<iostream>
using namespace std;
class media
{
    protected:
	string title;
	int price;
	public:
		media(string t,int p)
		{
			title=t;
			price=p;
		}
	    virtual void display()=0;		
	
};
class book:public media
{
    protected:
	int pages;
	public:
		book(string t,int p,int ps):media(t,p)
		{
			pages=ps;
		}
		void display()
		{
			cout<<"Title: "<<title<<endl<<"Price: "<<price<<endl<<"Pages: "<<pages<<endl;
		}
	
};
class tape:public media
{
    protected:
	int tm;
	public:
		tape(string t,int p,int x):media(t,p)
		{
			tm=x;
		
		}
		void display()
		{
			cout<<"Title: "<<title<<endl<<"Price: "<<price<<endl<<"Time: "<<tm<<endl;
		}
};
int main()
{
	string n;
	cout<<"enter the title for book: ";
	cin>>n;
	int a,b;
	cout<<"enter the price for book: ";
	cin>>a;
	cout<<"enter the pages for book: ";
	cin>>b;
	book A(n,a,b);
	cout<<endl;
	string r;
	cout<<"enter the title for tape: ";
	cin>>r;
	int x,y;
	cout<<"enter the price for tape: ";
	cin>>x;
	cout<<"enter the time for tape: ";
	cin>>y;
	media *C;
	tape B(r,x,y);
	C=&A;
		cout<<"Detail regarded book: "<<endl;
	C->display();
	C=&B;

	cout<<"Detail regarded tape: "<<endl;
	C->display();
	
	return 0;
}


