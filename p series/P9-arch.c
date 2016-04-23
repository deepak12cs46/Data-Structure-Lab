#include<stdio.h>
#include<string.h>
//#include<conio.h>
void main()
{
    int i,j;
    char * ele[100],*t[100];//,t[20][100];
    for(i=0;i<10;i++)
        {ele[i]=(char*)malloc(10*sizeof(char));
        t[i]=(char*)malloc(10*sizeof(char));
        }

    //for(i=0;i<10;i++)
    printf("ENTER ELEMENTS OF DICTIONARY\n");
    for(i=0;i<10;i++)
    {
         scanf("%s",ele[i]);
        //printf("%s",ele[i]);
    }

    for(i=1;i<10;i++)
    {
        for(j=1;j<10-i;j++)
        {
            if (strcmp(ele[j-1],ele[j]))
            {
                strcpy(t[20],ele[j-1]);
                strcpy(ele[j-1],ele[j]);
                strcpy(ele[j],t[20]);
            }
        }
    }
for(i=1;i<=10;i++)
    printf("%s",ele[i]);
}
