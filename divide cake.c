#include<iostream>
using namespace std;
int main()
{   int t,n;
cin>>t;
    while(t--)
    {cin>>n;
        if(360%n==0)
            cout<<"\ny";
        else cout<<"\nn";
        if(n<=360)
            cout<<"\ny";
        else cout<<"\nn";
        if(n*(n+1)/2<=360)
            cout<<"\ny";
        else cout<<"\nn";
    }
    return 0;
}

