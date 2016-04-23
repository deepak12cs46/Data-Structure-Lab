#include<stdio.h>
#include<conio.h>
 int arrele (int *,int);
 int sumarr (int *,int);
 int searcharr (int *,int);
  int main()
 {
    int n,a[100],*p,i;
   printf("enter element in array\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    p=a;
   arrele(p,n);
   sumarr(p,n);
   searcharr(p,n);
   return 0;
}
int arrele (int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d\n",*(p+i));
}
int sumarr (int *p,int n)
{
    int s=0,i;
    for(i=0;i<n;i++)
    s=s+ (*(p+i));
    printf("%d\n",s);
}
int searcharr (int *p,int n)
{
   int t,i;
    printf("ENTER VALUE YOU WANT TO COMPARE\n");
    scanf("%d",&t);
    for(i=0;i<n;i++)
        if(t==*(p+i))
            printf("found = %d at the serial no.%d",t,i+1);
}
