#include<stdio.h>
#define n 6
int push(int a[],int t)
	{
		if(t == n-1)
			printf("Stack is Full");
		else
			printf("Enter the item: ");
			scanf("%d",&a[++t]);
			return t;
	}
int pop(int a[],int t) 
	{	
		if(t == -1)
			printf("Stack is empty");
		else{
			printf("Item deleted is %d",a[t--]);
		}
		return t;
	}
void display(int a[],int t)
	{
		int i;
		if(t == -1)
			printf("Nothing in the Stack");
		else{
			for(i=0;i<t;i++)
				printf("%d",a[i]);
		}
	}
int main()
{
	int a[n],top=-1,x,i;
	printf("Enter the operation you want to perform: \nFor push Enter 1,For pop Enter 2 and for top Enter the 3: ");
	scanf("%d",&x);
	do
	{
	  switch(x)
			{	
				case 1: top=push(a,top);
					break;
				case 2: top=pop(a,top);
					break;
				case 3: display(a,top);
					break;
				default: printf("INVALID INPUT ");
						 
				
			}
			printf("TO CONTINUE ENTER 1 ELSE ENTER 0: ");
			scanf("%d",&i);
    }while(i!=0);
    return 0;
}
