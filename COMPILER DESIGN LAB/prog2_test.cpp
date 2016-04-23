#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<ctype.h>
#include<cstring>
using namespace std;
int main()
{   int k,line=0;
    FILE *fptr;
    char filename[100],a[100000], str[100],c;
    int i,j;
    i=0;
    //printf("Enter the filename to open \n");
    //scanf("%s", filename);
    fptr = fopen("PROG1.TXT", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    c = fgetc(fptr);
    while (c != EOF)
    {
        a[i++]=c;
        if(c=='\0')
          line++;
    }
    for(i=0;i<strlen(str);i++)
    {
         cout<<str[i];
    }
}
