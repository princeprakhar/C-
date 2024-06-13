#include<iostream>
using namespace std;
int main()
{
	int a[5],j,s;
	for(int i=0;i<5;i++)
	cin>>a[i];
	for(int i=1;i<5;i++)
	{
		j=i-1;
		s=a[i];
		while(j>=0&&a[j]>s)
		{
			swap(a[j],a[j+1]);
			j--;
		}
		
	}
	for(int i=0;i<5;i++)
	cout<<a[i]<<endl;
	return 0;
}
