#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *pre;
	int data;
	struct node *next;
};
struct node *start=NULL;
struct node* create()
{
	struct node *n;
	n=(struct node*) malloc(sizeof(struct node));
	return n;
}
void insert_start(int x)
{
	struct node *p;
	p=create();
	p->data=x;
	p->pre=NULL;
	p->next=start;
	start=p;
}
void insert_last(int x)
{
	struct node *p,*t;
	p=create();
	p->data=x;
	p->next=NULL;
	t=start;
	while(t->next!=NULL)
	{
		t=t->next;
	}
	p->pre=t;
	t->next=p;
}
void display()
{
	struct node* p1;
	p1=start;
	if(start==NULL)
	{
		printf("Empty linked list!");
	}
	while(p1->next!=NULL)
	{
		printf("%d\n",p1->data);
		p1=p1->next;
	}
	printf("%d\n",p1->data);
}
struct node* find(int n)
{
	struct node *p;
	p=start;
	while(p->data!=n)
	{
		p=p->next;
	}
	return p;
}
void insert_after(struct node *s,int x)
{
	struct node *p;
	p=create();
	p->data=x;
	p->pre=s;
	p->next=s->next;
	s->next->pre=p;
	s->next=p;
}
void delete_first()
{
	struct node *t;
	if(start==NULL)
	{
		printf("empty linked list!\n");
	}
	else
	{
		t=start;
		start=start->next;
		start->pre=NULL;
		t->next=NULL;
		free(t);
	}
}
int main()
{
	int x;
	struct node *s;
	scanf("%d",&x);
	insert_start(x);
	insert_start(x);
	insert_start(x);
	insert_start(x);
	delete_first();
	delete_first();
	delete_first();
//	delete_first();
	display();
	return 0;
}


