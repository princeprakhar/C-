#include<iostream>
using namespace std;
class item
{
	public:
	char code[20];
	int price;
	int quantity;
      void input()
      {
      	cout<<"enter the code of item: ";
      	cin>>code;
      	cout<<"enter the price of item: ";
      	cin>>price;
      	cout<<"enter the quantity of item: ";
      	cin>>quantity;
      	
	  }
	  void display()
	  {
	  	cout<<"code:  "<<code<<"\nprice: "<<price<<"\nquantity: "<<quantity;
	  }
	
};
int main()
{
	item a;
	a.input();
	cout<<"item detail is  :\n";
	a.display();
	return 0;
}
