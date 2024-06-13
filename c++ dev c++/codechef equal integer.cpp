#include <iostream>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--)
    {
        long long x,y,c=0;
        cin>>x>>y;
       while(true)
       {
            if(x>y)
            {
                y=y+1;
                c=c++;
                continue;
            }
            else if(y>x)
            {
                x=x+1;
                c=c++;
                continue;
            }
            else if(x==y);
            {
                break;
            }
        }
        cout<<c;
        cout<<endl;
    }
	return 0;
}

