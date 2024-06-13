#include<bits/stdc++.h>
#include<iostream>
#define NO_OF_CHARS 256
using namespace std;

/*bool checkpalindrome(char a[],int n)
{
    int flag=0,j=n-1;
    for(int i=0;i<n/2;i++)
    {
        if(a[i]!=a[n-i-1])
        return false;
    }
    return true;
}*/
bool canFormPalindrome(string str)
{
    // Create a count array and initialize all
    // values as 0
    int count[NO_OF_CHARS] = { 0 };
 
    // For each character in input strings,
    // increment count in the corresponding
    // count array
    for (int i = 0; str[i]; i++)
        count[str[i]]++;
 
    // Count odd occurring characters
    int odd = 0;
    for (int i = 0; i < NO_OF_CHARS; i++) {
        if (count[i] & 1)
            odd++;
 
        if (odd > 1)
            return false;
    }
 
    // Return true if odd count is 0 or 1,
    return true;
}
 
int main()
{
    int t,m=0;
    cin>>t;
    while(t--)
    {
        long long n,q,c=0;
        cin>>n>>q;
        string s;
        cin>>s;
       long long l[q],r[q];
        for(int i=0;i<q;i++)
        {
            cin>>l[i]>>r[i];
            l[i]=l[i]-1;
            r[i]=r[i]-1;
//            int m=r[i]-l[i]+1;
            string str=sort(s.begin(l[i]),s.end(r[i]));
            cout<<str<<endl;
            // int k=0;
            /*for(int j=l[i];j<=r[i];j++)
            {
                d[k]=s[j];
                // cout<<d[k];
                k++;
            }*/
            if(canFormPalindrome(str))
            c++;
        }
        cout<<"Case #"<<w++<<": "<<c;
        cout<<endl;
    }
}

