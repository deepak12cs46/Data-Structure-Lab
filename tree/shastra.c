#include<stdio.h>
#include<math.h>
int main()
{
  int T;
  unsigned long int n,r,q,i;
  double flag,p;
  scanf("%d",&T);
  while(T>0)
  {
    scanf("%lu",&n);
    i=2;
    flag=sqrt(n);
    if(n==flag*flag)
    {
      printf("YES\n");
      continue;
    }
    flag=log10(n)/log10(2);
    while(i<(int)flag)
    {
      p=log10(n)/log10(i);
      if(p==ceil(p))
      {
          q=1;
          break;
      }
      i++;
    }
    if(q==1)
     printf("YES\n");
    else
    printf("NO\n");
    T--;
 }
 return 0;
}
