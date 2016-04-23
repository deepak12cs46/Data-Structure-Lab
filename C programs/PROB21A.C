		/* PROGRAM FOR IMPLEMENTING SEQUENTIAL SEARCH */

	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	int a[100],i,n,low,high,mid,key,flag=1,j,t;
	clrscr();
	printf("\n\tOUTPUT::\n");
	printf("\n\tEnter the no.of elements: ");
	scanf("%d",&n);
	printf("\n\tEnter the  elements : ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	printf("\n\n\tEnter the element to be searched:  ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	  if(key==a[i])
	    {
	     printf("\n\tSearch is successful: \n");
	     printf("\n\tElement %d is present at Location %d ",key,i+1);
	     getch();
	     exit();
	    }
		printf("\n\tSearch is unsuccessful");
	getch();
	}



