
	/*************************************************/
	/*To reverse the given integer*/

	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	long r,m,s=0,n;
	clrscr();
	printf("\n\tOutput::\n");
	printf("\tEnter a number:");
	scanf("%ld",&n);
	m=n;
	while(m)
	{
	r=m%10;
	s=s*10+r;
	m/=10;
	}
	printf("\n\tGiven no:%ld",n);
	printf("\n\tReverse=%ld",s);
	getch();


	}



