#include<stdio.h>
#include<stdlib.h>
typedef struct linked_list
    {
        int data;
        struct linked_list *next;
    }node;
    node *ptr;
    node *start1;
    node *start2;
    node *ptr1;
    node *ptr2;
    void create(node *ptr);
    void display(node *ptr);
    void main ()
    {
        int t,u;
        printf("INSERTION IN FIRST LINKED LIST STARTS\n");
        printf("IF YOU WANT TO CREATE NULL LINKED LIST PRESS 1 OTHERWISE PRESS ANYTHING ELSE\n");
        scanf("%d",&t);
        if(t==1)
            start1=NULL;
        else {
        start1=(node *)malloc(sizeof(node));
        ptr1=start1;
        create(ptr1);
        ptr1=start1;
        display(ptr1);
        }
         printf("IF YOU WANT TO CREATE NULL LINKED LIST PRESS 1 OTHERWISE PRESS ANYTHING ELSE\n");
        scanf("%d",&u);
        if(u==1)
            start2=NULL;
        else {
        printf("INSERTION IN SECOND LINKED LIST STARTS\n");
        start2=(node *)malloc(sizeof(node));
        ptr2=start2;
        create(ptr2);
        ptr2=start2;
        display(ptr2);
        }
        printf("AFTER CONATENATION\n");
        if ((start1==NULL) && (start2==NULL))
            printf("NULL LINKED LIST\n");
       else if((start1==NULL) && (start2!=NULL))
            ptr=start2;
        else if((start1!=NULL) && (start2==NULL))
        ptr=start1;
        else{
        ptr=start1;
        while(ptr->next!=NULL)
            ptr=ptr->next;
        ptr->next=start2;
        ptr=start1;
      }
        display(ptr);
}
void display(node *ptr)
{
while(ptr!=NULL)
        {
            printf("NODE DATA %d at location %d\n",ptr->data,ptr);
            ptr=ptr->next;
        }
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
    ptr->next=(node *)malloc(sizeof(node));
    ptr=ptr->next;
    }
}while(ch=='y');
ptr->next=NULL;
}
