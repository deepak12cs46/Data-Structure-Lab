    /*
       Program to evaluate the expression
	      y=1/(a*sqrt(2*pi)*exp(pow( (x-m/sqrt(2*a)),2)))

     */

	#include<stdio.h>
	#include<conio.h>               /*Linking section         */
	#include<math.h>
	#define pi 3.14
	void main()                    /* Begining of the program  */
	{                              /* Variable declaration     */
	float m,x,a,y;
	clrscr();
	printf("\tOUTPUT\n\n");
	printf("Enter a,x,m values:"); /*Executable part           */
	scanf("%f%f%f",&a,&x,&m);
	y=(1/(a*sqrt(2*pi)))*exp(pow( (x-m/sqrt(2*a)),2));
	printf("The result of expression=%f",y);
	getch();
	}                             /*Ending of the program      */

