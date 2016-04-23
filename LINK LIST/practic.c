#include<stdio.h>
#include<string.h>
    void main()
{
   int i=0;
    char s[100],c;
   printf("ENTER YOUR NAME\n");
   scanf("%[^\n]s",s);
   while (s[i]!='\0')
    {
    printf("s[%d] is %c\n",i,s[i]);
    i++;
    }
    printf("TOTAL NUMBER OF CHARACTERS=%d\n",i+1);
    printf("NAME IN SHORT FORM\t%c\t",s[0]);
while (s[i]!='\0')
    {
        if(s[i]==' ')
    {
     printf("%c",s[i+1]);
    }
    i++;
}

}
