#include<iostream>
using namespace std;
int main()
{
    char name[20];
    int n,total=0;
    float avg;
    cout<<"enter the name of the student"<<endl;
    cin.getline(name,20);
    cout<<"marks in how many subjects";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    total=total+a[i];
    }
    cout<<"total is"<<total;
    avg=(float)(total)/n;
    cout<<"AVERAGE="<<avg;
    return 0;
}
