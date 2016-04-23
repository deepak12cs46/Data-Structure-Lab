#include<stdio.h>
#include<conio.h>
int main()
{
int num,sum=0,mod;
printf("enter a number");
scanf("%d",&num);
while(num!=0)
{
mod=num%10;
sum=sum+mod;
num=num/10;
}
printf("%d",sum);
getch();
return 0;
}
