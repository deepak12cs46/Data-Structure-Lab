#include<stdio.h>
typedef struct cll
{
    int data;
    struct cll *next;
}node;
node *head;
node *ptr;
void create(node *);
void traverse(node *);
void main()
{  int t;
    printf("IF YOU WANT TO CREAATE NULL LINKED LIST PRESS 1 OTHERWISE ANYTHING ELSE\n");
    scanf("%d",&t);
    if (t==1)
        head=NULL;
    else {head=(node *)malloc(sizeof(node));
    ptr=head;
    create(head);
    printf("CREATION COMPLETED\n");
    traverse(head);
    }
}
void create (node *ptr)
{   char y;
    do
    {
        printf("ENTER DATA IN NODE\n");
        scanf("%d",&ptr->data);
        printf("IF YOU WANT TO CONTINUE PLEASE PRESS y ELSE ANYTHING OTHER\n");
        fflush(stdin);
        scanf("%c",&y);
        if(y=='y')
        {   ptr->next=(node *)malloc(sizeof(node));
            ptr=ptr->next;
        }
    }while(y=='y');
    ptr->next=head;
}
void traverse(node *ptr)
{
    printf("HEAD DATA IS =%d\n",(ptr->data));
    ptr=ptr->next;
    while(ptr!=head)
    {
        printf("NODE DATA = %d \n",(ptr->data));
        ptr=ptr->next;
    }
}
