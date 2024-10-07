#include<bits/stdc++.h>
using namespace std;
long long solve(long long n)
{
  long long sqrt_of_n = sqrt(n);
  bool flag = true;
  for(long i=2;i<=sqrt_of_n;i++)
  {
    if( n%i == 0)
    {
      flag = false;
      break;
    }
  }
  return flag?n:solve(n+1);
  
}
signed main(){
  int n; cin>>n;
  cout<<solve(n);
}
