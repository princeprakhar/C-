#include<stdio.h>
main()
{
    int sum,i,ch;
    clrscr();
    printf("Enter your choice 0->odd,1->even");
    scanf("%d",&ch);
    if(ch==0)
     {
        printf("\n sum of odd number");
        sum =0;
        for(i=1;i<=50;i+=2)
     {
            sum+=i;}
        printf("\n sum of even numbers");
     }
     else
     {
         printf("\n sum of even numbers");
         sum =0;
         for(i=0;i<=50;i+=2);
         {
             sum += i;

         }

    printf("\n%d",sum) ;
    getch();
    }
}

