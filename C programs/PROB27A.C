 /* program to implement trepezoidal rule
  */

   #include<stdio.h>
   #include<conio.h>
   #define g(x)  1/(1+x*x)
   void main()
   {
   float integral,a,b,h,x[20],f[20],s=0,sum=0;
   int i,n;
   clrscr();
   printf("Enter lower &upper limit a,b:");
   scanf("%f%f",&a,&b);
   printf("Enter n:");
   scanf("%d",&n);
   h=(b-a)/n;
   for(i=0;i<=n;i++)
   {
   x[i]=s+a;
   f[i]=g(x[i]);
   s=s+h;
   }
   printf("\nx\tf(x)");
   printf("\n------------------\n");
   for(i=0;i<=n;i++)
   {
   printf("\n%f\t%f",x[i],f[i]);
   }

   sum=f[0]+f[n];

   for(i=1;i<n;i++)
   {
   sum=sum+2*f[i];
   }

   integral=(h*sum)/2;
   printf("\nIntegral value=%f",integral);


   getch();
   }


