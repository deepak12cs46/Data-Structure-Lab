#include<stdio.h>
#include<conio.h>
 int arrele (int);
 int main()

 {
    int n;
   printf("enter element in array\n");
   scanf("%d",&n);
   arrele(n);
   return 0;
}
int arrele (int n)
{
    int a[10],i;
    for(i=0;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n;i++)
    printf("%d\n",a[i]);
    return 0;
}
