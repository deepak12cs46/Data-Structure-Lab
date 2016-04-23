#include<conio.h>
#include<stdio.h>
#include<process.h>
void main()
{
FILE *ft,*fs;
int c=0;
clrscr();
fs=fopen("a.txt","r");
ft=fopen("b.txt","w");
if(fs==NULL)
{
printf("source file opening error");
exit(1);
}
else
if(ft==NULL)
{
printf("\ntarget file opening error");
exit(1);
}
while(!feof(fs))
{
fputc(fgetc(fs),ft);
c++;
}
printf("\n%d bytes copied from 'a.txt to 'b.txt'",c);
c=fcloseall();
printf("\n %d files closed",c);
getche();
}