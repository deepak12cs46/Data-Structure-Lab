

     /*---------------------PROG.NO2(A)---------------------*/
     /* Program to find sum=1+2+3+......n



 #include<stdio.h>           		//Linking section
  #include<conio.h>
  #include<math.h>
  void main()          		         	//Begining of the program

  {

  int sum=0,i=1,n;             		//Variable declaration

  clrscr();

  printf("\tOUTPUT\n");

  printf("\nEnter values of n:");          	//Executable part

  scanf("%d",&n);

  do

  {

  sum+=i;

  i++;

  }

  while(i<=n);

  printf("sum =%d",sum);

  getch();

  }                                    //End of the program