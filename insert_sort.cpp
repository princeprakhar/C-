#include<iostream>
using namespace std;
int main()
{
	int a[6]={3,4,2,9,6,5};
	for(int i=1;i<6;i++)
	{
		int j=i-1;
		int key=a[i];
		while(j>=0&&a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	for(int i=0;i<6;i++)
	{
		cout<<a[i];
	}
}
