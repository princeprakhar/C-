/*WAP to illustrate how the constructors are implemented and the order in which they are called when the classes are inherited.
 Use three classes named alpha, beta, gamma such that alpha, beta are base class and gamma is derived class inheriting alpha &
 beta. Pass four variable to gamma class object which will further send one integer variable to alpha(),one float type variable 
 to beta().Show the order of execution by invoking constructor of derived class.*/



 #include<bits/stdc++.h>
 using namespace std;
 class alpha
 {
 	protected:
 	int x;
 	public:
 	alpha(int x)
 	{
 		cout<<"x="<<x<<endl;
 		
	 }
	 ~alpha()
	 {
	 	cout<<"x is destructed"<<endl;
	 }
 };
 class beta
 {
 	protected:
 	float y;
 	public:
 	beta(float y)
 	{
 		cout<<"y="<<y<<endl;
 		
	 }
	 ~beta()
	 {
	 	cout<<"y is destructed"<<endl;
	 }
 };
 class gamma:public alpha,public beta
 { protected:
 	int c,d;
 	public:
    gamma(int x,float y,int c,int d):alpha(x),beta(y)
 	{
 	    cout<<"c="<<c<<endl;
 	    cout<<"d="<<d<<endl; 		
	 }
	
	 ~gamma()
	 {
	 	cout<<"c,d is destructed"<<endl;
	 }
 	
 };
 int main()
 {
 	int i,k,l;
 	float j;
 	cout<<"enter the number in this sequence integer,float,integer,integer: ";
 	cin>>i>>j>>k>>l;
 	gamma ob(i,j,k,l);
 	return 0;
 }
 
 
 
