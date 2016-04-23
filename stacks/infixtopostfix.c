#include<stdio.h>
#include<string.h>

void main()
{
    int i;
    char cis,ch;
printf("ENTER EXPRESSION IN STRING AND ENDING WITH '#'\n");
scanf("%s",s);
ch='#';
top=push(ch);
cis=s[i];
while(cis!='#')
{
  if((cis>'A') &&(cis<'Z') || (cis>'a') &&(cis<'z'))
printf("%c",cis);
  else if(cis=='(')
      top=push(cis);
  else if(cis==')')
      top=pop(cis);
  else if((cis=='+') || (cis=='+') || (cis=='-') || (cis=='*') || (cis=='/') || (cis=='^'))

}
}
