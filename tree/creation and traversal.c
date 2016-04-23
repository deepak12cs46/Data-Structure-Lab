#include<stdio.h>
#include<stdlib.h>
typedef struct tree
{
    int data;
    struct tree *leftnext;
    struct tree *rightnext;
}node;
node *ptr;
node *root;
node *start;
void create (node *);
node* preorder(node *);
node* inorder(node *);
node* postorder(node *);
void main()
{
    int t,d,a,b;
printf("WANT TO CREATE NULL TREE? 1\n");
scanf("%d",&t);
if(t==1)
    root=NULL;
 else {
    root=(node *)malloc(sizeof(node));
 ptr=root;
 create(ptr);
 ptr=root;
 }
 printf("CREATION COMPLETED\nNOW TRAVERSAL STARTS\n 1 PREORDER\n2 INORDER\n3 POSTORDER\n");
 scanf("%d",&d);
 ptr=root;
 if (ptr!=NULL){
        if(d==1)
    preorder(ptr);
 else if(d==2)
    inorder(ptr);
 else if(d==3)
    postorder(ptr);
 else printf("WRONG CHOICE\n");
}
}
void create(node *ptr)
{
    int a,b;
   start=ptr;
 printf("ENTER VALUE IN NODE\n");
 scanf("%d",&ptr->data);
 printf("LEFTCHILD:CONTINUE ? 1 ");
 scanf("%d",&a);
 if(a==1)
 {
     ptr->leftnext=(node *)malloc(sizeof(node));
     ptr=ptr->leftnext;
     create(ptr);
 }
 else ptr->leftnext=NULL;
 ptr=start;
 printf("RIGHTCHILD: CONTINUE ? 1 \n");
 scanf("%d",&b);
if(b==1)
 {
     ptr->rightnext=(node *)malloc(sizeof(node));
     ptr=ptr->rightnext;
     create(ptr);
 }
else ptr->rightnext=NULL;
}
node * preorder(node *ptr)
{
    if(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        preorder(ptr->leftnext);
        postorder(ptr->rightnext);
    }
    else return ptr;
}
node * inorder(node *ptr)
{
    if(ptr!=NULL)
    {
        preorder(ptr->leftnext);
        printf("%d\n",ptr->data);
        postorder(ptr->rightnext);
    }
    else return ptr;
}
node * postorder(node *ptr)
{
    if(ptr!=NULL)
    {   preorder(ptr->leftnext);
        postorder(ptr->rightnext);
        printf("%d\n",ptr->data);
    }
    else return ptr;
}
