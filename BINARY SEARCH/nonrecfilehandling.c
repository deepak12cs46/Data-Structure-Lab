#include<stdio.h>
void binsearch(int ,int);
void main()
{
    int n,s;
    printf("ENTER NO OF ELEMENTS\n");
    scanf("%d",&n);
    printf("ENTER ELEMENT TO BE SEARCHED\n");
    scanf("%d",&s);
    binsearch(n,s);
    getchar ();
}
void binsearch(int n,int s)
{
 int l,u,m,i,a[25];
 FILE *fp;
    fp=fopen("arrbinsearch.txt","r");
    i=0;
    while(i<n)
    {
        fscanf(fp,"%d",&a[i]);
        i++;
    }
    printf("ENTERED LIST IS BELOW\n");
    for(i=0;i<n;i++)
        fprintf(stdout,"%d\t",a[i]);
    l=1;
    u=n;
    while(u>=l)
    {
        m=(l+u)/2;
        if (s==a[m])
        {
        printf("SUCCESSFULL SEARCH AND NO. %d IS FOUND AT %dth  POSITION",a[m],m+1);
        exit(1);
        }
        else if (s<a[m])
            {
                u=m-1;
                m=(l+u)/2;
            }
        else if (s>a[m])
        {
         l=m+1;
         m=(l+u)/2;
        }
    }
    if(l>u)
        printf("UNSUCCESSFULL SEARCH\n");

    return 0;
}

