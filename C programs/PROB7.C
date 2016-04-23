
	/*************************************************/
	/*To print the distance travelled by the vehicle  */


	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	int i,t,t1,t2,ti,sn;
	float u,a,x,s;
	clrscr();
	printf("\n\toutput::\n");
	printf("\tEnter intial &final time:");
	scanf("%d%d",&t1,&t2);
	printf("\tEnter  time   interval:");
	scanf("%d",&t);

	printf("\tenter a and u values:");
	scanf("%f%f",&a,&u);
	sn=1;
	printf("\n\tsno\t time elapse\tdistance");
	printf("\n---------------------------------------------------");
       i=t1;
       while(i<=t2)
       {
       s=u*i+0.5*a*i*i;
       printf("\n\t%d\t%d\t\t%f",sn,i,s);
       i+=t;
       sn++;
       }
       getch();
       }



