/* Program to to evaluate   the expression (a*x+b)/(a*x-b)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c,x;
clrscr();
printf("\nOUTPUT\n");
printf("Enter  the values of a,b,x :");
scanf("%f%f%f",&a,&b,&x);
c=(a*x+b)/(a*x-b);
printf("Reusult=%f",c);
getch();
}

