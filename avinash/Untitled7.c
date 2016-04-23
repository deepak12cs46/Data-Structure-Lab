#include<stdio.h>
void qs(int k[50],int f, int l)
{
	int pv,i,j,t;
	if(f<l)
	{
		pv=f;i=f;j=l;
		while(i<j)
		{
			while(k[i]<=k[pv] && i<l)
			i++;
			while(k[j]>k[pv])
			j--;
			if(i<j)
			{
				t=k[i];k[i]=k[j];k[j]=t;
			}

		}
		t=k[pv];
		k[pv]=k[j];
		k[j]=t;
		qs(k,f,j-1);
		qs(k,j+1,l);
	}
}
void main()
{
	int n,k[50],i;
	printf("\n total no of elements to be sorted by quick sort=\t");
	scanf("%d",&n);
	i=0;
	while(i<n)
	{
		printf("\n element=\t");
		scanf("%d",&k[i]);
		i++;
	}
	printf("\n element obtained after sorting are\n");
	qs(k,0,n-1);
	i=0;
	while(i<n)
	{
		printf("%d\t",k[i]);
		i++;
	}
	printf("\n\n congrats!! successsfulllyyy sorted\n\n");

}
