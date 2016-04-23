#include<stdio.h>
typedef struct cll
{
    int data;
    struct cll *next;
}node;
node *head1;
node *head2;
node *cptr;
node *pptr;
node *iptr;
node *ptr;
node *ptr1;
node *ptr2;
node *conptr;
void create(node *);
void traverse(node *);
node* concatenation(node *,node *);
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
    create(ptr2);
    ptr2=head2;
    traverse(ptr2);
    }
    printf("CREATION COMPLETED\nCONCATENATION START\n");
    ptr1=head1;
    ptr2=head2;
    conptr=concatenation(ptr1,ptr2);
    printf("AFTER CONCATENATION\n");
    if(head1!=NULL)
    traverse(head1);
    printf("IF YOU WANT TO REPEAT WHOLE PROCESS PRESS 1\n");
    scanf("%d",&z);
 }while(z==1);
}
void create (node *ptr)
{   char y;
    cptr=ptr;
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
    ptr->next=cptr;
}
void traverse(node *ptr)
{
    cptr=ptr;
    printf("HEAD DATA IS =%d\n",(ptr->data));
    ptr=ptr->next;
    while(ptr!=cptr)
    {
        printf("NODE DATA = %d \n",(ptr->data));
        ptr=ptr->next;
    }
}
node* concatenation(node *ptr1,node *ptr2)
{
  if(ptr1==NULL && ptr2==NULL)
    {
    printf("BOTH LINKED LISTS ARE NULL SO CONCATENATION IS NOT POSSIBLE\n");//here is so many conditions.1st both pointers are null.2nd anyone is null.
    head1=NULL;//another no one is null.but when both are not null, then it can also be happen that any one or both have one element. in that situation,
    return NULL;//as usually we do to teaverse whole list and to find end of list,while(ptr->next!=ptr) fails and pointer don't enter in that loop as here
    } //ptr->next=ptr is true. so we have to place this condition also to properly concatenate that ptr->next=ptr and code individually about this case.

  else if(ptr1==NULL && ptr2!=NULL)
        {
        head1=ptr2;
        return ptr2;
        }
  else if(ptr1!=NULL && ptr2==NULL)
        {   head1=ptr1;
            return ptr1;
        }
else if(ptr1->next==ptr1)
    {
      ptr1->next=ptr2;
      while(ptr2->next!=ptr2)
      {
          cptr=ptr2;
          ptr2=ptr2->next;
      }
      cptr->next=ptr1;
  }
   else if(ptr2->next==ptr2)
  {
      pptr=ptr1;
    while(ptr1->next!=ptr1)
      {
          cptr=ptr1;
          ptr1=ptr1->next;
      }
      cptr->next=ptr2;
      ptr2->next=pptr;
      head1=pptr;
  }
else if(ptr1->next==ptr1 && ptr2->next==ptr2)
  {
      ptr1->next=ptr2;
      ptr2->next=ptr1;
      head1=ptr1;
  }
    else
  {
    cptr=iptr=ptr1;
    ptr1=ptr1->next;
    while(ptr1!=cptr)
    {
      pptr=ptr1;
      ptr1=ptr1->next;
    }
      cptr=ptr2;
      pptr->next=ptr2;
      ptr2=ptr2->next;
     while(ptr2!=cptr)
    {
      pptr=ptr2;
      ptr2=ptr2->next;
    }
    pptr->next=iptr;
  }
}
