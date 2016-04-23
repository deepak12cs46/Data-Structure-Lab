/*Program to evaluate y=x^5+10x^4+8x^3+4x+2

 */

#include<stdio.h>	     /*Linking section*/
#include<conio.h>
#include<math.h>
void main()                   /*Begining of the program*/
{
float x,y;                    /*Declaration part  */
clrscr();
printf("\tOUTPUT\n");
printf("-----------------\n");
printf("\nEnter values of x:"); /*Executable part*/
scanf("%f",&x);
y=pow(x,5)+10*pow(x,4)+8*pow(x,3)+4*x+2;
printf("Result=%f",y);
getch();
}                               /*Ending of the program*/