		     //Documentation section
    /* PROGRAM TO FIND NO.OF even,odd,summ of all even,odd integers */

#include<stdio.h>
#include<conio.h>
 void main()
 {
 int evensum,oddsum,evencount,oddcount,i,x,n;
 clrscr();
 evensum=oddsum=evencount=oddcount=0;
 printf("\nOUTPUT\n");
 printf("-------------\n\n");
 printf("Enter the value of n:");
 scanf("%d",&n);
 printf("Enter n ingegers:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&x);
 if(x%2==0)
 {
 evencount++;
 evensum+=x;
 }
 else
 {
 oddcount++;
 oddsum+=x;
 }
 }
 printf("\nTotal no.of even integers=%d",evencount);
 printf("\nTotal no.of odd integers =%d",oddcount);
 printf("\nSum of all even integers =%d",evensum);
 printf("\nSum of all odd integers  =%d",oddsum);
 getch();
 }

