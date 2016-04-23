#include<stdio.h>
#include<stdlib.h>
    int i;
FILE *fp,*fo;
typedef struct student
{
    int rollno;
    int marks1;
    int marks2;
    int marks3;
    float avg;
}s;
s *p;

void main()
{
p=(s *)malloc(10*sizeof(s));
fp=fopen("dtest.txt","r");
while (fgetc(fp)!='\n');
i=0;
while (i<10)
{
    fscanf(fp,"%d %d %d %d",&p[i].rollno,&p[i].marks1,&p[i].marks2,&p[i].marks3);
    p[i].avg=(p[i].marks1+p[i].marks2+p[i].marks3)/3;
    i++;
}
fo=fopen("ndtest.txt","w");
i=0;
while (i<10)
{
    fprintf(fo,"%d\t\t%.2f\n",p[i].rollno,p[i].avg);
    i++;
}
}
