/*1+x^2/2!+x^4/4!+----------------upto 10 terms */

#include<stdio.h>           		 	//Linking section
#include<conio.h>
#include<math.h>
void main()               		 	//Begining of the program
{
int p,i,j,fact,n;
float sum,x;             				//Variable declaration
clrscr();
printf("\tOUTPUT\n");
printf("\nEnter the value of x & n:");                	//Executable part

scanf("%f%d",&x,&n);
for(i=0;i<2*n;i=i+2)
{
p=pow(x,i);
fact=1;
for(j=1;j<=i;j++)
{
fact*=j;
}
sum+=p/(float)fact;
}
printf("Sum of the series :%f",sum);
getch();
}                                          //Ending of the program

