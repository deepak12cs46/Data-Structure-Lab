

/* To Print the details for particular car depending on the given data*/


	#include<stdio.h>
	#include<conio.h>
	#include<string.h>
	struct car
	{
	int month;
	int year;
	long price;
	char model[15];
	}c[5];
	void main()
	{
	int i,j,k,m1,m2,y,n;
	char type[15];
	clrscr();
	printf("\tOUTPUT:\n");
	printf("\nEnter no.of vehicles:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter model month,year,price for  car  %d:",i+1);
	scanf("%s",c[i].model);
	scanf("%d%d",&c[i].month,&c[i].year);
	scanf("%ld",&c[i].price);
	}
	printf("model\tmonth\tyear\tprice(Rs)\n");
	printf("-----------------------------------------\n");
	for(i=0;i<n;i++)
	{
	printf("%s",c[i].model);
	printf("\t%d\t%d",c[i].month,c[i].year);
	printf("\t%ld\n",c[i].price);
	}
	printf("----------------------------------------\n");
	printf("\nEnter the model,starting &ending month and year:");
	scanf("%s%d%d%d",type,&m1,&m2,&y);
	printf("\n\nmodel\tmonth\tyear\tprice\n");
	printf("----------------------------------------\n");
	for(i=0;i<n ;i++)
	{
	if(strcmp(type,c[i].model)==0)
	if((y==c[i].year)&&(m1<=c[i].month&&m2>=c[i].month))
	printf("%s\t%5d\t%5d\t%5ld\n",c[i].model,c[i].month,c[i].year,c[i].price);
	}
	getch();
	}

