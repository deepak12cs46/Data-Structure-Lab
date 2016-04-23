#include<stdio.h>
#include<conio.h>
void main()
{
int n,a=-1,b=1,c,i=0;
clrscr();
printf("**********Output**********");
printf("\nEnter range:");
scanf("%d",&n);
printf("Fibonacci Series:");
while(i<=n)
{
c=a+b;
printf("%4d",c);
a=b;
b=c;
i++;
}
getch();
}
