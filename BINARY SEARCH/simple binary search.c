#include<stdio.h>
int main()
{
    int l,u,n,m,p,s,i,a[12];
    printf("ENTER NO OF ELEMENTS\n");
    scanf("%d",&n);
    printf("ENTER ELEMENT TO BE SEARCHED\n");
    scanf("%d",&s);
    printf("ENTER ELEMENTS IN ARRAY\n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    l=1;
    u=n;
    p=l+u;
    if(p%2==0)
        m=n/2;
    else
        m=(n/2)+1;
    while(u>=l)
    {
        if (s==a[m])
        {
        printf("SUCCESSFULL SEARCH AND NO. %d IS FOUND AT %dth  POSITION",a[m],m);
        break;
        }
        else if (s<a[m])
            {
                u=m-1;
                m=(l+u)/2;
            }
        else if (s>a[m])
        {
         l=m+1;
         m=(l+u)/2;
        }

    }
    if(l>u)
        printf("UNSUCCESSFULL SEARCH\n");

    return 0;
}
