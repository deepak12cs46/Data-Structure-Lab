#include<stdio.h>
#include<stdlib.h>
int main()
{
 FILE *fp;
 int a=0;
 char ch;

 fp = fopen("marks1.txt" ,"r");
 if(fp==NULL)
 {
     printf("file not open");
     exit(1);
 }
 while(1)
 {

    ch=fgetc(fp);

    if(ch==EOF)
        break;
    printf("%c\n",ch);
}
 printf("\n");
 fclose(fp);
 return 0;
}
