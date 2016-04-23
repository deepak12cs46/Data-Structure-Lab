#include<stdio.h>
#include<conio.h>
int main()
{
int mod,sum=0,num,num1;
printf("enter a number");
scanf("%d",&num);
num1=num;
while(num!=0)
{
mod=num%10;
sum=sum*10+mod;
num=num/10;
}
printf("%d\n",sum);

if(sum==num1)
printf("polyndrome");
else
printf("not a polyndrome");
getch();
return 0;
}
