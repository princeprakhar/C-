#include<stdio.h>
int main()
{
    int year ,leapyear;
    printf("Enter the year\n");
    scanf("%d",&year);
    (leapyear=year+4)?leapyear:year;
    printf("the leap year is \n");
    return 0;
}
