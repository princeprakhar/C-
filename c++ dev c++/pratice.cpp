#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *next;
	int data;
};
struct node* head=NULL;
struct node* tail=NULL;
struct node* create()
{
	struct node*n;
	n=(struct node*)malloc (sizeof(struct node));
	return n;	
}
void insert()
{
	struct node *temp,*t;
	temp=create();
	printf("Enter the data you want put in the linked list: ");
	scanf("%d",&temp->data);
	
	while(temp->data==-1){
	
	if(head==NULL)
		head=temp;
	else
	{
	 	tail->next=temp;
	}
}
}
int main()	
{
	int t=7;
	insert();
	return 0;
}


