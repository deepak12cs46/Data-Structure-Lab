#include<stdio.h>
#include<cstring>
#include<ctype.h>
#include<conio.h>
int main()
{
    char keywords[6][10]={"int","char","static","struct","union","return"};
    int count[7]={0};
    FILE *fp;
    char str[100];
    fp=fopen("PROG1.TXT","r");
    if(fp==NULL)
        { printf("nCannot open the file");
    return 0;
    }
    while(!feof(fp))
        {       fgets(str,sizeof(str),fp);
    puts(str);   if(strstr(str,keywords[0]))
     {    count[0]++;
      count[6]++;
         }
            if(strstr(str,keywords[1]))   {    count[1]++;    count[6]++;                             }   if(strstr(str,keywords[2]))   {    count[2]++;    count[6]++;   }   if(strstr(str,keywords[3]))   {    count[3]++;    count[6]++;   }   if(strstr(str,keywords[4]))   {    count[4]++;    count[6]++;   }   if(strstr(str,keywords[5]))   {    count[5]++;    count[6]++;   }                  }printf("nNO of int s  = %d",count[0]); printf("nNo of char s = %d",count[1]);printf("nNo of static s = %d",count[2]);
    printf("nNo of struct s = %d",count[3]);printf("nNo of union s= %d",count[4]);printf("nNo of return s= %d",count[5]);printf("nTotal Keywords = %d",count[6]);getch();return 0;}
