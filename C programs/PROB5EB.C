/*-------------------PROB NO:2E(B)----------------------------------*/
/*Read X and compute Y=1  for X>0
		     Y=0  for X=0
		     Y=-1 for X<0    *//*DOCUMENTATION*/
#include<stdio.h>
#include<math.h>
void main()
{
int x,y;
clrscr();
printf("*********Output********");
printf("\nEnter the value of x:");
scanf("%d",&x);
y=((x>0)?1:(x==0)?0:-1);
printf("\nThe value of Y is:%d",y);
printf("\n************************");
getch();
}
