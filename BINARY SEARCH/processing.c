#include<stdio.h>
void binsearch(int ,int ,int ,int *);
    int m;
void main()
{
    int i,j,l,u,n,s,a[25],*q;
    FILE *fp;
    printf("ENTER NO OF ELEMENTS\n");
    scanf("%d",&n);
    fp=fopen("arrbinsearch.txt","r");
    i=0;
    while(i<n)
    {
        fscanf(fp,"%d",&a[i]);
        i++;
    }
    for(i=0;i<n;i++)
        fprintf(stdout,"%d\t",a[i]);
    printf("enter element to be sarched\t");
    scanf("%d",&s);
    q=a;
    void binsearch(l,u,s,a);
}
void binsearch(int l,int u,int s,int *q)
{
     if(l>u)
        printf("UNSUCCESSFUL SEARCH\n");
    else
    {
        m=(l+u)/2;
        if(s<(*(q+m)))
           binsearch(l,m-1,s,q);
        else if (s>(*(q+m)))
            binsearch(m+1,u,s,q);
          else
        printf("successful search\n");
    }
}

