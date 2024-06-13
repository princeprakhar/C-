//Wap to create a array  dynamic print its value and address by using all four ways or form//
#include<iostream>
using namespace std;
int main()
{ 
   int n;
   cout<<"enter the no of element in array: ";
   cin>>n;
   int *p=new int[n];
   int s=0,avg;
   cout<<"enter the element of array: "<<endl;
   for(int i=0;i<n;i++)
   {
   	 cin>>p[i];
   	 
   }
   cout<<"First form"<<endl;
   for(int i=0;i<n;i++)
   {
   	 cout<<i[p]<<endl;
   	 
   }
   cout<<"second form"<<endl;
   for(int i=0;i<n;i++)
   {
   	 cout<<p[i]<<endl;
   	 
   }
   cout<<"third form"<<endl;
   for(int i=0;i<n;i++)
   {
   	 cout<<*(p+i)<<endl;
   	 
   }
   cout<<"Forth form"<<endl;
   for(int i=0;i<n;i++)
   {
   	 cout<<*(i+p)<<endl;
   	 
   }
   cout<<"First address form"<<endl;
   for(int i=0;i<n;i++)
   {
   	 cout<<&i[p]<<endl;
   	 
   }
   cout<<"second address form"<<endl;
   for(int i=0;i<n;i++)
   {
   	 cout<<&p[i]<<endl;
   	 
   }
   cout<<"third address form"<<endl;
   for(int i=0;i<n;i++)
   {
   	 cout<<(p+i)<<endl;
   	 
   }
   cout<<"Forth address form"<<endl;
   for(int i=0;i<n;i++)
   {
   	 cout<<(i+p)<<endl;
   	 
   }
   
   delete []p;
   return 0;
	
}
