		/* Program to find f(x) value in given range
		  /*    using Newtons forward interpolation */


	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	int f=1,i,j,t,k,n,q=0;
	float p,h,y[20][20],x[20],x1,u,s=0;
	clrscr();
	printf("\n\tOUTPUT::");
	printf("\n\tEnter the value of n: ");
	scanf("%d",&n);
	printf("\n\tEnter the value of x: ");
	scanf("%f",&x1);
	printf("\n\tEnter values of x: ");
	for(i=0;i<n;i++)
	scanf("%f",&x[i]);
	printf("\n\tEnter values of y: ");
	for(i=0;i<n;i++)
	scanf("%f",&y[0][i]);
	for(i=1;i<n;i++)
	for(j=0;j<n-i;j++)
	y[i][j]=y[i-1][j+1]-y[i-1][j];
	h=x[1]-x[0];
	printf("\n\th=%.4f\n",h);
	for(i=0;i<n;i++)
	if(x1<x[i])
	{
	u=(x1-x[i-1])/h;
	t=i-1;
	break;
	}
	printf("\n\tx:");
	for(i=0;i<n;i++)
	printf("%8.3f",x[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
	printf("\t-----------------------------------------------------------");
	printf(" \n\ty%d:",i);
	for(k=0;k<q;k++)
	{
	printf("  ");
	}
	q=q+2;
	for(j=0;j<n-i;j++)
	printf("%8.4f",y[i][j]);
	printf("\n");
	}
	s=y[0][t];
	p=u;
	for(i=1;i<n-t;i++)
	{
	s=s+y[i][t]*(p/f);
	p=p*(u-i);
	f=f*(i+1);
	}
	printf("\t-----------------------------------------------------------");
	printf("\n\tThe value at f(%.4f)=%.4f",x1,s);
	getch();
	}


