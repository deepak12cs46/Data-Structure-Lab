

	/*program  for arithematic operatios (+.-,*,/)  */

	#include<stdio.h>
	#include<conio.h>
	void main()               /*main declaration*/
	{                         /*varable declaration*/
	int a,b;
	float c;
	char ch;
	clrscr();
	printf("OUTPUT\n\n");
	printf("Enter the values of a,b:");
	scanf("%d%d",&a,&b);
	fflush(stdin);
	printf("Enter ur choise:");
	ch=getc(stdin);

	switch(ch)
	{
	case '1':c=a+b;
		 break;
	case '2':c=a-b;
		 break;
	case '3':c=a*b;
		 break;
       case '4':c=(float)a/b;
		 break;
	default :printf("Error in input");
	}

      printf("\n\nResult=%f",c);
	getch();
	}

