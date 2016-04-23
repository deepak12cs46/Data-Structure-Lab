		     //Documentation section
    /*
       Program to find  the  value of y using conditional operator
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

y=(x>0)?1:((x==0)?0:-1);

printf("The value of y is:%d",y);

getch();

}




