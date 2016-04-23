#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<math.h>
void main()
{
long n;
int x,y=0,p=0;
clrscr();
printf("\n enter a binary number:");
scanf("%ld",&n);
while(n!=0)
{
x=n%10;
if(x>1||x<0)
{
printf("\n invalid number.");
exit(1);
}
y=y+x*pow(2,p);
n=n/10;
p++;
}
printf("\n equivalent decimal number is %d",y);
getche();
}
