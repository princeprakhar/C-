#include<stdio.h>
#define PI 3.14
int main()
{
    float radius,area;
    printf("Enter the radius circle");
    scanf("%f", &radius);
    area=PI*radius*radius;
    printf("Area of circle is %f",area);

}
