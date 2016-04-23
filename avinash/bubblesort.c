#include<stdio.h>
#include<conio.h>
void bubble_sort(int n,int*k);
void main()
{  int k[20],i,j,n;

printf("\n enter the no of elements to be sorted");
scanf("%d",&n);
i=0;
while(i<n)
{
	printf("\n the elements to be sorted:");
	scanf("%d",&k[i]);
	i++;
}

j=0;
while(j<n);
{
	printf("%d",j);
	j++;

}
	bubble_sort(n,k);
	printf("\n the elements after sorting are:");
	j=0;
	while(j<n)
	{
		printf("%d",k[j]);
		j++;
	}
	getch();
}
void bubble_sort(int n,int *k)
{
	int t,i=0,flag=0; int last=n; int pass=1;
	while(pass<=n-1)
	{
		while(i<=last-2)
		{
			if (k[i]>k[i+1])
			{t=k[i];
			k[i]=k[i+1];
			k[i+1]=t;
			flag=flag+1;}
		}
		i++;
	}
	if(flag!=0)
	{
		last=last-1;
		flag=0;
	}

	pass++;


}
