#include<stdio.h>
#include<stdlib.h>
void bubblesort (int ,int *);
void main()
{
    int a[100],n,*p,i;
FILE *fp;
fp=fopen("deepakmarks.txt","r");
if (fp==NULL)
{
    printf("UNABLE TO OPEN\n");
    exit(0);
}
printf("ENTER NO. OF ELEMENTS\n");
n=12;
i=0;
while(i<n)
{
    fscanf(fp,"%d",&a[i]);
    printf("%d\n",a[i]);
    i++;
}
p=a;
bubblesort(n,p);
}
void bubblesort(int n,int *p)
{
int i,t,x,y,z,flag;
i=0;
while(x<n-i)
{
 flag=0;
 y=0;
 while(y<n)
 {
     if(*(p+y)>*(p+y+1))
     {
         t=*(p+y);
         *(p+y)=*(p+y+1);
         *(p+y+1)=t;
         flag++;
     }
     y++;
 }
 if (flag==0)
 {
     z=0;
     printf("AFTER SORTING THE LIST underflag\n");
     while(z<n)
     {
         printf("%d\n",*(p+z));
         z++;
     }
     exit(1);
 }
 i++;
 }
  z=0;
     printf("AFTER SORTING THE LIST\n");
     while(z<n)
     {
         printf("%d\n",*(p+z));
         z++;
     }
}
























