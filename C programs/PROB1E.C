		     //Documentation section
    /*  Program to evaluate the expression  y=a*exp(-k*t)*/


#include<stdio.h>                         //Linking section
#include<conio.h>
#include<math.h>
void main()                              //Begining of the program
{
float a,k,t,y;                          //Variable declaration
clrscr();
printf("\tOUTPUT\n");
printf("\nEnter values of a,k,t values:"); //Executable part
scanf("%f%f%f",&a,&k,&t);
y=a*exp(-k*t);
printf("y=%f",y);
getch();
}                                         //Ending of the program