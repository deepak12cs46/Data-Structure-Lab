

		  //PROGRAM FOR BISECTION METHOD

	#include<stdio.h>
	#include<conio.h>
	#include<math.h>
	#define f(x)  x*sin(x)+cos(x)
	int main()
	{
	float x1,x2,x0,f1,f2,f0,e=0.0001;
	int i=0;

	printf("\tOUTPUT:");
	printf("\n\tenter the x1,x0  values:  ");
	scanf("%f%f",&x0,&x1);
	f0=f(x0);
	f1=f(x1);
	if(f0*f1>0)
	{
	printf("\n\tthe initial values are unsuitable");
	printf("\n\tthe values are %f %f %f %f",x0,x1,f0,f1);
	getch();

	}
	printf("\n\t************************************************");
	printf("\n\tx0\tx1\tx2\tf0\tf1\tf2\n");
	printf("\n\t************************************************\n");
	while(fabs((x1-x0)/x1)>e)
	{
	x2=(x0+x1)/2;
	f2=f(x2);
	i++;
	printf("\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\n",x0,x1,x2,f0,f1,f2);
	if(f0*f2>0)
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

	printf("\n\tSolution converges  to a root\n");
	printf("\tNo .of interations=%d",i);
	printf("\n\tx2=%f\n\tf2= %f",x2,f2);
	getch();
	}
