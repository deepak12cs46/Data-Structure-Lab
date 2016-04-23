#include<stdio.h>
#include<stdlib.h>
int push (int );
int pop (int );
int peep (int );
void display (int );
int top,a[100];
void main()
{
    int t;
    char ch;
    top=-1; t=1;
    while(t==1)
    {
        printf("PRESS 'i' FOR PUSH\nPRESS 'o' FOR POP \nPRESS 'p' FOR PEEP\nPRESS 'e' FOR EXIT\n\n");
        fflush(stdin);
        scanf("%c",&ch);
if(ch=='i')
{
   top=push(top);
}
else if(ch=='o')
    {
        top=pop(top);
        top=top-1;
    }
else if(ch=='p')
    top=peep(top);
else if(ch=='e')
    {
    display(top);
    exit(1);
    }
        printf("IF YOU WANT TO CONTINUE THE PROCESS PRESS 1 ELSE EXIT WOULD BE HAPPEN\n");
        fflush(stdin);
        scanf("%d",&t);
};
}
int push(int top)
{
    int v;
if (top==100)
        printf("OVERFLOW HAPPENING\n");
else
  {
     {
        printf("ENTER VALUE WHICH YOU WANT TO PUSH\n");
        scanf("%d",&v);
        top=top+1;
        a[top]=v;
     }
    display(top);
  }
return top;
}
int pop(int top)
{
    int v;
if (top==-1)
        printf("UNDERFLOW HAPPENED\n");
else
{ top=top-1;
display(top);
}
return top;
}
int peep(int top)
{
    int n,o,p;
    printf("ENTER POSITION WHERE YOU WANT TO PEEP UPDATE\n");
        scanf("%d",&n);
if(n>(top+1) || n<0)
        printf("PEEPING OR UPDATING IS NOT POSSIBLE\n");
else
    {
    printf("VALUE OF ELEMENT IS %d\n",a[top-n+1]);
    printf("IF YOU WANT TO UPDATE PRESS 1\n");
    scanf("%d",&o);
if(o==1)
    {
    printf("ENTER NUMBER BY WHICH YOU WANT TO UPDATE\n");
    scanf("%d",&p);
    a[top-n+1]=p;
    }
    display(top);
    }
    return top;
}
void display(int top)
{
    printf("LIST IS\n");
    if(top==-1)
        printf("EMPTY\n");
    while(top>-1)
    {
            printf("DATA AT a[%d] IS %d\n",top,a[top]);
            top=top-1;
    }
}
