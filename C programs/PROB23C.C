

		  /*PROGRAM FOR NEWTON RAPHSON METHOD
		  PROGRAM NO:23(C)*/

	#include<stdio.h>
	#include<conio.h>
	#include<math.h>
	#define f(x)   x*sin(x)+cos(x)
	#define f1(x)  x*cos(x)
	void main()
	{
	float x0,x1,f0,f10,e=0.0001,del=0.0001;
	int i,n;
	clrscr();
	printf("\n\tOUTPUT(for x*sinx + cosx=0::\n");
	printf("\n\tEnter intial guess value x0: ");
	scanf("%f",&x0);
	printf("\n\tEnter no.of iterations n:");
	scanf("%d",&n);

	printf("\t==============================================\n");
	printf("\tx0\tx1\tf0\tf10\n");
	printf("\t==============================================\n");
	for(i=0;i<n;i++)
	{
	f0=f(x0);
	f10=f1(x0);
	if(fabs(f10)<=del)
	{
	printf("\tthe slope is too small\n");
	printf("\tx0=%f\tf0=%f\tf10=%f\n",x0,f0,f10);
	getch();
	exit(0);
	}
	x1=x0-(f0/f10);
	printf("\t%.4f\t%.4f\t%.4f\t%.4f\n",x0,x1,f0,f10);
	if(fabs((x1-x0)/x1)<=e)
	{
	printf("\n\tConvergent solution is:");
	printf("\tx1=%f\tf(x1)=%f\n",x1,f(x1));
	getch();
	exit(0);
	}
	else
	x0=x1;
	}
	getch();
	}

