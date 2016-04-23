

 /* implementation of stacks using arrays*/
 #include<stdio.h>
 #include<string.h>
 #include<ctype.h>
 #define size 100
 int top=-1;
 int flag=0;
 int stack[size];
 void push(int *,int);
 int pop(int *);
 void display(int *);
 void push(int s[],int d)
 {
 if(top==(size-1))
 flag=0;
 else
 {
 flag=1;
 ++top;
 s[top]=d;
 }
 }
 int pop(int s[])
 {
 int popped_element;
 if(top==-1)
 {
 popped_element=0;
 flag=0;
 }
 else
 {
 flag=1;
 popped_element=s[top];
 --top;
 }
 return(popped_element);
 }
 void display(int s[])
 {
 int i;
 if(top==-1)
 {
 printf("\n stack is empty");
 }
 else
 {
 for(i=top;i>=0;--i)
 printf("\n %d",s[i]);
 }
 }
 /* this is the main function */
 void main()
 {
 int data;
 char choice;
 int q=0;
 int top=-1;
 clrscr();
 do
 {
 printf("\n push->i pop->p quit->q:");
 printf("enter your choice");
 do
 {
 choice=getchar();
 choice=tolower(choice);
 }
 while(strchr("ipq",choice)==NULL);
 printf("your choice is %c",choice);
 switch(choice)
 {
 case'i':printf("\n input element to push");
 scanf("%d",&data);
push(stack,data);
if(flag)
{
printf("\n after inserting ");
display(stack);
if(top==(size-1))
printf("\n stack is full");
}
else
printf("\n stack is overflown after pushing");
break;
case 'p':data=pop(stack);
	 if(flag)
{
printf("\n data is popped:%d",data);
printf("\n now the stack is as follows :\n");
display(stack);
}
else
printf("\n stack is underflown");
break;
case'q':q=1;
}
}
while(!q);
}

























































































































































