#include<stdio.h>
#include<string.h>
void main()
{
	char s[67];
	int l;
	printf("\n enter a string\t");
	gets(s);
	l=strlen(s)-1;
	printf("\n the string when reversed becomes:\t");
	for(;l>=0;l--)
	printf("%c",s[l]);
}
