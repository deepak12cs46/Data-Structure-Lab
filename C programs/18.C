#include<stdio.h>
#include<conio.h>
void main()
{
int i,x;clrscr();
printf("enter a number");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
 if(x%i==0)
 printf("%d is a factor \n",i);
 else
  printf("%d is a not a factor \n",i);
 }
 getch();
 }