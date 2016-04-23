	/*SUCCESSIVE APPROXIMATION  */
	/* PROB. NO. 23(D) */
	#include<stdio.h>
	#include<conio.h>
	#include<math.h>
	#include<process.h>
	#define g(x)   (1+exp(-x))/2

	void main()
	{
	int i,n;
	float x0,x1,e=0.001,f0,f1;
	clrscr();
	printf("\n\n\tOUTPUT::\n");
	printf("\n\tEnter x0,n: ");
	scanf("%f%d",&x0,&n);
	printf("\n\t***********************************************\n");
	printf("\t\tx0\tx1\t(x1-x0)/x1");
	printf("\n\t***********************************************\n");
	x1=g(x0);
	for(i=0;i<n;i++)
	{
	if(fabs((x1-x0)/x1)<=e)
	{
	printf("\n\tThe convergent solution is: %f",x1);
	getch();
	exit(0);
	}
	printf("\t%12.4f%9.4f%9.4f\n",x0,x1,fabs((x1-x0)/x1));
	x0=x1;
	x1=g(x0);
	}
	printf("\n\tThe solution does not converge in n iterations:%f",x1);
	getch();
	}


