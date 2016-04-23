/*Evaluation of POSTFIX  expression using ARRAYS */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int s[20];
char a[20];
int top=-1;
void main()
{
int x,y,z,k,i;
int max;
clrscr();
printf("enter post fix expression:");
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0'&&a[i]<='9')
{
k=a[i]-48;
push(k);
}
else
{
switch(a[i])
{
case'+':x=pop();
	y=pop();
	z=y+x;
	push(z);
	break;
case'-':x=pop();
	y=pop();
	z=y-x;
	push(z);
	break;
case'*':x=pop();
	y=pop();
	z=y*x;
	push(z);
	break;
case'/':x=pop();
	y=pop();
	z=y/x;
	push(z);
	break;
case'$':x=pop();
	y=pop();
	z=pow(y,x);
	push(z);
	break;
	}
	}
	}
printf("%d",s[top]);
getch();
}
push(int a)
{
int max;
if(top<max-1)
{
top++;
s[top]=a;
}
}
int pop()
{
int p;
p=s[top];
top--;
return(p);
}
