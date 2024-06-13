/*#include<windows.h>
main()
{
    int a;
    COORD c;
    c.X=40;
    c.Y=12;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
    printf("enter the number");
    scanf("%d",&a);
    printf("prakhar deep agrahari s\o jamuna prasad agrahri and anjani devi ",a);
    getch();
}*/
#include<bits/stdc++.h>
using namespace std;
int seive(long long l,long long n)
{
	vector<bool>is_prime(n+1,true);
	int c=0;
	is_prime[0]=is_prime[1]=false;
	for(long long i=2;(long long)i*i<=n;i++)
	{
		if(is_prime[i])
		{
			for(long long j=(long long) i*i;j<=n;j+=i)
			{
				is_prime[j]=false;
			}
		}
	}
	for(long long i=l;i<=n;i++)
	{
		if(is_prime[i])
		{
			c++;
		}
	}
	return c;
}
int main()
{
	long t;
	cin>>t;
	while(t--)
	{
		long long l,r;
		cin>>l>>r;
		cout<<seive(l,r);
		cout<<endl;
	}

}

