/* to find the feebonacci  series  using recurtion*/

#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,k;
clrscr();
printf("\OUTPUT\n");
printf("Enter a  number:");
scanf("%d",&n);
printf("Fibonacci series:");
for(i=0;i<n;i++)
{
k=fib(i);
printf("%4d",k);
}
getch();
}
int fib(int x)
{
int f;
if(x==0)
return(0);
if (x==1)
return(1);
f=fib(x-1)+fib(x-2);
return(f);
}


