#include<stdio.h>
#include<conio.h>
int main ()
{
  int a=10,*p;
  p=&a;
  printf("address of %d == %d",a,p);
  return 0;
}
