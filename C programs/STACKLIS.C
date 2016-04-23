



	     /* PROGRAM TO PERFORM ALL POSSIBLE ACTIONS ON STACKS*/
		 /*   USING SINGLE LINKED LIST */

	#include<stdio.h>
	#include<conio.h>
	struct node
	{
	int data;
	struct node *ptr;
	};
	struct stack
	{
	struct node *top;
	}*p=NULL;
	void main()
	{
	void push();
	void pop();
	void display();
	int ch;
	p->top=NULL;
	clrscr();
	printf("\n\tOUTPUT::\n");
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
	case 4: exit();
	}}}

	void push()
	{
	struct node *ne;
	ne=(struct node *)malloc(sizeof(struct node));
	printf("\n\tEnter value for stack: ");
	scanf("%d",&ne->data);
	ne->ptr=p->top;
	p->top=ne;
	}

	void pop()
	{
	struct node *temp;
	if(p->top==NULL)
	printf("\n\tStack is underflow");
	else
	{
	temp=p->top;
	p->top=temp->ptr;
	printf("\n\tRemoved value is:  %d",temp->data);
	free(temp);
	}
	}

	void display()
	{
	struct node *temp;
	temp=p->top;
	if(temp==NULL)
	printf("\n\tStack is empty");
	else
	{
	printf("\n\tElements in the stack are:  \n\t");
	for(;temp!=NULL;temp=temp->ptr)
	printf("\n\t%3d",temp->data);
	}
	}






