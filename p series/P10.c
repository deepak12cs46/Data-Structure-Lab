#include<stdio.h>
#include<stdlib.h>
void main()
{
 char ch;
 FILE *fp;
 fp = fopen("MARKING.txt","r");


  while(1)
  {
 if (fp==NULL)
  {
  printf("AN UNEXPECTED ERROR HAS BEEN HAS BEEN OCCURED");
  break ;
  }
  ch=fgetc(fp);
  if (ch!=EOF)
  {
  printf("%c",ch);
  }
  else if (ch==EOF)
    break;
  }
  fclose(fp);
  return 0;
}
