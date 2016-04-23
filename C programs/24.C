#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
void main()
{
char str[10];
int i=0,j,test;
clrscr();
printf("enter the word");
scanf("%s",str);
j=strlen(str)-1;
while(i<=j)
{
if(str[i]==str[j])
test=1;
else
{
test=0;
break;
}
i++;
j--;
}
if(test==1)
printf("word is polindroe\n");
else
printf("\n not a polydrrome");
getch();
}

