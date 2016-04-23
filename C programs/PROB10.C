/*------------------Fibonacci series--------------------*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n,a=0,b=1,c=1,i=0;
clrscr();
printf("**********Output**********");
printf("\nEnter a number:");
scanf("%d",&n);
printf("Fibonacci Series:");
printf("%4d%4d",a,b);
while(i<n-2)
{
c=a+b;
printf("%4d",c);
a=b;
b=c;
i++;
}
getch();
}
















