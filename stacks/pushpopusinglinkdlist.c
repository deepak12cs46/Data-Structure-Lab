#include<stdio.h>
#include<stdlib.h>
typedef struct linked_list
{
    int data;
    struct linked_list *next;
}node;
node *start;
node *ptr;
node *head;
node *last;
node *top;
node *push (node *);
node *pop (node *);
void display(node *);
void main ()
{
    int t;
    char ch;
top=NULL;//i made it null so that it should be a mark of end point of list.i tried so much to write push function without return type but it was too
//hard becsuse in void type, pointer returns to main function and top assigned to null every time so list's element had no relation as every element was
 //pointing to null so at last i made it of return type and as we know in return type pointer returns value to that calling line.
  do
    {
        printf("PRESS 'i' FOR PUSH\nPRESS 'o' FOR POP \nPRESS 'e' FOR EXIT\n");
        fflush(stdin);
        scanf("%c",&ch);
if(ch=='i')
 top=push(top);
else if(ch=='o')
  top=pop(top);
else exit(1);
    printf("IF YOU WANT TO CONTINUE THE PROCESS PRESS 1 ELSE EXIT WOULD BE HAPPEN\n");
        fflush(stdin);
        scanf("%d",&t);
}while(t==1);
}
node *push (node *top)
{
    ptr=(node *)malloc(sizeof(node));
    printf("ENTER NODE DATA\n");
    scanf("%d",&ptr->data);
    ptr->next=top;
    top=ptr;
    display(top);
    return(top);
}
node *pop (node *top)
{
    if(top==NULL)
        printf("UNDERFLOW & EXIT");
    else
{
    ptr=top;
top=top->next;
free(ptr);
display (top);
return (top);
}
}
void display(node *ptr)
{
if(ptr==NULL)
    printf("STACK IS EMPTY\n");
else
    while(ptr!=NULL)
    {
        printf("AT LOCATION %d NODE DATA IS %d\n",ptr,ptr->data);
        ptr=ptr->next;
    }
}
