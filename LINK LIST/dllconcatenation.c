#include<stdio.h>
typedef struct dll
{
    int data;
    struct dll *next;
    struct dll *pre;
}node;
node *head1;
node *head2;
node *ptr;
node *ptr1;
node *ptr2;
node *nptr;
void create(node *);
void traverse(node *);
void concatenation(node *,node *);
void main()
{   int t,u,z;
 do{
    printf("FIRST LINKED LIST\n");
    head1=(node *)malloc(sizeof(node));
    printf("IF YOU WANT TO CREATE NULL  LINKED LIST PRESS 1 ELSE PRESS ANYTHING\n");
    scanf("%d",&t);
    if(t==1)
        head1=NULL;
    else
   {
    ptr1=head1;
    head1->pre=NULL;
    create(ptr1);
    ptr1=head1;
    traverse(ptr1);
   }
    printf("SECOND LINKED LIST\n");
    head2=(node *)malloc(sizeof(node));
    printf("IF YOU WANT TO CREATE NULL  LINKED LIST PRESS 1 ELSE PRESS ANYTHING\n");
    scanf("%d",&u);
    if(u==1)
        head2=NULL;
    else
    {
    ptr2=head2;
    head2->pre=NULL;
    create(ptr2);
    ptr2=head2;
    traverse(ptr2);
    }
    printf("CREATION COMPLETED\nCONCATENATION START\n");
    ptr1=head1;
    ptr2=head2;
    concatenation(ptr1,ptr2);
    printf("AFTER CONCATENATION\n");
    if(head1!=NULL)
    traverse(head1);
    printf("IF YOU WANT TO REPEAT WHOLE PROCESS PRESS 1\n");
    scanf("%d",&z);
 }while(z==1);
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
        {   nptr=(node *)malloc(sizeof(node));
            nptr->pre=ptr;
            ptr->next=nptr;
            ptr=nptr;
        }
    }while(y=='y');
    ptr->next=NULL;
}
void traverse(node *ptr)
{
    printf("HEAD DATA IS =%d\n",(ptr->data));
    ptr=ptr->next;
    while(ptr!=NULL)
    {
        printf("NODE DATA = %d \n",(ptr->data));
        ptr=ptr->next;
    }
}
void concatenation(node *ptr1,node *ptr2)
{
  if(ptr1==NULL && ptr2==NULL)
    {
    printf("BOTH LINKED LISTS ARE NULL SO CONCATENATION IS NOT POSSIBLE\n");
    head1=NULL;
    }
else if(ptr1==NULL)
{
    head1=ptr2;
}
else{
while(ptr1->next!=NULL)
{
    ptr1=ptr1->next;
}
ptr1->next=ptr2;
}
}
