//Program to implement stacks by using arrays

int stack[10],top=-1;
#include<stdio.h>
#define max 5
void main()
{

int ch,k;

clrscr();
printf("\nStack operations\n");
printf("1.push\n2.pop\n3.dispaly\n4.exit\n\n");
while(1)
{
printf("Enter ur choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
	break;
case 2: k=pop();
	printf("popped element is:%d\n",k);
	break;
case 3: display();
	break;
case 4: exit();
default:printf("Invalid option");
}
}
getch();
}

push()
{
int x;
if(top==max-1)
printf("Stack is overflow\n");
else
{
printf("Enter element to push:");
scanf("%d",&x);
top++;
stack[top]=x;
}
}

int pop()
{
int a;
if(top==-1)
{
printf("Stack is underflow\n");
getch();
exit();
}
else
{
a=stack[top];
top--;
return(a);
}
}

display()
{
int i;
printf("\nStack elements are\n");
for(i=top;i>=0;i--)
printf("%d\n",stack[i]);
}


