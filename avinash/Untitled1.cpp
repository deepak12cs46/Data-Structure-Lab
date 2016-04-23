#include<stdio.h>
void bs(int n,int *k);
void main()
{
	int n,i,j,k[50];
	printf("\n total no of elements=\t");
	scanf("%d",&n);
	i=0;
	while(i<n)
	{
		printf("\n element\t=");
		scanf("%d",&k[i]);
		i++;
	}

	printf("\n the elements obtained after sorting are:");
	bs(n,k);
	i=0;
	while(i<n)
	{
		printf("%d\t",k[i]);
		i++;
	}
}
void bs(int n, int *k)
{
	int temp,i=0;
	int last=n,flag=0,pass=1;
	while(i<=last-2)
	{
		if(k[i]>k[i+1])
		{
			temp=k[i];
			k[i]=k[i+1];
			k[i+1]=temp;
			flag=flag+1;
		}
		i++;
	}

	if(flag!=0)
	{
		last=last-1;
		flag=0;
	}
	pass=pass+1;
}

