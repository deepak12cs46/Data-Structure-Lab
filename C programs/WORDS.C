void main()
{
void num1(int);
void num2(int);
void num3(int);
void num4(int );
long  m,a[20],s,n,i=0,j;
clrscr();
printf("Enter a number:");
scanf("%ld",&n);
printf("\n\n");
m=n;
while(m)
{
a[i++]=m%10;
m/=10;
}

for(j=i-1;j>=0;j--)
{
if(((j==8)||(j==6)||(j==4)||(j==1))&&(a[j]==1))
{
s=a[j]*10+a[j-1];
j--;
num1(s);
num4(j);
}
else if(((j==1)||(j==4)||(j==6)||(j==8))&&(a[j]!=0))
      {
      num2(a[j]);
      j--;
      num3(a[j]);
      num4(j);
      }
else if(((j==2)||(j==3)||(j==5)||(j==7))&&(a[j]!=0))
     {
     num3(a[j]);
     num4(j);
     }

else if(j==0)
      num3(a[j]);
if((j==2)&&(a[j-1]!=0))
      printf(" AND");
}

getch();
}



void num1(int a)
{
switch(a)
{
case 10:printf(" TEN");
	break;
case 11:printf(" ELEVEN");
	break;
case 12:printf(" TWELVE");
	break;
case 13:printf(" THIRTEEN");
	break;
case 14:printf(" FOURTEEN");
	break;
case 15:printf(" FIFTEEN");
	break;
case 16:printf(" SIXTEEN");
	break;
case 17:printf(" SEVENTEEN");
	break;
case 18:printf(" EIGHTEEN");
	break;
case 19:printf(" NINETEEN");
	break;
}
}
void num2(int b)
{
switch(b)
{
case 2:printf(" TWENTY");
       break;
case 3:printf(" THIRTY");
       break;
case 4:printf(" FORTY");
       break;
case 5:printf(" FIFTY");
       break;
case 6:printf(" SIXTY");
       break;
case 7:printf(" SEVENTY");
       break;
case 8:printf(" EIGHTY");
       break;
case 9:printf(" NINETY");
       break;
 }

 }

void num3(int c)
{
switch(c)
{
case 1:printf(" ONE");
       break;
case 2:printf(" TWO");
       break;
case 3:printf(" THREE");
       break;
case 4:printf(" FOUR");
       break;
case 5:printf(" FIVE");
       break;
case 6:printf(" SIX");
       break;
case 7:printf(" SEVEN");
       break;
case 8:printf(" EIGHT");
       break;
case 9:printf(" NINE");
       break;
}

}

void num4(int d)
{
switch(d)
{
case 2:printf(" HUNDRED");
       break;
case 3:printf(" THOUSAND");
       break;
case 5:printf(" LAKHS");
       break;
case 7:printf(" CRORE");
       break;
}
}



