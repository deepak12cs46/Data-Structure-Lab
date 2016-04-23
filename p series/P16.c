#include<stdio.h>
#include<stdlib.h>
int main ()
{
    FILE *fp,*fs;
    int x;
    typedef struct clas
    {
        int rollno;
        int marks1;
        int marks2;
        int marks3;
        int total;
        int avg;
    }c;
    c *p;
    p=(c *)malloc(10*sizeof(c));
    if(p==NULL)
        printf("malloc failed");
    fp=fopen("dmarks.txt","r");
    if(fp==NULL)
        printf("file opening failed");
    while(fgetc(fp)!='\n');
    for(x=0;x<10;x++)
    {
        fscanf(fp,"%d %d %d %d",&p[x].rollno,&p[x].marks1,&p[x].marks2,&p[x].marks3);
    }
     for(x=0;x<10;x++)
     {
         p[x].total=(p[x].marks1)+(p[x].marks2)+(p[x].marks3);
         p[x].avg=((p[x].marks1)+(p[x].marks2)+(p[x].marks3))/3;
    }
    fs=fopen("ndmarks.txt","w");
    for(x=0;x<10;x++)
    {
        fprintf(fs,"%d\t%d\t%d\t%d\t%d\t%d\n",p[x].rollno,p[x].marks1,p[x].marks2,p[x].marks3,p[x].total,p[x].avg);
    }
    return 0;
}


