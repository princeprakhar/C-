#include <iostream> 
#include<math.h> 
using namespace std;
int main()  
{  
int n,r,sum=0,temp,count;    
cout<<"Enter the Number=  ";    
cin>>n;
 while (n != 0)
    {
        n = n / 10;
        ++count;
    }
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+pow(r,count);    
n=n/10;    
}    
if(temp==sum)    
cout<<"Armstrong Number."<<endl;    
else    
cout<<"Not Armstrong Number."<<endl;   
return 0;  
}
