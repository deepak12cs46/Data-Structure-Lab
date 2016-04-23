#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{   int a,b,s,t,k,i,j,p[100000];
    cin>>t;
    for(s=0;s<t;s++)
    {   for(i=0;i<100000;i++)
    p[i]=0;
    j=0;
        cin>>a>>b;
       a=1;
       b=31650;
        for(k=a;k<=b;k++)
            {   if (k==2)
                        p[j++]=k;

                    else if(k%2==0 || k<=1)
                    continue;
                    else {
                for(i=3;i<=sqrt(k);i+=2)
              if(k%i==0) break;
                if(i>sqrt(k))
                    p[j++]=k;
                    }
            }
                    for(i=0;i<j;i++)
                        cout<<p[i]<<","<<endl;
            }
            return 0;
}
