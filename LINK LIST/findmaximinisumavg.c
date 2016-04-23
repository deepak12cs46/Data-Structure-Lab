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
void main()
{
    int maxi,mini,sum=0,n=0;
    ptr=(node *)malloc(sizeof(node));
    start=ptr;
    create(start);
    ptr=start;
    maxi=ptr->data;
    mini=ptr->data;
    while(ptr!=NULL)
    {
        if(maxi<ptr->data)
            maxi=ptr->data;
        if(mini>ptr->data)
            mini=ptr->data;
         sum=sum+ptr->data;
        ptr=ptr->next;
        n++;
    }
    printf("\nmaximum no. is\t%d\nminimum no. is\t%d\nsum of list is\t%d\navg of list is \t %d",maxi,mini,sum,sum/n);
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
