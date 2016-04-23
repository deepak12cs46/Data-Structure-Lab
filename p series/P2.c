#include<stdio.h>
#include<conio.h>
swap(int,int);
int main ()

{
int a,b;
printf("enter values of a & b");
scanf("%d %d",&a,&b);
printf("a=%d  \n  b=%d",a,b);
swap(a,b);

return 0;
}
swap(int a,int b)
{
int t;
t=a;
a=b;
b=t;
printf("a=%d  \n  b=%d",a,b);
}
