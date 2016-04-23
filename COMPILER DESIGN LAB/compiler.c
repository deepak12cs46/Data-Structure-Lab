#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct tok
{
	char token_name[30],token_type[30]; int line_number,pointer_value,token_code;
}tokens;

tokens ctokens[100000];

int token_index=0;
char* delimiters=" #+-*/%<=>!&|={},;()[]\" \'";
char* keywords[]={"int","float","char","double","break","continue","switch","case","continue","if","else",
					"while"};
char* arithmetic[]={"+","-","*"};
char* conditional[]={"<","<=",">",">=","==","!="};
char* logical[]={"&&","||"};
char* assignment[]={"="};
char* incdec[]={"++","--"};
char* punctuation[]={"{","}",",",";"};
char line_numbers[500][100];
int i=0;

//will return true if a token in a particular category is found
int keywd(char* token,int len)
{
	int temp_index;
	char **ptr= keywords;

	for(temp_index=0;temp_index<len;temp_index++)
		if(strcmp(token,ptr[temp_index])==0)
			return temp_index;

	return -1;
}

int chkothr(char* token,char* ln)
{
	if(strstr(ln,token))
		return 1;

	return 0;
}

void getline_number(FILE *fp)
{
	int j=0;
	char ch;
	while(1)
	{
		ch=getchar();
		if(ch==EOF)
			break;
		if(ch=='\'' || ch=='\"')
		{
			while((ch=getchar())!='\n')
				;
		}

		if(ch=='\n')
		{
			i++,j=0;
		}
		else
		{
			line_numbers[i][j]=ch;
			j++;
		}
	}
}

char *sstrip(char *s)
{
    size_t size;
    char *end;

    size = strlen(s);

    if (!size)
    	return s;

    end = s + size - 1;
    while (end >= s && isspace(*end))
    	end--;
    *(end + 1) = '\0';

    while (*s && isspace(*s))
    	s++;

    return s;
}

void print()
{
	int k,len;
	for(k=0;k<=i;k++)
	{
		char ls[100];
		strcpy(ls,line_numbers[k]);
		char* str= ls;

		str= sstrip(str);

		char* pch = strtok (str,delimiters);

		while (pch != NULL)
		  {

		  	len=sizeof(keywords)/sizeof(keywords[0]);

		  	int tcode=0;

		  	if((tcode=keywd(pch,len))!=-1)
		  	{

		  		strcpy(ctokens[token_index].token_name,pch);
		  		strcpy(ctokens[token_index].token_type,"KEYWORD");
		  		ctokens[token_index].line_number = k;
		  		ctokens[token_index].token_code = tcode;
				int pos= strstr(line_numbers[k],pch)-line_numbers[k];
				ctokens[token_index].pointer_value = pos;
		  		token_index++;

		  	}
		  	else
		  		{

			  		pch = sstrip(pch);

			  		int flag=1;
			  		if(strchr(pch,'.') || strcmp(pch,"include")==0)
			  			flag=0;

			  		char *ptr= pch;
			  		int isNumber=1;

			  		while(*ptr!='\0')
			  		{
			  			if(!isdigit(*ptr))
			  			{
			  				isNumber=0;
			  				break;
			  			}
			  			ptr++;
			  		}

			  		if(isNumber)
			  		{
			  			strcpy(ctokens[token_index].token_name,pch);
				  		strcpy(ctokens[token_index].token_type,"CONSTANT");
				  		ctokens[token_index].line_number=k;
				  		ctokens[token_index].token_code = 33;
				  		int pos= strstr(line_numbers[k],pch)-line_numbers[k];
						ctokens[token_index].pointer_value=pos;
				  		token_index++;
			  		}

			  		else if(flag)
			  		{
				  		strcpy(ctokens[token_index].token_name,pch);
				  		strcpy(ctokens[token_index].token_type,"IDENTIFIER");
				  		ctokens[token_index].line_number=k;
				  		ctokens[token_index].token_code = 34;
				  		int pos= strstr(line_numbers[k],pch)-line_numbers[k];
						ctokens[token_index].pointer_value=pos;
				  		token_index++;
			  		}
		  		}

		     pch = strtok (NULL, delimiters);
		  }

		int tmp;

	  	for(tmp=0; tmp<sizeof(conditional)/sizeof(conditional[0]);tmp++)
	  	{
	  		if(strstr(line_numbers[k],conditional[tmp]))
	  		{
	  			strcpy(ctokens[token_index].token_name,conditional[tmp]);
		  		strcpy(ctokens[token_index].token_type,"CONDITIONAL");
		  		ctokens[token_index].line_number=k;
		  		ctokens[token_index].token_code = 35;
		  		int pos= strstr(line_numbers[k],conditional[tmp])-line_numbers[k];
				ctokens[token_index].pointer_value=pos;
		  		token_index++;
	  		}
	  	}
	  	for(tmp=0; tmp<sizeof(logical)/sizeof(logical[0]);tmp++)
	  	{
	  		if(strstr(line_numbers[k],logical[tmp]))
	  		{
	  			strcpy(ctokens[token_index].token_name,logical[tmp]);
		  		strcpy(ctokens[token_index].token_type,"LOGICAL");
		  		ctokens[token_index].line_number=k;
		  		ctokens[token_index].token_code = 36;
		  		int pos= strstr(line_numbers[k],logical[k])-line_numbers[k];
				ctokens[token_index].pointer_value=pos;
		  		token_index++;
	  		}
	  	}
	  	for(tmp=0; tmp<sizeof(assignment)/sizeof(assignment[0]);tmp++)
	  	{
	  		if(strstr(line_numbers[k],assignment[tmp]))
	  		{
	  			strcpy(ctokens[token_index].token_name,assignment[tmp]);
		  		strcpy(ctokens[token_index].token_type,"ASSIGNMENT");
		  		ctokens[token_index].line_number=k;
		  		ctokens[token_index].token_code = 37;
		  		int pos= strstr(line_numbers[k],assignment[tmp])-line_numbers[k];
				ctokens[token_index].pointer_value=pos;
		  		token_index++;
	  		}
	  	}
	  	for(tmp=0; tmp<sizeof(incdec)/sizeof(incdec[0]);tmp++)
	  	{
	  		if(strstr(line_numbers[k],incdec[tmp]))
	  		{
	  			strcpy(ctokens[token_index].token_name,incdec[tmp]);
		  		strcpy(ctokens[token_index].token_type,"INCREMENT/DECREMENT");
		  		ctokens[token_index].line_number=k;
		  		ctokens[token_index].token_code = 38;
		  		int pos= strstr(line_numbers[k],incdec[tmp])-line_numbers[k];
				ctokens[token_index].pointer_value=pos;
		  		token_index++;
	  		}
	  	}
	  	for(tmp=0; tmp<sizeof(punctuation)/sizeof(punctuation[0]);tmp++)
	  	{
	  		if(strstr(line_numbers[k],punctuation[tmp]))
	  		{
	  			strcpy(ctokens[token_index].token_name,punctuation[tmp]);
		  		strcpy(ctokens[token_index].token_type,"PUNCTUATION");
		  		ctokens[token_index].line_number=k;
		  		ctokens[token_index].token_code = 39;
		  		int pos= strstr(line_numbers[k],punctuation[tmp])-line_numbers[k];
				ctokens[token_index].pointer_value=pos;
		  		token_index++;
	  		}
	  	}

	}
}

int main()
{
	FILE *fp;
	fp= fopen("test1.c","r");
	getline_number(fp);
	print();

	int nm=0;

	printf("\n%20s\t%18s\t%14s%18s%19s\n\n","TOKEN","TYPE","TOKEN CODE","line_number","POINTER VALUE");


	for(;nm<token_index;nm++)
	{
		printf("%20s\t%20s\t%8d\t%14d\t\t%12d\n",ctokens[nm].token_name,ctokens[nm].token_type,ctokens[nm].token_code,ctokens[nm].line_number,ctokens[nm].pointer_value);
	}
}
