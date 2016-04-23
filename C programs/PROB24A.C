
	     /*program to solve  simultanious algebric equations
	      by using gauss elimination method*/

	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	int i,k,j,n;
	float u,x[10],a[10][11],sum;
	clrscr();
	printf("\n\tOUTPUT::\n");
	printf("\n\tEnter no.of eq's:");
	scanf("%d",&n);
	printf("\n\tEnter the coefficients of  equations\n ");
	for(i=1;i<=n;i++)
	for(j=1;j<=n+1;j++)
	scanf("%f",&a[i][j]);
	for(k=1;k<=(n-1);k++)
	for(i=(k+1);i<=n;i++)
	{
	u=a[i][k]/a[k][k];
	for(j=k;j<=(n+1);j++)
	a[i][j]=a[i][j]-u*a[k][j];
	}
	x[n]=a[n][n+1]/a[n][n];
	for(i=(n-1);i>=1;i--)
	{
	sum=0;
	for(j=(i+1);j<=n;j++)
	sum=sum+a[i][j]*x[j];
	x[i]=(a[i][n+1]-sum)/a[i][i];
	}
	printf("\n\tConvergent Solution is:\n\n");
	for(i=1;i<=n;i++)
	printf("%15.4f\n\n",x[i]);
	getch();
	}

