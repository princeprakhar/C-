#include<stdio.h>
int main()
{
    char name[30];
    float per;
    char grade[5];
    int marks;
    int mobno[10];
    char add[50];
    {
        printf("Name:");
        scanf("%s",&name);
        printf("%s",name);
    }
    {
        printf("\nPercentage:");
        scanf("%f",&per);
        printf("%f",per);
    }
    {
        printf("\nGrade:");
        scanf("%s",&grade);
        printf("%s",grade);
    }
    {
        printf("\nMarks:");
        scanf("%d",&marks);
        printf("%d",marks);
    }
    {
        printf("\nMOB.NO:");
        scanf("%s",&mobno);
        printf("%s",mobno);
    }
    {
        printf("\nAddress:");
        scanf("%s",&add);
        printf("%s",add);
    }
    return 0;
    getch();
}
