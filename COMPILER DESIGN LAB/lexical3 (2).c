#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct tok
{

	char t_name[30];
	char t_type[30];
	int line;
	int position;
	int token_code;

}tokens;

tokens ctokens[10000];

int token_index=0;

char* delimiters=" #+-*/%<=>!&|={},;()[]\" \'";

char* keywords[]={"int","float","char","double","break","continue","switch","case","continue","if","else",
					"while","long","static","struct","typedef","void","unsigned","for","do","default"};

char* arithmetic[]={"+","-","*","/","%"};

char* conditional[]={"<","<=",">",">=","==","!="};

char* logical[]={"&&","||"};

char* assignment[]={"="};

char* incdec[]={"++","--"};

char* punctuation[]={"{","}",",",";"};

char lines[500][100];

int i=0;


//will return true if a token in a particular category is found
int checkKeyword(char* token,int len)
{
	int temp_index;
	char **ptr= keywords;

	for(temp_index=0;temp_index<len;temp_index++)
		if(strcmp(token,ptr[temp_index])==0)
			return temp_index;

	return -1;
}

int checkOther(char* token,char* ln)
{
	if(strstr(ln,token))
		return 1;

	return 0;
}


void getLine(FILE *fp)
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
			lines[i][j]=ch;
			j++;
		}
	}
}

char *strstrip(char *s)
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


void printLines()
{
	int k,len;
	for(k=0;k<=i;k++)
	{
		char ls[100];
		strcpy(ls,lines[k]);
		char* str= ls;

		str= strstrip(str);

		char* pch = strtok (str,delimiters);

		while (pch != NULL)
		  {

		  	len=sizeof(keywords)/sizeof(keywords[0]);

		  	int tcode=0;

		  	if((tcode=checkKeyword(pch,len))!=-1)
		  	{

		  		strcpy(ctokens[token_index].t_name,pch);
		  		strcpy(ctokens[token_index].t_type,"KEYWORD");
		  		ctokens[token_index].line = k;
		  		ctokens[token_index].token_code = tcode;
				int pos= strstr(lines[k],pch)-lines[k];
				ctokens[token_index].position = pos;
		  		token_index++;

		  	}
		  	else
		  		{

			  		pch = strstrip(pch);

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
			  			strcpy(ctokens[token_index].t_name,pch);
				  		strcpy(ctokens[token_index].t_type,"CONSTANT");
				  		ctokens[token_index].line=k;
				  		ctokens[token_index].token_code = 33;
				  		int pos= strstr(lines[k],pch)-lines[k];
						ctokens[token_index].position=pos;
				  		token_index++;
			  		}

			  		else if(flag)
			  		{
				  		strcpy(ctokens[token_index].t_name,pch);
				  		strcpy(ctokens[token_index].t_type,"IDENTIFIER");
				  		ctokens[token_index].line=k;
				  		ctokens[token_index].token_code = 34;
				  		int pos= strstr(lines[k],pch)-lines[k];
						ctokens[token_index].position=pos;
				  		token_index++;
			  		}
		  		}

		     pch = strtok (NULL, delimiters);
		  }

		int tmp;

	  	for(tmp=0; tmp<sizeof(conditional)/sizeof(conditional[0]);tmp++)
	  	{
	  		if(strstr(lines[k],conditional[tmp]))
	  		{
	  			strcpy(ctokens[token_index].t_name,conditional[tmp]);
		  		strcpy(ctokens[token_index].t_type,"CONDITIONAL");
		  		ctokens[token_index].line=k;
		  		ctokens[token_index].token_code = 35;
		  		int pos= strstr(lines[k],conditional[tmp])-lines[k];
				ctokens[token_index].position=pos;
		  		token_index++;
	  		}
	  	}
	  	for(tmp=0; tmp<sizeof(logical)/sizeof(logical[0]);tmp++)
	  	{
	  		if(strstr(lines[k],logical[tmp]))
	  		{
	  			strcpy(ctokens[token_index].t_name,logical[tmp]);
		  		strcpy(ctokens[token_index].t_type,"LOGICAL");
		  		ctokens[token_index].line=k;
		  		ctokens[token_index].token_code = 36;
		  		int pos= strstr(lines[k],logical[k])-lines[k];
				ctokens[token_index].position=pos;
		  		token_index++;
	  		}
	  	}
	  	for(tmp=0; tmp<sizeof(assignment)/sizeof(assignment[0]);tmp++)
	  	{
	  		if(strstr(lines[k],assignment[tmp]))
	  		{
	  			strcpy(ctokens[token_index].t_name,assignment[tmp]);
		  		strcpy(ctokens[token_index].t_type,"ASSIGNMENT");
		  		ctokens[token_index].line=k;
		  		ctokens[token_index].token_code = 37;
		  		int pos= strstr(lines[k],assignment[tmp])-lines[k];
				ctokens[token_index].position=pos;
		  		token_index++;
	  		}
	  	}
	  	for(tmp=0; tmp<sizeof(incdec)/sizeof(incdec[0]);tmp++)
	  	{
	  		if(strstr(lines[k],incdec[tmp]))
	  		{
	  			strcpy(ctokens[token_index].t_name,incdec[tmp]);
		  		strcpy(ctokens[token_index].t_type,"INCREMENT/DECREMENT");
		  		ctokens[token_index].line=k;
		  		ctokens[token_index].token_code = 38;
		  		int pos= strstr(lines[k],incdec[tmp])-lines[k];
				ctokens[token_index].position=pos;
		  		token_index++;
	  		}
	  	}
	  	for(tmp=0; tmp<sizeof(punctuation)/sizeof(punctuation[0]);tmp++)
	  	{
	  		if(strstr(lines[k],punctuation[tmp]))
	  		{
	  			strcpy(ctokens[token_index].t_name,punctuation[tmp]);
		  		strcpy(ctokens[token_index].t_type,"PUNCTUATION");
		  		ctokens[token_index].line=k;
		  		ctokens[token_index].token_code = 39;
		  		int pos= strstr(lines[k],punctuation[tmp])-lines[k];
				ctokens[token_index].position=pos;
		  		token_index++;
	  		}
	  	}

	}
}


int main()
{

	FILE *fp;
	fp= fopen("test.txt","r");
	getLine(fp);
	printLines();

	int nm=0;

	printf("\n%20s\t%18s\t%14s%18s%19s\n","TOKEN","TYPE","TOKEN_CODE","LINE","POINTER VALUE");
	printf("__________________________________________________________________________________________________________________\n\n");
	for(;nm<token_index;nm++)
	{
		printf("%20s\t%20s\t%8d\t%14d\t%12d\n",ctokens[nm].t_name,ctokens[nm].t_type,ctokens[nm].token_code,ctokens[nm].line,ctokens[nm].position);
	}

}
