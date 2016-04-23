#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
static char sr[10],tar[10];
int diff=0,i;
clrscr();
printf("enter the string(1);");
gets(sr);
printf("enter string (2);");
gets(tar);
for(i=0;i<10;i++)
{
if(sr[i]==tar[i])
continue;
else
{
printf("%c %c\n",sr[9],tar[i]);
diff++;
}
}
if(strlen(sr)==strlen(tar)&&diff==0)
puts("\n the two strings are identical");
else
printf("\n the two strings are diffrent at %d places.",diff);
getche();
}