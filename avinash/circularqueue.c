#include<stdio.h>
int k[20];
int r=-1,f=-1;
void insert(int item)
{
	if((r+1)%20==f)
	{printf("\n overflow error");
	exit(0);}
	else if(f==-1)
	{
		r=0;
		f=0;
		k[r]=item;
	}
	else r=(r+1)%20;
	k[r]=item;
}
void deletion()
{
	int value;
	if(r==-1)
	{
		printf("\n underflow error");
		exit(1);
	}
	value=k[f];
	if(f==r)
	{
		f=-1;
		r=-1;
	}
	else
	{
		f=(f+1)%20;
	}


}
void main()
{
	char ans=1;
	int x;
	printf("\n do queue operation");
	while(ans=='i',ans=='d')
	{
		if(ans=='i')
		{
			printf("element to be inserted");
			scanf("%d",&x);insert(x);
		}
		if(ans=='d')
		deletion();
	}
	display();
	printf("\n i to insert and d to delete");
	scanf("%d",&ans);
}
void display()
{
                int t;
	t=f;
	while(t!=r)
	{printf("%d",k[t]);

	t=(t+1)%20;}
	printf("%d",k[r]);

}
