#include<stdio.h>
void main()
{
int a[100],i;
FILE *fp;
fp=fopen("arrbinsearch.txt","w");
for(i=0;i<100;i++)
{
a[i]=5*i;
fprintf(stdout,"%d\n",a[i]);
printf("%d\t",a[i]);
}
}
