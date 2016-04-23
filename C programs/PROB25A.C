		  //PROGRAM FOR LAGRANGES INTERPOLE//


	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	int i,j,n;
	float x[100],f[100],s,pf,r;
	clrscr();
	printf("\n\tOUTPUT::\n");
	printf("\n\tEnter x,n values: ");
	scanf("%f%d",&r,&n);
	printf("\n\tEnter various xi values: ");
	for(i=1;i<n+1;i++)
	scanf("%f",&x[i]);
	printf("\n\tEnter various fi values: ");
	for(i=1;i<n+1;i++)
	scanf("%f",&f[i]);
	for(i=1,s=0;i<n+1;i++)
	{
	for(j=1,pf=1;j<n+1;j++)
	if(j!=i)
	pf=pf*((r-x[j])/(x[i]-x[j]));
	s+=(f[i]*pf);
	}
	printf("\n\tThe value of the given function at %3.4f is %3.4f",r,s);
	getch();
	}

