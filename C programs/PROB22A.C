		/*Infix to postfix  program*/


		#include<stdio.h>
		#include<ctype.h>
		#include<conio.h>
		char s[20];
		int top=-1;
		void main()
		{
		char str[20];
		char ch;
		int i;
		char pop();
		void push(char);
		int precd(char);
		s[top]='#';
		clrscr();
		printf("\n\t\tOUTPUT");
		printf("\n\tEnter the expression:");
		gets(str);
		printf("\n\tpostfix notation:");
		for(i=0;str[i]!='\0';i++)
		{
		if(isalpha(str[i]))
		{
		printf("%c",str[i]);
		continue;
		}
		if(str[i]==')')
		{
		while((ch=pop())!='(')
		printf("%c",ch);
		}
		else if(str[i]=='(')
		push(str[i]);
		else if(precd(str[i])<=precd(s[top]))
		{
		printf("%c",pop());
		 push(str[i]);
		}
		else
		push(str[i]);
		}
		while(top>=0)
		printf("%c",pop());
		getch();
		}
		void push(char st)
		{
		s[++top]=st;
		}
		char pop()
		{
		char st;
		st=s[top--];
		return(st);
		}

		int precd(char s)
		{
		switch(s)
		{
		case '$':return(4);
		case '*':
		case '/': return(3);
		case '+':
		case '-': return(2);
		case '(': return(1);
		case '#': return(-1);
		}
		return(0);
		}

