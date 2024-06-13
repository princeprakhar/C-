#include<stdio.h>
struct b_node
{
	int info;
	struct b_node *left;
	struct b_node *right;
};
void pre_order(struct b_node *root)
{
	if(root)
	{
		printf("%d",root->info);
		pre_order(root->left);
		pre_order(root->right);
	}
}
void in_order(struct b_node *root)
{
	if(root)
	{
		in_order(root->left);
		printf("%d",root->info);
		in_order(root->right);
	}
}
void post_order(struct b_node *root)
{
	if(root)
	{
		post_order(root->left);
		post_order(root->right);
		printf("%d",root->info);
	}
}
void level_order(struct b_node *root)
{
	
}
