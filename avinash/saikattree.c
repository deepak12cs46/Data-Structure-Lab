#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct link
{
	int data;
	struct link *right;
	struct link *left;

};
typedef struct link node;
int choice=1;
node new_node();
node* create_tree(node*root)
{
	printf("\n enter data");
	scanf("%d",&(root->data));
	printf("\n press 0 to exit and press 1 to continue");
	scanf("%d",&choice);
	if(choice)
	tree->left=create_tree(new_node());
	else tree->left=NULL;
	printf("\n press 1 to continue and 0 to exit");
	scanf("%d",&choice);
	if(choice==1)
	tree->right=create_tree(new_node());
	else tree->right=NULL;


}
node new_node()
{
	node*subnode=(node*)malloc(sizeof(node));
	return subnode;
}
void main()
{
	node*root;
	root=new_node();
	create_tree(root);
}
