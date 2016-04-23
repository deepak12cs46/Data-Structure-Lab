/*-------------------PROB NO:2E(A)----------------------------------*/
/*Read X and compute Y=1  for X>0
		     Y=0  for X=0
		     Y=-1 for X<0    */	/*DOCUMENTATION*/
#include<stdio.h>                      		/*LINKING SECTION*/
void main()                            			/*BEGINNIG OF PROGRAM*/
{
float x,y;                            			/*DECLARATION PART*/
clrscr();
printf("*************Output***********");
printf("\nEnter value of x:");
scanf("%f",&x);
if(x<0) 			                              /*EXECUTABLE PART*/
{
y=-1;
}
else if(x==0)
{
y=0;
}
else
{
y=1;
}
printf("y=%f",y);
printf("\n*************Output***********");
getch();			      		/*END OF PROGRAM*/
}
