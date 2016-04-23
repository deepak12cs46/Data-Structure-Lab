      /*--------------------PROG.NO2B.C-------------------*/

      /* Program to print the given 3 integers in ascending order*/



#include<stdio.h>           		 	//Linking section
#include<conio.h>
#include<math.h>
void main()               		 	//Begining of the program
{
int min,mid,max ,a,b,c;             			//Variable declaration
clrscr();
printf("\tOUTPUT\n");
printf("\nEnter three integers:");                		//Executable part
scanf("%d%d%d",&a,&b,&c);
max=min=a;
if(max<b)
max=b;
if(max<c)
max=c;

if(min>b)
min=b;
if(min>c)
min=c;
mid =(a+b+c)-(max+min);
printf("Ascending order :%4d%4d%4d",min,mid,max);
getch();
}                                             			//Endig of the program