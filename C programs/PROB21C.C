/*****************************FIBONACCI SEARCH******************************/
#include<stdio.h>
#include<conio.h>
void main()
 {
   int b[30],x,k,i;
   clrscr();
   printf("\tOUTPUT:\n\t");
   printf("\n Enter the number of elements :\n");
   scanf("%d",&x);
   printf("\n Enter the elements \n");
   for(i=0;i<x;i++)
     scanf("%d",&b[i]);
   printf("\n Enter the key to be found :");
   scanf("%d",&k);
   printf("location=%d",fibsearch(b,x,k));
   getch();
 }
fibsearch(a,n,key)
int a[30],n,key;
 {
   int k,f1,f2,m,temp;
   k=1;
   while(fib(k)<n)
   k=k+1;
   m=n-fib(k-2)+1;
   f1=fib(k-2);
   f2=fib(k-3);
   while(a[m]!=key)
    {
     if((m<0)&&(a[m]<key))
      {
       if(f1==1)
	 return(-1);
       m=m+f2;
       f1=f1-f2;
       f2=f2-f1;
      }
     else
      {
	if(f2==0)
	return(-1);
	m=m-f2;
	temp=f1-f2;
	f1=f2;
	f2=temp;
      }
    }
   return(m);
 }
 fib(m)
 int m;
 {
   if(m==1)
     return(0);
   else if(m==2)
       return(1);
  else
     return(fib(m-1)+fib(m-2));
}
