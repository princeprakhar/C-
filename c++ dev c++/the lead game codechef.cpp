//ever try
//ever fail
//try again
//fail again
//fail better

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	 int n;
	  cin>>n;
	 vector<int>a(2*n);
	 vector<int>b(n);
	 vector<int>c(n);
	 vector<int>d(n);
	  int i=0;
	  while(i<2*n)
	  {
	      cin>>a[i]>>a[i+1];
	      i=i+2;
	  }
	  i=0;
	  int j=0;
	  while(i<n)
	  {
	      if(a[j]>a[j+1]){
	      b[i]=a[j]-a[j+1];
	      c[i]=b[i];
	      }
	      else{
	      b[i]=a[j+1]-a[j];
	      d[i]=b[i];
	      } 
	      i++;
	      j=j+2;
	  }
	sort(b.begin(),b.end());
      for(i=0;i<n;i++)
      {
          if(c[i]==b[n-1])
          cout<<"1"<<" ";
          else if(d[i]==b[n-1])
          cout<<"2"<<" ";
      }
	 cout<<b[n-1]<<endl;
	  
	  
	  cout<<endl;
	return 0;
}

