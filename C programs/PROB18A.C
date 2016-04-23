
	// PROGRAM TO CREATE,INSERT,DELETE AND DISPLAY A LINKED LIST
	#include<stdio.h>
	#include<conio.h>
	#include<alloc.h>
	struct list
	{
	int data;
	struct list *next;
	}*head=NULL;

	void main()
	{

	void create();
	void insert();
	void display();
	void insbeg();
	void insend();
	void delbeg();
	void delend();
	void del();
	int c;
	clrscr();

	/****************************************************************/

	printf("\n\tOUTPUT::\n");
	printf("\n\t1: CREATE\t\t2:DISPLAY");
	printf("\n\t3: INSERT\t\t4: INSERT AT BEGINNING");
	printf("\n\t5: INSERT AT END\t6: DELETE AT BEGINNING");
	printf("\n\t7: DELETE AT END\t8: DELETE\n\t9: EXIT");

	while(1)
	{
	printf("\n\tENTER CHOICE: ");
	scanf("%d",&c);
	switch(c)
	{
	case 1: create();  break;
	case 2: display(); break;
	case 3: insert();  break;
	case 4: insbeg();  break;
	case 5: insend();  break;
	case 6: delbeg();  break;
	case 7: delend();  break;
	case 8: del();  break;
	case 9: exit(1);
	}
	}

	getch();
	}
	/*************************************************************/

	void create()
	{
	char ch;
	struct list *temp,*new1;
	head=(struct list *)malloc(sizeof(struct list));
	printf("\tENTER DATA: ");
	scanf("%d",&head->data);
	temp=head;
	fflush(stdin);
	printf("\tCONTINUE(y/n):  ");
	scanf("%c",&ch);
	while(ch=='y')
	{
	new1=(struct list*)malloc(sizeof (struct list));
	printf("\tENTER DATA: ");
	scanf("%d",&new1->data);
	temp->next=new1;
	temp=new1;
	fflush(stdin);
	printf("\tCONTINUE(y/n):  ");
	scanf("%c",&ch);
	}
	temp->next=NULL;
	}

	/*****************************************************************/

	void display()
	{
	struct list *temp;
	temp=head;
	printf("\tLINKED LIST IS::  ");
	while(temp!=NULL)
	{
	printf("%3d-->",temp->data);
	temp=temp->next;
	}
	}

	/****************************************************************/

	void insert()
	{
	struct list *temp,*new1;
	int pos,i=1;
	char ch;
	temp=head;
	printf("\tENTER POSITION TO BE INSERTED: ");
	scanf("%d",&pos);
	new1=(struct list*)malloc(sizeof(struct list));
	printf("\tENTER DATA: ");
	scanf("%d",&new1->data);
	while(i<pos-1)
	{
	temp=temp->next;
	i++;
	}
	new1->next=temp->next;
	temp->next=new1;
	}


	/****************************************************************/

	void insbeg()
	{
	struct list *new1;
	char ch;
	new1=(struct list*)malloc(sizeof(struct list));
	printf("\tENTER DATA: ");
	scanf("%d",&new1->data);
	new1->next=head;
	head=new1;
	}

	/****************************************************************/

	void insend()
	{
	struct list *new1,*temp;
	char ch;
	new1=(struct list *)malloc(sizeof(struct list));
	temp=head;
	printf("\tENTER DATA: ");
	scanf("%d",&new1->data);
	while(temp->next!=NULL)
	temp=temp->next;
	temp->next=new1;
	new1->next=NULL;
	}

	/****************************************************************/

	void delbeg()
	{
	struct list *temp;
	temp=head;
	head=head->next;
	free(temp);
	}

	/****************************************************************/

	void delend()
	{
	struct list *temp,*prev;
	temp=prev=head;
	while(temp->next!=NULL)
	{
	prev=temp;
	temp=temp->next;
	}
	prev->next=NULL;
	free(temp);
	}

	/****************************************************************/

	void del()
	{
	struct list *temp,*prev;
	int pos,i=1;
	temp=prev=head;

	printf("\tENTER POSITION TO BE DELETED: ");
	scanf("%d",&pos);

	while(i<pos)
	{
	prev=temp;
	temp=temp->next;
	i++;
	}
	prev->next=temp->next;
	free(temp);

	}









