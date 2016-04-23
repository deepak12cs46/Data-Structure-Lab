#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 20

int top=-1,s[max];
void push(int n)
{
if(top==max-1)
{
puts("stack is over flown");
return;
}
else
{
top=top+1;
s[top]=n;
}
}
void pop()
{
int del;
if(top==-1)
{
puts("stack is underflown");
return;
}
else
{
del=s[top];
printf("\n poped element is %d",del);
top=top-1;
}
}
void display()
{
int i;
if(top==-1)
puts("stack is empty");
else
{
for(i=top;i>=0;i--)
printf("\t%d",s[i]);
}
}
void main()
{
int opt,n;
do
{
printf("\n 1.push");
printf("\n 2.pop");
printf("\n 3.display");
printf("\n 4.exit");
printf("enter ur option");
scanf("%d",&opt);
switch(opt)
{
case1:printf("\n enter any element to push");
      scanf("%d",&n);
      break;
case2:pop();
      break;
case3:display();
      break;
case4:exit(0);
      break;
      }
      }
      while(1);
      }
