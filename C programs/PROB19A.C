		/* PROGRAM TO PERFORM ALL POSSIBLE ACTIONS ON STACKS*/
		 /*   USING SINGLE LINKED LIST */

	#include<stdio.h>
	#include<conio.h>
	#include<stdlib.h>
	struct stack
	{
	int data;
	struct stack *next;
	}*top=NULL;


	void main()
	{
	void push();
	void pop();
	void display();
	int ch;
	top->next=NULL;
	clrscr();
	printf("\n\tOUTPUT\n");
	printf("\n\tSTACK USING LINKED LIST\n");
	printf("\n\t1: PUSH\n\t2: POP\n\t3: DISPLAY\n\t4: EXIT");
	while(1)
	{
	printf("\n\tEnter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1: push();     break;
	case 2: pop();      break;
	case 3: display();  break;
	case 4: exit(1);
	}
	}
	}

	void push()
	{
	struct stack *new1;
	new1=(struct stack *)malloc(sizeof(struct stack));
	printf("\n\tEnter value for stack: ");
	scanf("%d",&new1->data);
	new1->next=top->next;
	top->next=new1;
	}

	void pop()
	{
	struct stack *temp;
	if(top->next==NULL)
	printf("\n\tStack is underflow");
	else
	{
	temp=top->next;
	top->next=temp->next;
	printf("\n\tRemoved value is:  %d",temp->data);
	free(temp);
	}
	}

	void display()
	{
	struct stack *temp;
	temp=top->next;
	if(temp==NULL)
	printf("\n\tStack is empty");
	else
	{
	printf("\n\tElements in the stack are:  \n\t");
	while(temp!=NULL)
	{
	printf("\n\t%3d",temp->data);
	temp=temp->next;
	}
	}
	}





