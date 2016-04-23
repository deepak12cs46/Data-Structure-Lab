#include<stdio.h>
#include<conio.h>
int mergearra(int *,int *,int *,int, int );
int sortarr(int *,int ,int );
  int main()
{
    int m,n,a[100],b[100],c[200],*q,*r,i,j,k,*p;
   printf("enter element in array1\n");
   scanf("%d",&m);
   for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    p=a;
    printf("enter element in array2\n");
   scanf("%d",&n);
   for(j=0;j<n;j++)
    scanf("%d",&b[j]);
    q=b;
    r=c;
    mergearr(p,q,r,m,n);
    sortarr(r,m,n);
   return 0;
}
int mergearr(int *p,int *q,int *r,int m,int n)
{
  int i,j,k;
    for(i=0;i<m;i++)
        *(r+i)=*(p+i);
    for(j=0;j<n;j++)
         *(r+i+j)=*(q+j);
      printf("after merging array\n");
    for(k=0;k<(i+j);k++)
        printf("%d\n",*(r+k));
    return (*(r+k));
}
int sortarr(int *r,int m,int n)
{
  int i,j,t,k,l;
  k=m+n;
   for(i=0;i<k;i++)
        {
        for(j=0;j<k;j++)
          {
            if((*(r+i))>(*(r+j)))
              {
                t=(*(r+i));
               (*(r+i))=(*(r+j));
               (*(r+j))=t;
               }
           }
        }
printf("after sorting array\n");
for(l=0;l<k;l++)
printf("%d\n",(*(r+l)));
return (*(r+l));
}

