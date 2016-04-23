	/* PROGRAM FOR IMPLEMENTATION OF INSERTION SORT */
	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	void inssort(int [],int );
	int a[10],i,n;
	clrscr();
	printf("\n\tOUTPUT::\n");
	printf("\n\tEnter no of Elements: ");
	scanf("%d",&n);

	printf("\n\tEnter the elements: ");

	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);
	}
	a[0]=-1234;
	inssort(a,n);
	printf("\nelements after sorting:");
	for(i=1;i<=n;i++)
	{
	printf("\t%d",a[i]);
	}

	getch();
	}
	void inssort(int x[10],int m)
	{
	int i,j,k,temp;
	for(i=1;i<=m;i++)
	for(j=0;j<i;j++)
	if(x[i]<x[j])
	{
	temp=x[i];
	for(k=i;k>j;k--)
	x[k]=x[k-1];
	x[j]=temp;
	break;
	}
	}

