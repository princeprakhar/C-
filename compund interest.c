#include<stdio.h>
#include<math.h>
int main()
{
	comp();
}
comp()
{
	float p,ts,a,rt,ci,n;
	printf("enter the principal amount\n") ;
	scanf("%f",&p);
	printf("enter the rate of interest\n");
	scanf("%f",&rt);
	printf("enter the time span\n");
	scanf("%f",&ts);
	printf("enter the no. of time span\n");
	scanf("%f",&n);
	a=p*pow((1+rt/100),ts);
	ci=a-p;
	printf("%f",ci); 
	
}
