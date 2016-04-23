	/* PROGRAM TO GET EQUATIONS AND SOLVE THEM BY TAKING THE GIVEN
	  /*   VALUES IN POLYNOMIAL REGRESSION. */
	#include<stdio.h>
	#include<conio.h>
	#include<math.h>
	void main()
	{
	int sum=0,n,k,u,i,j;
	float sx=0,sy=0,sxy=0,a[10][10],sx2=0,sx3=0,sx4=0,sx2y=0;
	float a0,a1,a2,x1[20],y[20],x[20];
	clrscr();
	printf("\n\tOUTPUT::");
	printf("\n\tEnter the value of n: ");
	scanf("%d",&n);
	printf("\n\tEnter 'x' values: ");
	for(i=0;i<n;i++)
	scanf("%f",&x1[i]);
	printf("\n\tEnter 'y' values: ");
	for(i=0;i<n;i++)
	scanf("%f",&y[i]);
	for(i=0;i<n;i++)
	{
	sx+=x1[i];
	sy+=y[i];
	sxy+=x1[i]*y[i];
	sx2+=x1[i]*x1[i];
	sx3+=x1[i]*x1[i]*x1[i];
	sx4+=pow(x1[i],4);
	sx2y+=pow(x1[i],2)*y[i];

	}
	printf("\n\tsx=%f\n\tsy=%f\n\tsxy=%f\n\tsx2=%f\n\tsx3=%f\n\tsx4=%f\n\tsx2y=%f"
	,sx,sy,sxy,sx2,sx3,sx4,sx2y);
	printf("\n\tEnter no. of equations: ");
	scanf("%d",&n);
	printf("\n\tThe values of coefficients of the equations:\n\t");
	for(i=1;i<=n;i++)
	for(j=1;j<=n+1;j++)
	scanf("%f",&a[i][j]);
	for(k=1;k<=n-1;k++)
	for(i=k+1;i<=n;i++)
	{
	u=a[i][k]/a[k][k];
	for(j=k;j<=n+1;j++)
	a[i][j]=a[i][j]-u*a[k][j];
	}
	x[n]=(a[n][n+1])/a[n][n];
	for(i=n-1;i>=1;i--)
	{
	sum=0;
	for(j=i+1;j<=n;j++)
	sum+=a[i][j]*x[j];
	x[i]=(a[i][n+1]-sum)/a[i][i];
	}
	printf("\tThe coefficients are: \n");
	for(i=1;i<=n;i++)
	printf("\ta[%d]=%.4f\n",i-1,x[i]);
	printf("\n\tThe equation is: ");
	printf("Y=%.4fX^2+%.4fX+%.4f",x[3],x[2],x[1]);
	getch();
	}



