//wap to create a dynamic array that have marks of subject print average of subject
#include<iostream>
using namespace std;
int main()
{ 
   int n;
   cout<<"enter the no of element in array: ";
   cin>>n;
   int *p=new int[n];
   int s=0;
   float avg;
   cout<<"enter the element of array: "<<endl;
   for(int i=0;i<n;i++)
   {
   	 cin>>p[i];
   	 s+=p[i];
   }
   avg=(float)s/n;
   cout<<"sum: "<<s<<endl;
   cout<<"average: "<<avg<<endl;
   
   delete []p;
   return 0;
	
}
