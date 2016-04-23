
       /*	      program for simultanious algebric equations
		   using gauss-seidal method  */


	#include<stdio.h>
	#include<conio.h>
	#include<math.h>
	void main()
	{
	int n,m,i,j,itr;
	float sum,a[60][60],x[60],e=0.001,rerr,b,temp;
	clrscr();
	printf("\tOUTPUT:  ");
	printf("\n\tenter number of equation  unknowns: ");
	scanf("%d",&n);
	printf("\n\tthe number of iterations: ");
	scanf("%d",&m);
	for(i=1;i<=n;i++)
	{
	printf("\n\tcoefficient of equation %d are:  ",i);
	for(j=1;j<=n+1;j++)
	scanf("%f",&a[i][j]);
	}

	for(i=1;i<=n;i++)
	x[i]=0;

	for(itr=1;itr<=m;itr++)
	{
	  b=0;
	  for(i=1;i<=n;i++)
	  {
	    sum=0;

	    for(j=1;j<=n;j++)
	    if(j!=i)
	    sum=sum+a[i][j]*x[j];

	    temp=(a[i][n+1]-sum)/a[i][i];
	    rerr=fabs((x[i]-temp)/temp);

	    if(rerr>b)
	    b=rerr;
	    x[i]=temp;
	     }

	   if(b<=e)
	   {
	   printf("\n\nthe solution converges:");
	   for(i=1;i<=n;i++)
	   printf("\n%f",x[i]);
	   getch();
	   exit();
	   }
	}

	printf("\n\tthe solution does not converges in %d iterations: ",m);
	for(i=1;i<=n;i++)
	printf("\n\t%6.3f",x[i]);
	getch();
	}



