#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int pa,pb,qa,qb;
	    cin>>pa>>pb>>qa>>qb;
	    int x,y;
	    x=max(pa,pb);
	    y=max(qa,qb);
	    if(x>y)
	    {
	    	cout<<"Q";
		}
		else if(x==y)
		{
			cout<<"TIE";
		}
		else if(x<y)
		cout<<"P";
		cout<<endl;
	}
	return 0;
}

