#include<stdio.h>
int main()
{
    scanf("%d",&n);
    sum=0;
    for(i=0;n>0;i++)
    {
        r=n%10;
        a=n/10;
        sum=sum+r;
        n=a;
    }
    if(sum<10){
    printf("%d",sum);
    break;
    }
    else n=sum;
    return 0;
}
