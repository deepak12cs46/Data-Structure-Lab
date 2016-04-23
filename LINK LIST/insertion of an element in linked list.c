#include<stdio.h>
#include<stdlib.h>

typedef struct linked_list
    {
        int data;
        struct linked_list *add;
    }node;
    node *ptr;
    int num;
void create (node *ptr);
void display (node *ptr);
void inser (node *ptr);
void main()
{
    ptr=(node *)malloc(sizeof(node));
    create(ptr);
    printf("created list is below\n");
    display(ptr);
    inser (ptr);
    printf("LIST AFTER INSERTION\n");
    display(ptr);
    getchar();
    }
void create(node *ptr)
{
    char ch;
    num=0;
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
    num++;
}while(ch=='y');
ptr->add=NULL;
printf("TOTAL NODES =%d\n",num);
}
void display(node *ptr)
{
   while(ptr!=NULL)
        {
            printf("NODE DATA %d at location %d\n",ptr->data,ptr);
            ptr=ptr->add;
        }
}
void inser (node *ptr)
{
    node *new1;
    int i,nodeno;
    new1=(node *)malloc(sizeof(node));
    printf("ENTER NODE NO WHERE YOU WANT TO INSERT\t ");
    scanf("%d",&nodeno);
    printf("ENTER ELEMENT YOU WANT TO ENTER\t");
    scanf("%d",&new1->data);
    if(nodeno==1)
    {
        new1->add=ptr;
        ptr=new1;
    }
    else if(nodeno==num)
    {
        while(ptr->add!=NULL)
            ptr=ptr->add;
            ptr->add=new1;
            new1->add=NULL;
    }
    else
    {
        for(i=1;i<nodeno-1;i++)
        ptr=ptr->add;
        new1->add=ptr->add;
        ptr->add=new1;
    }
}
