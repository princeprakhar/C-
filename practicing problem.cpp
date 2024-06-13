#include<simplecpp>

main_program{
turtleSim();
cout<<"enter the side of polygon";
int n;
cin>>n;
repeat(n){forward(100);wait(2);
right(360/n);wait(2);}

}
