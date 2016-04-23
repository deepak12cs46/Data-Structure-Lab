#include<stdio.h>
#include<conio.h>
 void main()
 {
 int x[30];
 int evensum,oddsum,evencount,oddcount,i,n;
 clrscr();
 evensum=oddsum=evencount=oddcount=0;
 printf("\nOUTPUT\n");
 printf("-------------\n\n");
 printf("Enter 20 ingegers:");
 for(i=0;i<20;i++)
 {
 scanf("%d",&x[i]);
 if(x[i]%2==0)
 {
 evencount++;
 evensum+=x[i];
 }
 else
 {
 oddcount++;
 oddsum+=x[i];
 }
 }
 printf("\nTotal no.of even integers=%d",evencount);
 printf("\nTotal no.of odd integers =%d",oddcount);
 printf("\nSum of all even integers =%d",evensum);
 printf("\nSum of all odd integers  =%d",oddsum);
 getch();
 }
