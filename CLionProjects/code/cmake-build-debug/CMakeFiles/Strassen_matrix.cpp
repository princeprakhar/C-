//
// Created by prakh on 19-05-2023.
//
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[2][2],b[2][2],c[2][2];
    cout<<"First Matrix Input\n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<"Enter The "<<i<<" row "<<j<<" column element\n";
            cin>>a[i][j];
        }
    }
    cout<<"Second Matrix Input\n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<"Enter The "<<i<<" row "<<j<<" column element\n";
            cin>>b[i][j];
        }
    }
    int m1= (a[0][0] + a[1][1])*(b[0][0]+b[1][1]);
    int m2= (a[1][0]+a[1][1])*b[0][0];
    int m3= a[0][0]*(b[0][1]-b[1][1]);
    int m4= a[1][1]*(b[1][0]-b[0][0]);
    int m5= (a[0][0]+a[0][1])*b[1][1];
    int m6= (a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
    int m7= (a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
    c[0][0]=m1+m4-m5+m7;
    c[0][1]=m3+m5;
    c[1][0]=m2+m4;
    c[1][1]=m1-m2+m3+m6;
    cout<<"Result Of Multiplication\n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
