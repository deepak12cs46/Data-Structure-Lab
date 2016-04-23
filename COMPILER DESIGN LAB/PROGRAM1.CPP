#include <stdio.h>
#include <stdlib.h> // For exit()
int main()
{   int b[100],k;
    FILE *fptr;
    char filename[100],a[1000], c;
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
        //printf ("%c", c);
        a[i++]=c;
        c = fgetc(fptr);
    }
    for(k=0;k<100;k++)
        b[k]=0;
    for(j=0;j<i;++j)
        {
           if(a[j]=='i' && a[++j]=='f' && (a[++j]==' ' || a[++j]=='('))/// if
               b[0]++;
      else if(a[j]=='e' && a[++j]=='l' && a[++j]=='s' && a[++j]=='e' && (a[++j]==' ' || a[j]=='{'))///else
               {b[1]++;
               if(a[j]=='{')
                b[21]++;
               }
      else if(a[j]=='s' && a[++j]=='w' && a[++j]=='i' && a[++j]=='t' && a[++j]=='c' && a[++j]=='h' && a[++j]=='(')///switch
               b[2]++;
      else if(a[j]=='b' && a[++j]=='r' && a[++j]=='e' && a[++j]=='a' && a[++j]=='k' && (a[++j]==' ' || a[j]==';'))/// break
               {b[3]++;
               if(a[j]==';')
                b[24]++;
               }
      else if(a[j]=='f' && a[++j]=='o' && a[++j]=='r' && (a[++j]==' ' || a[j]=='('))///for
                b[4]++;
      else if(a[j]=='+')
                { if(a[++j]=='+')
                    b[19]++;
                else b[5]++;
                }
      else if(a[j]=='-')
                { if(a[++j]=='-')
                    b[20]++;
                else b[6]++;
                }
      else if(a[j]=='*')
                b[7]++;
      else if(a[j]=='/')
                b[8]++;
      else if(a[j]=='%')
                b[9]++;
    else if(a[j]=='*')
                b[5]++;
    else if(a[j]=='<')
    {
        if(a[++j]=='=')
            b[11]++;
        else b[10]++;
    }
    else if(a[j]=='>')
    {
        if(a[++j]=='=')
            b[13]++;
        else b[12]++;
    }
    else if(a[j]=='=')
    {
        if(a[++j]=='=')
            b[14]++;
        else b[18]++;
    }
    else if(a[j]=='!' && a[++j]=='=')
            b[15]++;
    else if(a[j]=='|' && a[++j]=='|')
            b[17]++;
    else if(a[j]=='&' && a[++j]=='&')
            b[16]++;
    else if(a[j]==',')
                b[23]++;
    else if(a[j]=='}')
                b[22]++;
    else if(a[j]=='{')
                b[21]++;
    else if(a[j]==';')
                b[24]++;
    else continue;
        }
    printf("\n\nIDENTIFIERS:::: \n");
        if(b[0]>0)
        printf("\tif  \n");
        if(b[1]>0)
        printf("\telse  \n");
            if(b[2]>0)
        printf("\tswitch  \n");
            if(b[3]>0)
        printf("\tbreak \n");
            if(b[4]>0)
        printf("\tfor  \n");
    printf("\n\nMATHEMATICAL EXPRESSION:::: \n");

            if(b[5]>0)
        printf("\t+  \n");
            if(b[6]>0)
        printf("\t-  \n");
            if(b[7]>0)
        printf("\t* \n");
            if(b[8]>0)
        printf("\t/  \n");
            if(b[9]>0)
        printf("\t%% \n");
    printf("RELATIONAL  :::: \n");

            if(b[10]>0)
        printf("\t<  \n");
            if(b[11]>0)
        printf("\t<= \n");
            if(b[12]>0)
        printf("\t>  \n");
            if(b[13]>0)
        printf("\t>=  \n");
            if(b[14]>0)
        printf("\t== \n");
            if(b[15]>0)
        printf("\t!= \n");
    printf("LOGICAL :::: \n");

            if(b[16]>0)
        printf("\t&&  \n");
            if(b[17]>0)
        printf("\t||  \n");
        printf("ASSIGNMENT:::: \n");

            if(b[18]>0)
        printf("\t=  \n");
        printf("INCREMENT & DECREMENT:::: \n");

            if(b[19]>0)
        printf("\t++  \n");
            if(b[20]>0)
        printf("\t--  \n");
        printf("PUNCTUATION SYMBOLS:::: \n");

            if(b[21]>0)
        printf("\t{  \n");
            if(b[22]>0)
        printf("\t}  \n");
            if(b[23]>0)
        printf("\t,  \n");
            if(b[24]>0)
        printf("\t;  \n");
    fclose(fptr);
    return 0;
}
