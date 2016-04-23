	/*program to conver lower case to upper case string and vise versa
		*/


	#include<stdio.h>
	#include<conio.h>

	int main()
	{

	int i,x,n;
	char s1[50],s2[50];

	

	printf("\tOUTPUT:");
	printf("\n\tEnter any string....:");

	gets(s1);

	for(i=0;s1[i]!='\0';i++)
	{
	if(s1[i]>='a'&&s1[i]<='z')

	s2[i]=s1[i]-32;
	else if(s1[i]>='A'&&s1[i]<='Z')
	s2[i]=s1[i]+32;

	}
	s2[i]='\0';

	printf("\tConverted string :");

	puts(s2);

	getch();
	}





