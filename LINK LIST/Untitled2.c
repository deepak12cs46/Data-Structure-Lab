#include<stdio.h>
#include<stdlib.h>
typedef struct linked_list
    {
        int data;
        struct linked_list *next;
    }node;
    node *ptr;
    node *start;
    node *start1;
    node *start2;
    node *ptr1;
    void display(node *ptr);
    void create(node *ptr);
void create(node *ptr)
{
    char ch,chr;
    start=ptr;
    printf(" PLEASE PRESS 'e' IF YOU WANT TO CREATE BLANK LINKED LIST ELSE CONTINUE\n");
    chr=getchar();
    while(chr=='e')
        exit(2);
    do{
    printf("ENTER ELEMENTS IN LINKED LIST\n");
    scanf("%d",&ptr->data);
    fflush(stdin);
    printf("want to continue y/n\n");
    ch=getchar();
    if(ch=='y')
    {
    ptr->next=(node *)malloc(sizeof(node));
    ptr=ptr->next;
    }
}while(ch=='y');
ptr->next=NULL;
display(start);
}
void display(node *ptr)
{
   while(ptr!=NULL)
        {
            printf("NODE DATA %d at location %d\n",ptr->data,ptr);
            ptr=ptr->next;
        }
}
