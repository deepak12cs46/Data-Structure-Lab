#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  int m,x;
  struct student
  {
  int roll no;
  int marks1;
  int marks2;
  int marks3;
  int avg;
}struct stu s;
 fp=fopen("marks.txt","r");
 if (fp==NULL)
 {
 printf(" CAN NOT OPEN FILE");
 beak;
 }
  for(x=1;x<3;x++)
            {
  fscanf(fp,"%d %d %d %d",roll no,marks1,marks2,marks3);
  fprintf(stdout,"%d %d %d %d",roll no,marks1,marks2,marks3);
   }
  fclose(fp);
 m=(marks1+marks2+marks3)/3;
 printf("%d",m);
 return 0;
}
