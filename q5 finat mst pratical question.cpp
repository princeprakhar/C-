#include<stdio.h>
struct personal
{
	int a,b,c;
	char name[50];
	int date[3]={a,b,c},salary;
	
}p1;
int main()
{
	struct personal p1;
	
	printf("Enter the following information\n");
	printf("Enter the name:\n");
	gets(p1.name);
	printf("enter the date by format dd/mm/yy\n");
	scanf("%d/%d/%d",&p1.date[0],&p1.date[1],&p1.date[2]);
	printf("enter the salary \n");
	scanf("%d",&p1.salary);
    printf("name:%s\ndate of joining:%d/%d/%d\nsalary:%d",p1.name,p1.date[0],p1.date[1],p1.date[2],p1.salary);
}
