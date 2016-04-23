
	/*program on sesonal discounts using switch*/

	#include<stdio.h>
	#include<conio.h>
	void main()               /*main declaration*/
	{                         /*varable declaration*/
	int ran;
	float a1,a2,p1,p2,d1,d2;
	char ch;
	clrscr();
	a1=a2=0;
	printf("OUTPUT\n\n");
	printf("Enter the category of cloth  m/h/b:");
	scanf("%c",&ch);

	switch(ch)
	{
	case 'b':
	case 'm':  printf("Enter  purchase amount for millcloth:");
		   scanf("%f",&p1);

		   if(p1>0&&p1<=100)
		   d1=0;

		   if(p1>100&&p1<=200)
		   d1= 0.05;

		   if(p1>200&&p1<=300)
		   d1= 0.075;

		   if(p1>300)
		   d1= 0.10;
		   a1=p1-d1*p1;
		   printf("\nDiscount for millcloth   :%6.2f",d1*p1);
		   printf("\nNet amount for millcloth :%6.2f",a1);
		   if(ch=='m')
		   break;

	case 'h':  printf("\n\nEnter purchase amont for handloom:");
		   scanf("%f",&p2);

		   if(p2>0&&p2<=100)
		   d2=0.05;

		   if(p2>100&&p2<=200)
		   d2= 0.075;

		   if(p2>200&&p2<=300)
		   d2= 0.10;

		   if(p2>300)
		   d2= 0.15;
		   a2=p2-d2*p2;
		   printf("\nDiscount for handloom    :%6.2f",d2*p2);
		   printf("\nNet amount for handllom  :%6.2f",a2);
		   break;
	 default: printf("\nInvalid option");
		  break;
      }

      printf("\n\nTotal amt to be paid by the customer(Rs):%6.2f",a1+a2);
	getch();
	}

