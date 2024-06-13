#include<stdio.h>
struct p{
	char name[20];
	float price;
	int q;
}; 
main()
{
  int n,i=1;
  struct p ai;
  printf("enter the no of the product that you want to enter\n ");
  scanf("%d",&n);
  while(i<=n)
  {
  	  printf("enter the following details of the product no %d\n",i);
  	  printf("enter the name of the product\n");
  	  fflush(stdin);
  	  gets(ai.name);
  	  printf("enter the price of the product \n");
  	  scanf("%f",&ai.price);
  	  printf("enter the quantity of the product\n");
  	  scanf("%d",&ai.q);
  	  i++;
  }
  i=1;
  while(i<=n)
  {
  	  printf("enter the following details of the product no %d\n",i);
  	  printf("enter the name of the product:%s\n",ai.name);
  	  printf("enter the price of the product:%f\n ",ai.price);
  	  printf("enter the quantity of the product:%d\n",ai.q);
  	  i++;
  }
  
  	
}
