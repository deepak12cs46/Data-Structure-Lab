#include<iostream>
using namespace std;
typedef struct ll
{
    int data;
    struct ll *next;
}node;
create_cll(int n)
{
    int i=0;
    while(i<n)
    {   i++;
        ptr=new node;
        ptr->data=i;
        if(i==1){
            head=ptr;
            head->next=head;
        }
        else
    }
}
int main()
{
    int n,d;
    while(1)
    {
        cin>>n>>d;
        if(n==0 && d==0)
        create_cll(n;)
    }
    return 0;
}
