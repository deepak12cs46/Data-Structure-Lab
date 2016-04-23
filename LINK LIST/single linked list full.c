#include<stdio.h>
#include<stdlib.h>
typedef struct linked_list
    {
        int data;
        struct linked_list *next;
    }node;
    node *ptr;
    node *start;
    node *new1;
void create (node *ptr);
void display (node *ptr);
void insrt (node *ptr);
void delet (node *ptr);
void serch(node *ptr);
void main()
{
    char c;
    int p;
    ptr=(node *)malloc(sizeof(node));
    start=ptr;
    create(start);
   do{
        printf(" PLEASE PRESS 'i' IF YOU WANT TO INSERT \n PLEASE PRESS 'd' IF YOU WANT TO DELET\n PLEASE PRESS 's' IF YOU WANT SEARCHING\n PLEASE PRESS 'e' IF YOU DON'T WANT FURTHURE PROCESSING AND EXIT TO THIS PROGRAM\n");
    fflush(stdin);
    c=getchar();
    if(c=='i')
    insrt(start);
   else if(c=='d')
    delet(start);
    else if(c=='s')
    serch(start);
   else if(c=='e')
        exit(1);
    printf(" PLEASE PRESS 1 TO CONTINUE INSERTION OR DELETION ANYTHING ELSE TO EXIT PROGRAM\n");
    fflush(stdin);
    scanf("%d",&p);
   }
   while(p==1);
   getchar();
}
void create(node *ptr)
{
    char ch,chr;
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
void insrt (node *ptr)
{
  int b,t;
  new1=(node *)malloc(sizeof(node));
  printf("PLEASE PRESS 1 IF YOU WANT TO INSERT IN STARTING AND 2 FOR INSERTING IN SOMEWHEER BETWEEN\n");
  scanf("%d",&t);
  if(t==1)
  {
      printf("INSERT NEW NODE DATA\n");
      scanf("%d",&new1->data);
      new1->next=ptr;
      start=new1;
  }
  else if(t==2)
    {
  printf("INSERTION CAN BE ONLY DONE IN THE WAY AS NEW1-DATA AFTER b\n");
  printf("INSERT DATA AFTER WHICH YOU WANT TO INSERT b\n");
  scanf("%d",&b);
  printf("INSERT NEW NODE DATA\n");
  scanf("%d",&new1->data);
  fflush(stdin);
  while ((ptr->next!=NULL) && (ptr->data!=b))
    ptr=ptr->next;
  if(ptr->data==b)
  {
      new1->next=ptr->next;
      ptr->next=new1;
  }
  else if (ptr->next==NULL)                                   //here it was giving error because i was writing ptr only at place of ptr->next.so i came to know that
    printf("UNSUCCESSFULL SEARCH DUE TO ABSENCE OF b\n");      //no one pointer become null. it is next to pointer which becomes null. so dont this mistake.
   }
    display(start);
}
void delet (node *ptr)
{
    int b;
    printf("ENTER NODE DATA WHICH YOU WANT TO DELETE\n");
    scanf("%d",&b);
    if (ptr==NULL)
    {
        printf("LIST IS EMPTY\n");
        exit(2);
    }
    else if (ptr->data==b)
    {
        ptr=ptr->next;
        start=ptr;
    }
    else if ((ptr->data!=b) && (ptr->next!=NULL))
    {
        while ((ptr->data!=b) && (ptr->next!=NULL))
    {
     new1=ptr;
     ptr=ptr->next;
    }
    if(ptr->data==b)
        new1->next=ptr->next;
    else
        printf("UNSUCCESSFULL SEARCH DUE TO ANSENCE OF NODE DATA WHICH YOU WANT DELETE\n");
    }
    display(start);
}
void serch(node *ptr)
{
    int s;
    printf("ENTER ELEMENT TO BE SEARCHED\n");
    scanf("%d",&s);
    while((ptr->next!=NULL) && (ptr->data!=s))
    {
     ptr=ptr->next;
    }
    if(ptr->data==s)
        printf("SUCCESSFULL DEARCH\n");
    else
        printf("UNSUCCESSFULL SEARCH\n");
}
