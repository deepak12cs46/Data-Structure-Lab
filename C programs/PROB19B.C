	 /* PROGRAM TO PERFORM ALL POSSIBLE ACTIONS ON QUEUES */
		 /*   USING SINGLE LINKED LIST */

	#include<stdio.h>
	#include<stdlib.h>
	struct queue
	{
	int data;
	struct queue *next;
	}*front=NULL,*rear=NULL;

	void main()
	{
	void insert();
	void delet();
	void display();
	int ch;
	clrscr();
	printf("\n\tOUTPUT\n");
	printf("\n\tQUEUE IMPLEMENTATION USING LINKED LIST\n");
	printf("\n\t1: INSERT\n\t2: DELETE\n\t3: DISPLAY\n\t4: EXIT");
	while(1)
	{
	printf("\n\nEnter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:   insert();     break;
	case 2:   delet();      break;
	case 3:   display();   break;
	case 4:   exit(1);      break;
	default:printf("\nInvalid option");
	}
	}
	}

	void insert()
	{
	struct queue *new1;
	new1=(struct queue*)malloc(sizeof(struct queue));
	printf("Enter data to insert  into queue:");
	scanf("%d",&new1->data);
	new1->next=NULL;
	if(front==NULL)
	front=new1;
	else rear->next=new1;
	rear=new1;
	}

	void delet()
	{
	struct queue *temp,*prev;
	if(front==NULL)
	printf("\nQueue is underflow");
	else
	{
	temp=front;
	printf("\nDeleted element is :%d",temp->data);
	front=temp->next;
	if(front==NULL)
	rear=NULL;
	free(temp);
	}
	}
	void display()
	{
	struct queue *temp;
	temp=front;
	printf("\n\n");
	printf("Queue elements are:");
	while(temp!=NULL)
	{
	printf(" \t%d",temp->data);
	temp=temp->next;
	}
	}