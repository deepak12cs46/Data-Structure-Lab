	#include<stdio.h>
	#include<conio.h>
	#include<alloc.h>
	struct list
	{
	int data;
	struct list *next,*prev;
	}*head=NULL;
	void main()
	{
	void insert();
	void del();
	int c;
	clrscr();

	/****************************************************************/

	printf("\n\tOUTPUT::\n");
	printf("\n\t1:insert \t\t2:delete\n\t3:exit");
	while(1)
	{
	printf("\n\tENTER CHOICE: ");
	scanf("%d",&c);
	switch(c)
	{
	case 1: insert();  break;
	case 2: del();  break;
	case 3: exit(1);
	}
	}
	}
	/*************************************************************/
	void insert()
	{
	struct list *temp,*new1,*pr;
	int pos,i=1;
	char ch;
	temp=head;
	printf("\tENTER POSITION TO BE INSERTED: ");
	scanf("%d",&pos);
	new1=(struct list*)malloc(sizeof(struct list));
	printf("\tENTER DATA: ");
	scanf("%d",&new1->data);
	if(pos==1)
	{
	new1->next=temp;
	head=new1;
	}
	else
	{
	while(i<pos)
	{
	pr=temp;
	temp=temp->next;
	i++;
	}
	temp->prev=new1;
	new1->next=temp;
	new1->prev=pr;
	pr->next=new1;
	}
	}
	/****************************************************************/
	void del()
	{
	struct list *temp,*pr,*t;
	int pos,i=1;
	temp=pr=head;
	printf("\tENTER POSITION TO BE DELETED: ");
	scanf("%d",&pos);
	  temp=head;
	while(i<pos)
	{
	pr=temp;
	temp=temp->next;
	i++;
	}
	t=temp;
	temp=temp->next;
	pr->next=temp;
	temp->prev=pr;
	free(t);
	}
