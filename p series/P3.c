#include<stdio.h>
#include<conio.h>
swap(int *,int *);
int main ()

{
int a,b,*p,*q;
printf("enter values of a & b\n");
scanf("%d %d",&a,&b);
printf("a=%d\nb=%d\n",a,b);
p=&a;
q=&b;
swap(p,q);
printf("\n AFTER SWAPPING a=%d\nb=%d\n",a,b);

return 0;
}
swap(int *p,int *q)
{
int t;
t=*p;
*p=*q;
*q=t;
}

