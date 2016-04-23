	/* PROGRAM TO GET EQUATIONS AND SOLVE THEM BY TAKING THE GIVEN
	     VALUES IN LINEAR REGRESSION. */

	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	int n,i;
	float x[20],y[20],s=0,m=0,p=0,q=0,a0,a1,d;
	clrscr();
	printf("\n\tOUTPUT::\n");
	printf("\n\tEnter the value of n: ");
	scanf("%d",&n);

	printf("\n\tEnter Xi values: ");
	for(i=0;i<n;i++)
	  scanf("%f",&x[i]);

	printf("\n\tEnter Yi values: ");
	for(i=0;i<n;i++)
	  scanf("%f",&y[i]);

	printf("\n\tx[i]\ty[i]\tsy[i]\tssx[i]\tsx[i]\tsxy[i]");
	printf("\n\t-------------------------------------------------------");

	for(i=0;i<n;i++)
	{
	s+=y[i];
	m+=x[i]*x[i];
	p+=x[i];
	q+=x[i]*y[i];
	printf("\n\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f",x[i],y[i],s,m,p,q);
	}
	d=(n*m-(p*p));
	a0= ((s*m)-(p*q))/d;
	a1= (n*q-(s*p))/d;
	printf("\n\n\tThe equaton is: Y = %.4f X + %.4f",a1,a0);
	getch();
	}



