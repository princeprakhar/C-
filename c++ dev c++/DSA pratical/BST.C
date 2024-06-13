
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
typedef struct node {
    int key;
    struct node *left, *right;
};

// A utility function to create a new BST node
struct node* newNode(int item)
{
    struct node* temp
	= (struct node*)malloc(sizeof(struct node));

    temp->key = item;
    temp->left = temp->right = NULL;
    printf("\n\tnew node ceated.temp=%u with val %d",temp,temp->key);
    return temp;
}

// A utility function to do inorder traversal of BST
void inorder(struct node* root)
{
    if (root != NULL) {
	inorder(root->left);
	printf("%d \n", root->key);
	inorder(root->right);

    }
}

/* A utility function to insert
   a new node with given key in
 * BST */
struct node* insert(struct node* node, int key)
{
    /* If the tree is empty, return a new node */
    if (node == NULL)
	return newNode(key);

    /* Otherwise, recur down the tree */
    if (key < node->key)
    {
	node->left = insert(node->left, key);
	printf("\nnode is created left of %d",node->key);
    }
    else if (key > node->key)
    {
	node->right = insert(node->right, key);
	printf("\nnode is created right of %d",node->key);
    }


    /* return the (unchanged) node pointer */
    return node;
}

// Driver Code
int main()
{

    struct node* root = NULL;
    int n,ch,i;
    clrscr();
    do
    {
	printf("\n\t*****to insert press 1, inorder display 2******");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\n Ntr the val");
			scanf("%d",&n);
			if(root==NULL)
				root = insert(root,n);
			else
				insert(root,n);
			break;
		case 2:    // print inoder traversal of the BST
			inorder(root);
			break;
		default:
			printf("wrong ntry");
	}
	printf("\npress 1 to continue 0 to exit");
	scanf("%d",&i);
    }while(i);

    return 0;
}

// C function to search a given key in a given BST
struct node* search(struct node* root, int key)
{
    // Base Cases: root is null or key is present at root
    if (root == NULL || root->key == key)
       return root;

    // Key is greater than root's key
    if (root->key < key)
       return search(root->right, key);

    // Key is smaller than root's key
    return search(root->left, key);
}