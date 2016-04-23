   /*
       Program to evaluate the expression
       y=(4*x+3)*(3*y+2*z-4)

   */
#include<stdio.h>
#include<conio.h>    			//Linking section
void main()
{
float a,x,y,z;                         //Variable declaration
clrscr();
printf("\tOUTPUT\n");
printf("\nEnter values of x,y,z values:");
scanf("%f%f%f",&x,&y,&z);              //Executable part
a=(4*x+3)*(3*y+2*z-4);
printf("a=%f",a);
getch();
}                                      //Ending of the program