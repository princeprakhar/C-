 #include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s;
        for(int i=0;i<m;i++)
        {
            s.insert(i,"B");
        }
        string s_constant=s;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>m/2)
            a[i]=m-a[i]+1;
            s.replace(a[i]-1,1,"A");
        }
        string s1=s;
        for(int i=0;i<n;i++)
        {
            s_constant.replace((m-a[i]),1,"A");
        }
        string s2=s_constant;
        int c1=0,c2=0;
        for(int i=0;i<m;i++)
        {
            if(s1[i]=='B')
            c1++;
            if(s2[i]=='B')
            c2++;
        }
        cout<<s1;
        /*if(c2<c1)
        cout<<s2;
        else 
        cout<<s1;*/
    }
}
