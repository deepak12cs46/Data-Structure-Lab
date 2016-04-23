#include<stdio.h>
#include<stdlib.h>
void main()
{
 char ch;
 FILE *fp,*fc;

 fp = fopen("AA PROGRAMMING DETAILS.docx","rb");
fc= fopen("aa programmingpractice12.docx","wb");

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
  fputc(ch,fc);
  printf("opening till here");
  }
  else if (ch==EOF)
    break;
  }
  fclose(fp);
  fclose(fc);
  return 0;
}

