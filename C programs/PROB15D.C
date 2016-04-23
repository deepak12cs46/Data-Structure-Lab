/* IMPLEMENTATION OF DEQUEUES
*/

#define max 5
#include<stdio.h>

int q[max],f=0,r=-1;
void main()
{
char ch;
int p;
void insfront();
void insrear();
int delfront();
int delrear();
void display();
clrscr();

clrscr();
printf("\nDequeue operations\n");
printf("1.insertion from front \n2.insertion from rear");
printf("\n3.deletion from front\n4.deletion from raer");
printf("\n5.display\n6.exit\n");
while(1)
{
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: insfront();
	break;
case 2: insrear();
	break;
case 3: p=delfront();
	printf("Deleted element :%d\n",p);
	break;
case 4:p=delrear();
	printf("Deleted element :%d\n",p);
       break;
case 5: display();
	break;
case 6:exit();
default:printf("Invalid option\n");
}
}
getch();
}

void insfront()
{
int x;
if(f==0)
{
printf("Queue is overflow\n");
getch();
exit();
}
printf("Enter element:");
scanf("%d",&x);
q[--f]=x;
}


void insrear()
{
int x;
if(r==max-1)
{
printf("Queue is overflow\n");
getch();
exit();
}
printf("Enter element:");
scanf("%d",&x);
q[++r]=x;
}

int delfront()
{
int k;
if(f==0&&r==-1)
{
printf("Queue is underflow\n");
getch();
exit();
}
k=q[f++];
if(f>r)
{
f=0;
r=-1;
}
return(k);
}

int delrear()
{
int k;
if(f==0&&r==-1)
{
printf("Queue is underflow\n");
getch();
exit();
}
k=q[r--];
if(f>r)
{
f=0;
r=-1;
}
return(k);
}


void display()
{
int i;
if(f==0&&r==-1)
{
printf("Queue is underflow\n");
getch();
exit();
}
for(i=f;i<=r;i++)
printf("\t%d",q[i]);
printf("\n");
}

