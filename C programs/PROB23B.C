

		  /*PROGRAM FOR FALSE POSITIONN METHOD
		   */

	#include<stdio.h>
	#include<conio.h>
	#include<math.h>
	#include<stdlib.h>
	#define f(x)  x*sin(x)+cos(x)
	void main()
	{
	float x1,x2,x0,f1,f2,f0,e=0.0001;
	int i,n;
	clrscr();
	printf("\tOUTPUT:");
	printf("\n\tenter the x1,x0  values:  ");
	scanf("%f%f",&x0,&x1,&n);

	printf("\tenter the number of iterations:  ");
	scanf("%d",&n);

	f0=f(x0);
	f1=f(x1);
	if(f0*f1>0)
	{
	printf("\n\tthe initial values are unsuitable");
	printf("\n\tthe values are %f %f %f %f",x0,x1,f0,f1);
	exit(1);
	}
	printf("\n\t************************************************");
	printf("\n\tx0\tx1\tx2\tf0\tf1\tf2\n");
	printf("\n\t************************************************\n");
	for(i=1;i<=n;i++)
	{
	x2=(x0*f1-x1*f0)/(f1-f0);
	f2=f(x2);
	printf("\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\n",x0,x1,x2,f0,f1,f2);
	if(fabs(f2)<=e)
	{
	printf("\n\tthe convergent solution is x2= %f   f2= %f",x2,f2);
	getch();
	exit(0);
	}
	else if(f0*f2<0)
	{
	x0=x2;
	f0=f2;
	}
	else
	{
	x1=x2;
	f1=f2;
	}
	}
	printf("\n\tthe solution does not convergers in n itterations");
	printf("x2=%f\nf2= %f",x2,f2);
	getch();
}