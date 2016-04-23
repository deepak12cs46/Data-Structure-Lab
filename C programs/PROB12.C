
	/*    program to   Extract the string*/

	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	int i;
	char s1[10],s2[10];
	int j=0,m,n;
	clrscr();
	printf("\n\tOUTPUT::\n");
	printf("\n\tEnter the string:  ");
	gets(s1);
	printf("\n\tEnter the starting position: ");
	scanf("%d",&m);
	printf("\n\tEnter no.of characters: ");
	scanf("%d",&n);
	printf("\n\tThe extracted part of the given string is: ");
	for(i=m-1;i<m+n-1;i++)
	s2[j++]=s1[i];
	s2[j]='\0';
	puts(s2);
	getch();
	}
