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
    int create(node *ptr);
    void main ()
    {
        start1=(node *)malloc(sizeof(node));
        ptr1=start1;
        create(start1);
        start2=(node *)malloc(sizeof(node));
        ptr2=start2;
        create(start2);
        ptr=ptr1;
        while(ptr1->next!=NULL)
            ptr1=ptr1->next;
        ptr1->next=ptr2;
        while(ptr!=NULL)
        {
            printf("NODE DATA %d at location %d\n",ptr->data,ptr);
            ptr=ptr->next;
        }
    }
int create(node *ptr)
{
    char chr,ch;
    printf("want empty list 'e'?");
    scanf("%c",&chr);
    if(chr=='e')
       {
    ptr=NULL;
    return (ptr);
       }
   else
   {
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
}
