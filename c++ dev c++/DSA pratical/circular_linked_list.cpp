#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
typedef struct node Node;
Node * create_linked_lest(Node* last),int data;
void display(Node* last);
Node* addToEmpty(Node* last,int data);
Node* add_begin(Node* last,int data);
Node* add_end(Node* last,int data);
Node* addAfter(Node* last,int data);
Node* del(Node* last);
void display(Node* last)
{
	Node* n;
	n=last->next;
	if(n==NULL)
	{
		printf("Empty linked list!");
	}
	printf("%d\t",n->data);
	n=n->next;
	while(n!=last->next)
	{
		printf("%d\t",n->data);
		n=n->next;
	}
}
Node*
