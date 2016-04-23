/* to find the feebonacci  series prog.no:10.b*/

#include<stdio.h>
#include<conio.h>
void main()

{

int n,a=0,b=1,c,i=0;

clrscr();

printf("Enter a  number:");

scanf("%d",&n);

printf("Fibonacci series:");

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


