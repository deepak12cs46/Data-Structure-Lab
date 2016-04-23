


	/*Matrix multiplication*/


	#include<conio.h>
	#include<conio.h>
	void main()
	{
	int i,j,k,r1,c1,r2,c2,a[3][3],b[3][3],c[3][3];
	clrscr();
	printf("\tOUTPUT:\n");
	printf("Enter the size of 1st matrix:");
	scanf("%d%d",&r1,&c1);
	printf("Enter the size of 2nd matrix:");
	scanf("%d%d",&r2,&c2);
	if(c1!=r2)
	{
	printf("\nMultiplicatio is not possibe");
	getch();
	exit(0);
	}

	printf("Enter elements for matrix A\n");
	for(i=0;i<r1;i++)
	{
	for(j=0;j<c1;j++)
	{
	scanf("%d",&a[i][j]);
	}
	}

	printf("Enter elements for matrix B\n");
	for(i=0;i<r2;i++)
	{
	for(j=0;j<c2;j++)
	{
	scanf("%d",&b[i][j]);
	}
	}

	for(i=0;i<r1;i++)
	{
	for(j=0;j<c1;j++)
	{
	c[i][j]=0;

	for(k=0;k<c2;k++)
	{
	c[i][j]+=a[i][k]*b[k][j];
	}
	}
	}
	printf("\nResultant matrix\n");
	for(i=0;i<r1;i++)
	{
	for(j=0;j<c2;j++)
	{
	printf("%4d",c[i][j]);
	}
	printf("\n");
	}
	getch();
	}






