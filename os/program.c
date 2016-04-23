/*
Roll No: 12/CS/45 , 12/CS/46
NAME: BIJAY KHATRI, DEEPAK VERMA
GROUP NO: 22
*/
#include  <stdio.h>
#include  <string.h>
#include  <sys/types.h>
int main()
{	int a[100],sum1=0,sum2=0,n,i;
if(fork())
{	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	if(fork())
		{
		for(i=0;i<n;i++)
			if(a[i]%2==0)
				sum1=sum1+a[i];
		printf("child process::::EVEN SUM = %d\n",sum1);
		}
	else	{
			
if(fork())
		{
		for(i=0;i<n;i++)
			if(a[i]%2!=0)
				sum2=sum2+a[i];
		printf("child process::::ODD SUM = %d\n",sum2);
		}
		}

}
return 0;
}
