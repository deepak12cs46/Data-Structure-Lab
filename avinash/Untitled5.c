#include<stdio.h>
#include<conio.h>
void main()
{
	int largest,a,b,c;
	printf("\n enter the three numbers\t");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	largest=a;
	else if(b>a&&b>c)
	largest=b;
	else if(c>a&&c>b)
	largest=c;
	printf("\n largest among %d %d and %d is %d",a,b,c,largest);
	getch();
}
