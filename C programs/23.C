#include<stdio.h>
#include<conio.h>
void main()
{
char ori[20],dup[20];
int i;
clrscr();
printf("enter your name:");
gets(ori);
for(i=0;ori[i]!='\o';i++)
dup[i]=ori[i];
dup[i]='\o';

printf("\n duplicate string:%s",dup);
getch();
}

