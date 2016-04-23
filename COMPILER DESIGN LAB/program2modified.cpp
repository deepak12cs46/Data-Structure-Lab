#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
struct lex
{
     int countt;
     int arr[500];
};
int main()
{   int k;
    FILE *fptr;
    char filename[100],a[100000], str[100],c;
    char key[30][10]={"if","else","switch","break","for","+","-","*","/","%","<","<=",">",">=","==","!=","&&","||","=","++","--","{","}",",",";","case","goto","continue","while","do"};
    int i,j,line_no=0;
    lex  b[100];
    i=0;
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
        c = fgetc(fptr);
    }
    for(k=0;k<=100;k++)
        b[k].countt=0;
    for(j=0;j<i;++j)
        {
           if(a[j]=='i' && a[j+1]=='f')/// if
              {
                   b[0].countt++;
                   b[0].arr[b[0].countt]=line_no;
                   j=j+1;
              }
      else if(a[j]=='d' && a[j+1]=='o')/// do
             {
                  {b[29].countt++;
                   b[29].arr[b[29].countt]=line_no;
                    j=j+1;
                  }
             }
      else if(a[j]=='e' && a[ j+1]=='l' && a[j+2]=='s' && a[j+3]=='e')///else
               {
                    {
                         b[1].countt++;
                b[1].arr[b[1].countt]=line_no;
                j=j+3;
                    }
               }
      else if(a[j]=='w' && a[j+1]=='h' && a[j+2]=='i' && a[j+3]=='l' && a[j+4]=='e')///while
               {
                    {b[28].countt++;
                b[28].arr[b[28].countt]=line_no;
                j=j+4;
                    }
               }
         else if(a[j]=='c' && a[j+1]=='a' && a[j+2]=='s' && a[j+3]=='e')///case
               {
                    b[25].countt++;
                b[25].arr[b[25].countt]=line_no;
                j=j+3;
                    }
          else if(a[j]=='g' && a[j+1]=='o' && a[j+2]=='t' && a[j+3]=='o')///goto
               {
                    b[26].countt++;
                b[26].arr[b[26].countt]=line_no;
                j=j+3;
               }
      else if(a[j]=='s' && a[j+1]=='w' && a[j+2]=='i' && a[j+3]=='t' && a[j+4]=='c' && a[j+5]=='h')///switch
               {b[2].countt++;
                b[2].arr[b[2].countt]=line_no;
                j=j+5;
               }
     else if(a[j]=='c' && a[j+1]=='o' && a[j+2]=='n' && a[j+3]=='t' && a[j+4]=='i' && a[j+5]=='n' && a[j+6]=='u' && a[j+7]=='e' )///CONTINUE
               {b[27].countt++;
                b[27].arr[b[27].countt]=line_no;
                j=j+7;
               }
      else if(a[j]=='b' && a[j+1]=='r' && a[j+2]=='e' && a[j+3]=='a' && a[j+4]=='k')/// break
               {
                    {b[3].countt++;
                b[3].arr[b[3].countt]=line_no;
                j=j+4;
                    }
               }
      else if(a[j]=='f' && a[j+1]=='o' && a[j+2]=='r')///for
                {b[4].countt++;
                 b[4].arr[b[4].countt]=line_no;
                 j=j+2;
                }
      else if(a[j]=='+')
                { if(a[++j]=='+')
                    {b[19].countt++;
                     b[19].arr[b[19].countt]=line_no;
                     }
                else {b[5].countt++;
                 b[5].arr[b[5].countt]=line_no;
                }
                }
      else if(a[j]=='-')
                { if(a[++j]=='-')
                    {b[20].countt++;
                     b[20].arr[b[20].countt]=line_no;
                    }
                else {b[6].countt++;
                 b[6].arr[b[6].countt]=line_no;
                }
                }
      else if(a[j]=='*')
                {b[7].countt++;
                 b[7].arr[b[7].countt]=line_no;
                }
      else if(a[j]=='/')
                {b[8].countt++;
                 b[8].arr[b[8].countt]=line_no;
                }
      else if(a[j]=='%')
                {b[9].countt++;
                 b[9].arr[b[9].countt]=line_no;
                }
    else if(a[j]=='*')
                {b[5].countt++;
                 b[5].arr[b[5].countt]=line_no;
                }
    else if(a[j]=='<')
    {
        if(a[++j]=='=')
            {b[11].countt++;
             b[11].arr[b[11].countt]=line_no;
            }
        else {
               b[10].countt++;
         b[10].arr[b[10].countt]=line_no;
        }
    }
    else if(a[j]=='>')
    {
        if(a[++j]=='=')
            {b[13].countt++;
             b[13].arr[b[13].countt]=line_no;
            }
        else {b[12].countt++;
         b[12].arr[b[12].countt]=line_no;
        }
    }
    else if(a[j]=='=')
    {
        if(a[++j]=='=')
            {b[14].countt++;
             b[14].arr[b[14].countt]=line_no;
            }
        else
        {b[18].countt++;
         b[18].arr[b[18].countt]=line_no;
        }
    }
    else if(a[j]=='!' && a[++j]=='=')
            {b[15].countt++;
             b[15].arr[b[15].countt]=line_no;
            }
    else if(a[j]=='|' && a[++j]=='|')
            {b[17].countt++;
             b[17].arr[b[17].countt]=line_no;
            }
    else if(a[j]=='&' && a[++j]=='&')
            {b[16].countt++;
             b[16].arr[b[16].countt]=line_no;
            }
    else if(a[j]==',')
                {b[23].countt++;
                 b[23].arr[b[23].countt]=line_no;
                }
    else if(a[j]=='}')
                {
                     b[22].countt++;
                 b[22].arr[b[22].countt]=line_no;
                }
    else if(a[j]=='{')
                {
                     b[21].countt++;
                 b[21].arr[b[21].countt]=line_no;
                }
    else if(a[j]==';')
               {
                  b[24].countt++;
                 b[24].arr[b[24].countt]=line_no;
               }
     else if (a[j]=='"')
     {    ++j;
          while(a[j]!='"')
               ++j;
     }
     else if (a[j]=='[')
     {    ++j;
          while(a[j]!=']')
               ++j;

     }
      else if(a[j]=='\n')
               line_no++;
    else continue;
        }
            for(j=0;j<30;j++)
        {      printf("\noperator:::='");
             for(i=0;key[j][i]!='\0';i++)
             {
                  printf("%c",key[j][i]);
             }
             printf("'\tNUMBER OF OCCURENECE:=%d\nLINE NUMBERS::=",b[j].countt);
            for(i=1;i<=b[j].countt;i++)
               printf("%d,  ",b[j].arr[i]);
        }
    fclose(fptr);
    return 0;
}

