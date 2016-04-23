       //bubble sort
	#include<stdio.h>
	#include<conio.h>
int main()
	{
	int a[15],i,n;
	void bsort(int [],int );

	printf("\n\tOUTPUT::\n");
	printf("\n\tEnter no of elements:  ");
	scanf("%d",&n);
	printf("\n\tEnter elements:  ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	bsort(a,n);
	printf("\n\n\tElements after bubble sorting: \n\n\t");
	for(i=0;i<n;i++)
	printf("%5d",a[i]);
	getch();
	}

	void bsort(int x[10],int m)
	{
	int i,j,k=0,temp;
	for(i=0;i<m;i++)
	{
	for(j=0;j<m-i-1;j++)
	if(x[j]>x[j+1])
	{
	k=1;
	temp=x[j];
	x[j]=x[j+1];
	x[j+1]=temp;
	}
	if(k==0)
	break;
	}
	}
