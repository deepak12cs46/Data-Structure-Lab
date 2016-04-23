#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i,j;
FILE *file;
file= fopen("marks.txt","r");
typedef struct stud{
	int roll_no;
	int marks1,marks2,marks3;
	int avg;
}stu;

int num=3;
stu *s;
//s= (stu *)calloc(num,sizeof(stu));
s= (stu *)malloc(num*sizeof(stu));
while(fgetc(file)!='\n');
for(i=0;i<3;i++)
{
	fscanf(file,"%d %d %d %d",&s[i].roll_no,&s[i].marks1,&s[i].marks2,&s[i].marks3);
}

FILE *output;
output= fopen("new_marks.txt","w");
for(i=0;i<3;i++)
{
	s[i].avg=(s[i].marks1+s[i].marks2+s[i].marks3)/3;
}

fprintf(output,"roll_no\tmarks1\tmarks2\tmarks3\taverage\n");
for(i=0;i<3;i++)
{
	fprintf(output,"%3d\t%3d\t%3d\t%3d\t%3d\n",s[i].roll_no,s[i].marks1,s[i].marks2,s[i].marks3,s[i].avg);
}
}
