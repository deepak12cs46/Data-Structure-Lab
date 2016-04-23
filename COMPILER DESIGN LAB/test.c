void newFunction(FILE *fp)
{
	int a,b,c;
	char ch =100;

	printf("This is the char...");

}
int main()
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

}
