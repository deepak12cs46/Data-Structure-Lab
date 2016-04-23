#include<stdio.h>
#include<conio.h>
void main()
{
    struct siddhartha
    {
        char name[20];
        char alias[20];
        int marks;
    }s1,s2,s3;
printf("ENTER NAME ALIAS MARKS\n");
scanf("%s %s %d",s1.name,s1.alias,&s1.marks);
strcpy(s2.name,s1.name);
strcpy(s2.alias,s1.alias);
s2.marks=s1.marks;

s3=s1;
printf("%s \t%s \t%d\n",s2.name,s2.alias,s2.marks);
printf("%s \t%s\t %d\n",s3.name,s3.alias,s3.marks);
getch();
}
