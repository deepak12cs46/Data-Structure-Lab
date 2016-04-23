#include<stdio.h>
void main()
{
 int a[25],n,j,i,s;
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
    while(1){
            printf("ENTER ELEMENT TO BE SEARCH\n");
    scanf("%d",&s);
    a[n]=s;
    j=0;
    while(s!=a[j])
        j++;
    if(j<n)
        printf("successful search");
    else printf("unsuccessful search");
}}
