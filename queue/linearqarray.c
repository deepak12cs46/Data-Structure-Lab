#include<stdio.h>
void insertion(int *,int *,int *);
void deletion(int *,int *,int *);
void display(int *,int *,int *);
int frnt,rear;
void main()
{
int i=0,*p,t,u,*f,*r,a[10];
frnt=-1;
rear=-1;
p=a;
f=&frnt;
r=&rear;
printf("IF YOU WANT TO INSERT ELEMENT IN Q PRESS 1\n");
scanf("&d",&t);
while(t==1)
{
    printf("1 INSERTION\t2 DELETION\n");
    scanf("%d",&u);
 if(u==1)
{insertion(p,f,r);
display (p,f,r);
}
else if (u==2)
{ deletion(p,f,r);
 display(p,f,r);
}
else {display(p,f,r);

}
printf("CONTINUE ? 1");
fflush(stdin);
scanf("%d",&t);
}
}
void insertion(int *p,int *f,int *r)
{
    int v;
    printf("ENTER VALUE TO ENTER IN Q\n");
    scanf("%d",&v);
    if(*f==-1)
    {
        (*f)=(*r)=0;
        *(p+(*f))=v;
    }
else if ((*f)==9)
printf("OVERFLOW\n");
else {
    (*r)=(*r)+1;
    *(p+(*r))=v;
}
}
void deletion (int *p,int *f,int *r)
{
    if((*f)==-1)
        printf("UNDERFLOW\n");
    else if ((*f)==(*r))
    {
        (*f)=-1;
        (*r)=(*f);
    }
    else
        (*f)=(*f)+1;
}
void display(int *p,int *f,int *r)
{
while((p+frnt)!=(p+rear))
      {
          printf("Q DATA IS =%d\n",*(p+frnt));
                    (p+frnt)=(p+frnt)+1;
      }
}
