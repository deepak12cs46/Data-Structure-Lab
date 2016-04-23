#include<stdio.h>
#define MAX 50
int b_search(int k[],int n, int key);
void main()
{
	int k[MAX],n, key,index,i;
	printf("\n total no of elements\t= ");
	scanf("%d",&n);
	i=0;
	while(i<n)
	{
		printf("\n element\t=");
		scanf("%d",&k[i]);
		i++;
	}
	printf("\n element to be searched\t=");
	scanf("%d",&key);
	index=b_search(k,n,key);
	if (index==-1)
	printf("\n %d not present",key);
	else printf("\n %d found at position %d",key,index+1);
}
int b_search(int k[],int n,int key)
{
	int high=n-1,low=0,mid;
	while(low<=high)
	{
		mid=(high+low)/2;
		if(key<k[mid])
		high=mid-1;
		else if (key>k[mid])
		low=mid+1;
		else return mid;
	}
	return -1;
}
