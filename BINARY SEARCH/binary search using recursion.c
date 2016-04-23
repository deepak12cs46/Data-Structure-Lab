#include<stdio.h>
void binsearch(int ,int ,int );
    int m,l,u,s,a[25];
void main()
{
    int i,j,n;
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
        fprintf(stdout,"%d\n",a[i]);
   while(1)
    {
    printf("enter element to be sarched\t");
    scanf("%d",&s);
    l=1;
    u=n;
    binsearch(l,u,s);
}}
void binsearch(int l,int u,int s)
{
    m=(l+u)/2;
    if(l>u)
        printf("UNSUCCESSFUL SEARCH\n");
    else
    {
        if(s<a[m])
           binsearch(l,m-1,s);
        else if (s>a[m])
            binsearch(m+1,u,s);
          else if(s==a[m])
        printf("successful search\n");
        else printf("ERROR\n");
    }
}
