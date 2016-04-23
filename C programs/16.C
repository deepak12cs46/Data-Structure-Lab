#include<stdio.h>
#include<conio.h>
void main()
{
int x,y=40;
clrscr();
printf("enter a number");
scanf("%d",&x);
printf("\n binary number:");
while(x!=0)
{gotoxy(y--,3);
printf("%d",x%2);
x=x/2;
}
getch();
}