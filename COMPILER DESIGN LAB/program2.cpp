#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
struct lex
{
     int countt;
     int arr[100];
};
int main()
{   int k;
    FILE *fptr;
    char filename[100],a[100000], str[100],c;
    int i,j,line_no=0;
    lex  b[100];
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
        b[k].countt=0;
    for(j=0;j<i;++j)
        {
           if(a[j]=='i' && a[++j]=='f' && (a[++j]==' ' || a[++j]=='('))/// if
              {
                   b[0].countt++;
                   b[0].arr[b[0].countt]=line_no;
              }
      else if(a[j]=='d' && a[++j]=='o' && (a[++j]==' ' || a[j]=='{'))/// do
             {
                  {b[29].countt++;
                   b[29].arr[b[29].countt]=line_no;
                  }
             if(a[j]=='{')
                {b[21].countt++;
                 b[21].arr[b[21].countt]=line_no;
                }
             }
      else if(a[j]=='e' && a[++j]=='l' && a[++j]=='s' && a[++j]=='e' && (a[++j]==' ' || a[j]=='{'))///else
               {
                    {b[1].countt++;
                b[1].arr[b[1].countt]=line_no;
                    }
               if(a[j]=='{')
                {b[21].countt++;
                 b[21].arr[b[21].countt]=line_no;
                }
               }
      else if(a[j]=='w' && a[++j]=='h' && a[++j]=='i' && a[++j]=='l' && a[++j]=='e' && (a[++j]==' ' || a[j]=='('))///while
               {
                    {b[28].countt++;
                b[28].arr[b[28].countt]=line_no;
                    }
               if(a[j]=='{')
                {b[21].countt++;
                 b[21].arr[b[21].countt]=line_no;
                }
               }
         else if(a[j]=='c' && a[++j]=='a' && a[++j]=='s' && a[++j]=='e' && (a[++j]==' '))///case
               {b[25].countt++;
                b[25].arr[b[25].countt]=line_no;
               }
          else if(a[j]=='g' && a[++j]=='o' && a[++j]=='t' && a[++j]=='o' && (a[++j]==' '))///goto
               {b[26].countt++;
                b[26].arr[b[26].countt]=line_no;
               }
      else if(a[j]=='s' && a[++j]=='w' && a[++j]=='i' && a[++j]=='t' && a[++j]=='c' && a[++j]=='h' && a[++j]=='(')///switch
               {b[2].countt++;
                b[2].arr[b[2].countt]=line_no;
               }
     else if(a[j]=='c' && a[++j]=='o' && a[++j]=='n' && a[++j]=='t' && a[++j]=='i' && a[++j]=='n' && a[++j]=='u' && a[++j]=='e' && (a[++j]==';' || a[j]==' '))///CONTINUE
               {b[27].countt++;
                b[27].arr[b[27].countt]=line_no;
               }
      else if(a[j]=='b' && a[++j]=='r' && a[++j]=='e' && a[++j]=='a' && a[++j]=='k' && (a[++j]==' ' || a[j]==';'))/// break
               {
                    {b[3].countt++;
                b[3].arr[b[3].countt]=line_no;
                    }
               if(a[j]==';')
                {b[24].countt++;
                 b[24].arr[b[24].countt]=line_no;
                }
               }
      else if(a[j]=='f' && a[++j]=='o' && a[++j]=='r' && (a[++j]==' ' || a[j]=='('))///for
                {b[4].countt++;
                 b[4].arr[b[4].countt]=line_no;
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
      else if(a[j]=='\n')
               line_no++;
    else continue;
        }
    printf("\n\n KEYWORD :::: \n");
        if(b[0].countt>0)
       {
          printf("\n\tif \t\t\t\t%d\n",b[0].countt);
          printf("\nLINE NUMBERS ::");
          for(i=0;i<b[0].countt;i++)
               printf("%d,  ",b[0].arr[i]);
       }
        if(b[1].countt>0)
        {printf("\n\telse \t\t\t\t%d \n",b[1].countt);
     printf("\nLINE NUMBERS ::");
          for(i=0;i<b[1].countt;i++)
               printf("%d,  ",b[1].arr[i]);
          }
            if(b[2].countt>0)
        {printf("\n\tswitch \t\t\t\t%d \n",b[2].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[2].countt;i++)
               printf("%d,  ",b[2].arr[i]);
        }
            if(b[3].countt>0)
        {printf("\n\tbreak\t\t\t\t%d \n",b[3].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[3].countt;i++)
               printf("%d,  ",b[3].arr[i]);
          }
            if(b[28].countt>0)
        {printf("\n\twhile \t\t\t\t%d \n",b[28].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[28].countt;i++)
               printf("%d,  ",b[28].arr[i]);

         }
         if(b[27].countt>0)
        {printf("\n\tcontinue  \t\t\t\t%d\n",b[27].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[27].countt;i++)
               printf("%d,  ",b[27].arr[i]);
         }
         if(b[29].countt>0)
        {printf("\n\tdo \t\t\t\t%d \n",b[29].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[29].countt;i++)
               printf("%d,  ",b[29].arr[i]);
         }
         if(b[25].countt>0)
        {printf("\n\tcase \t\t\t\t%d \n",b[25].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[25].countt;i++)
               printf("%d,  ",b[25].arr[i]);

         }
         if(b[26].countt>0)
        {printf("\n\tgoto\t\t\t\t%d  \n",b[26].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[26].countt;i++)
               printf("%d,  ",b[26].arr[i]);
        }
         if(b[4].countt>0)
        {printf("\n\tfor \t\t\t\t%d \n",b[4].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[4].countt;i++)
               printf("%d,  ",b[4].arr[i]);
        }
    printf("\n\nMATHEMATICAL EXPRESSION:::: \n");

            if(b[5].countt>0)
        {printf("\n\t+ \t\t\t\t%d \n",b[5].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[5].countt;i++)
               printf("%d,  ",b[5].arr[i]);
          }
            if(b[6].countt>0)
        {printf("\n\t- \t\t\t\t%d \n",b[6].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[6].countt;i++)
               printf("%d,  ",b[6].arr[i]);
        }
            if(b[7].countt>0)
        {printf("\n\t* \t\t\t\t%d\n",b[7].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[7].countt;i++)
               printf("%d,  ",b[7].arr[i]);
        }
            if(b[8].countt>0)
        {printf("\n\t/ \t\t\t\t%d \n",b[8].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[8].countt;i++)
               printf("%d,  ",b[8].arr[i]);
        }
            if(b[9].countt>0)
        {printf("\n\t%% \t\t\t\t%d\n",b[9].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[9].countt;i++)
               printf("%d,  ",b[9].arr[i]);
        }
    printf("\nRELATIONAL  :::: \n");

            if(b[10].countt>0)
        {printf("\n\t<  \t\t\t\t%d\n",b[10].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[10].countt;i++)
               printf("%d,  ",b[10].arr[i]);
        }
            if(b[11].countt>0)
        {printf("\n\t<=\t\t\t\t%d \n",b[11].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[11].countt;i++)
               printf("%d,  ",b[11].arr[i]);
        }
            if(b[12].countt>0)
        {printf("\n\t>  \t\t\t\t%d\n",b[12].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[12].countt;i++)
               printf("%d,  ",b[12].arr[i]);
        }
            if(b[13].countt>0)
        {printf("\n\t>=  \t\t\t\t%d\n",b[13].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[13].countt;i++)
               printf("%d,  ",b[13].arr[i]);
        }
            if(b[14].countt>0)
        {printf("\n\t== \t\t\t\t%d\n",b[14].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[14].countt;i++)
               printf("%d,  ",b[14].arr[i]);
          }
            if(b[15].countt>0)
        {printf("\n\t!= \t\t\t\t%d\n",b[15].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[15].countt;i++)
               printf("%d,  ",b[15].arr[i]);
        }
    printf("\nLOGICAL :::: \t\t\t\t%d\n");

            if(b[16].countt>0)
        {printf("\n\t&& \t\t\t\t%d \n",b[16].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[16].countt;i++)
               printf("%d,  ",b[16].arr[i]);
        }
            if(b[17].countt>0)
        {printf("\n\t||  \t\t\t\t%d\n",b[17].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[17].countt;i++)
               printf("%d,  ",b[17].arr[i]);
        }
        printf("\nASSIGNMENT:::: \n");

            if(b[18].countt>0)
        {printf("\n\t= \t\t\t\t%d \n",b[18].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[18].countt;i++)
               printf("%d,  ",b[18].arr[i]);
        }
        printf("\nINCREMENT & DECREMENT:::: \n");

            if(b[19].countt>0)
        {printf("\n\t++ \t\t\t\t%d \n",b[19].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[19].countt;i++)
               printf("%d,  ",b[19].arr[i]);

          }
            if(b[20].countt>0)
        {printf("\n\t--  \t\t\t\t%d\n",b[20].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[20].countt;i++)
               printf("%d,  ",b[20].arr[i]);
        }
        printf("\nPUNCTUATION SYMBOLS:::: \n");

            if(b[21].countt>0)
        {printf("\n\t{  \t\t\t\t%d\n",b[21].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[21].countt;i++)
               printf("%d,  ",b[21].arr[i]);
        }
            if(b[22].countt>0)
        {printf("\n\t}  \t\t\t\t%d\n",b[22].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[22].countt;i++)
               printf("%d,  ",b[22].arr[i]);
        }
            if(b[23].countt>0)
        {printf("\n\t, \t\t\t\t%d \n",b[23].countt);
       printf("\nLINE NUMBERS ::");
          for(i=0;i<b[23].countt;i++)
               printf("%d,  ",b[23].arr[i]);
        }
            if(b[24].countt>0)
        {printf("\n\t;  \t\t\t\t%d\n",b[24].countt);
       printf("\n\nLINE NUMBERS ::");
          for(i=0;i<b[24].countt;i++)
               printf("%d,  ",b[24].arr[i]);
        }
        cout<<"\nLINE_no"<<line_no<<endl;
    fclose(fptr);
    return 0;
}

