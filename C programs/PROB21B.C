		/* PROGRAM FOR IMPLEMENTING BINARY SEARCH */
	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	int a[100],i,n,low,high,mid,key,flag=1,j,t;
	clrscr();
	printf("\n\tOUTPUT::\n");
	printf("\n\tEnter the no.of elements: ");
	scanf("%d",&n);
	printf("\n\tEnter the  elements in sorted order: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	printf("\n\n\tEnter the element to be searched:  ");
	scanf("%d",&key);
	low=0;
	high=n-1;
	while(low<=high)
	{
	   mid=(low+high)/2;
	   if(key==a[mid])
	    {
	     printf("\n\tSearch is successful: \n");
	     printf("\n\tElement %d is present at Location %d ",key,mid+1);
	     getch();
	     exit();
	    }
	   if(key<a[mid])
	     high=mid-1;
	    else if(key>a[mid])
	     low=mid+1;
	}
	printf("\n\tSearch is unsuccessful");
	getch();
	}



