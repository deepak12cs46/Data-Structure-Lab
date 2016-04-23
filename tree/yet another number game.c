#include<stdio.h>
int main()
{
    int T;
    unsigned long int n;
    scanf("%d",&T);
    while(T>0)
    {
        scanf("%lu",&n);
        if(n%2==0)
        printf("ALICE\n");
        else
        printf("BOB\n");
        T--;
    }
    return 0;
}
