
	/*Operations(addition,subtraction,miltiplication,division
	 on complex numbers   (a+ib)   ,(x+iy) */


	#include<stdio.h>
	#include<conio.h>
	int main()               /*main declaration*/
	{
	void add(int,int,int,int);
	void sub(int,int,int,int);
	void mul(int,int,int,int);
	void div(int,int,int,int);
	int a,b,x,y;
	char ch;
	
	printf("OUTPUT\n\n");
	printf("Enter the values of a,b:");
	scanf("%d%d",&a,&b);

	printf("Enter the values of x,y:");
	scanf("%d%d",&x,&y);

	fflush(stdin);
	printf("Enter ur choise:");
	ch=getc(stdin);

	switch(ch)
	{
	case '+':add(a,b,x,y);
		 break;
	case '-':sub(a,b,x,y);
		 break;
	case '*':mul(a,b,x,y);
		 break;
	case '/':div(a,b,x,y);
		 break;
	default :printf("Error in input");
	}
	getch();
	}

      void add(int p,int q,int r,int s)
      {
      float rp,ip;
      rp=p+r;
      ip=q+s;
      printf("Addition:");
      printf("(%f)+(%f)i",rp,ip);
      }

      void sub(int p,int q,int r,int s)
      {
      float rp,ip;
      rp=p-r;
      ip=q-s;
      printf("Subtraction:");
      printf("(%f)+(%f)i",rp,ip);
      }
      void mul(int p,int q,int r,int s)
      {
      float rp,ip;
      rp=p*r-q*s;
      ip=p*s+q*r;
      printf("Multiplication:");
      printf("(%f)+(%f)i",rp,ip);
      }

      void div(int p,int q,int r,int s)
      {
      float rp,ip;
      rp=(float)(p*r+q*s)/(r*r+s*s);
      ip=(float)(q*r-s*p)/(r*r+s*s);
      printf("Division:");
      printf("(%f)+(%f)i",rp,ip);
      }

