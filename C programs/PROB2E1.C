		     //Documentation section
    /*
       Program to find s=x+x^3/3!+x^5/5!+.....n terms
	 */

#include<stdio.h>           		 	//Linking section
#include<conio.h>
#include<math.h>

void main()               		 	//Begining of the program

{

int x,y;

clrscr();

printf("\tOUTPUT\n");

printf("\nEnter the value of x :");                	//Executable part

scanf("%d",&x);

if(x>0)

y=1;

else if(x==0)

y=0;

else if(x<0)

y=-1;

printf("The value of y is:%d",y);

getch();

}




