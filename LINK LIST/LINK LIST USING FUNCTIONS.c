#include<stdio.h>
#include<stdlib.h>

typedef struct linked_list
    {
        int data;
        struct linked_list *add;
    }node;
    node *ptr;
void create (node *ptr);
void display (node *ptr);
void main()
{
    ptr=(node *)malloc(sizeof(node));
    create(ptr);
    printf("created list is below\n");
    display(ptr);
    getchar();
    }
void create(node *ptr)
{
    char ch;
    do{
    printf("ENTER ELEMENTS IN LINKED LIST\n");
    scanf("%d",&ptr->data);
    fflush(stdin);
    printf("want to continue y/n\n");
    ch=getchar();
    if(ch=='y')
    {
    ptr->add=(node *)malloc(sizeof(node));
    ptr=ptr->add;
    }
}while(ch=='y');
ptr->add=NULL;
}
void display(node *ptr)
{
   while(ptr!=NULL)
        {
            printf("NODE DATA %d at location %d\n",ptr->data,ptr);
            ptr=ptr->add;
        }
}
