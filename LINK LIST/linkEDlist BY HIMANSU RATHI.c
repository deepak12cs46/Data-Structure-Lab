//to create and display link list
#include<stdio.h>
#include<stdlib.h>
typedef struct link_list
{
int data;
struct link_list *next;
}node;
node *start;
int num,count=1;
void create(node *);
void display(node *);
int search(node *,int);
void main()
{
 int flag,find;
 start=(node*) malloc(sizeof(node));
 create(start);
 printf("\n\ncreated list is as follows\n");
 display(start);
 printf("\nEnter element to be searched\n");
 scanf("%d",&find);
 flag=search(start,find);
 if(flag==1)
 printf("\n\nSuccessful search at %d from beginning of list\n\n",count);
 else
 printf("Unsuccesful search");
 free(start);
 getch();
}
void create(node *ptr)
{
  char ch;
  num=0;
  printf("Enter E for Exit or any other key for continue:");
  ch=getchar();
  if(ch=='e'||ch=='E')
    {
      free(ptr);
      exit(0);
    }
   do
    {
      printf("\n Input the values of node %d: \n",(num+1));
      scanf("%d",&ptr->data);
      printf("\n want to continue(y/n)--->: ");
      ch=getch();
      printf("%c",ch);
      if(ch=='y'||ch=='Y')
        {
          ptr->next=(node *)malloc(sizeof(node));
          ptr=ptr->next;
        }
      num++;
    }while(ch=='y'||ch=='Y');
   ptr->next=NULL;
   printf("\n\nTotal nodes= %d",num);
   }
   void display(node *ptr)
   {
     while(ptr!=NULL)
      {
        printf("\n\n%d is at the address %u\n\n",ptr->data,ptr);
        ptr=ptr->next;
      }
    }
  int search(node *ptr,int find)
  {
      int flag=0;
      if(ptr==NULL)
      printf("\nList is empty\n\n");
      while(ptr!=NULL)
       {
       if((ptr->data)==find)
        {
            flag=1;
            break;
        }
        ptr=ptr->next;
        count++;
       }
       return flag;
  }
