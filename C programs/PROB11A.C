/* Program to print the pyramid of numbers
	*/

#include<stdio.h>
#include<conio.h>

int main()

{

int i,j,k,n;



printf("Enter a  number:");

scanf("%d",&n);

for(i=1;i<=n;i++)

{

    for(k=1;k<=i;k++)

    printf("%4d",i);

    printf("\n");

}

getch();

}


