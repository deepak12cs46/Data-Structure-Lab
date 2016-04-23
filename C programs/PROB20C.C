/* quick sort */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int loc;
void main()
{
int i,m,x[40],top=-1,beg,end,lower[21],upper[21];
void quicksort(int a[30],int,int,int);
clrscr();
printf("Enter m:");
scanf("%d",&m);
printf("Enter elements:");
for(i=0;i<m;i++)
scanf("%d",&x[i]);
if(m>1)
{
top++;
lower[top]=0;
upper[top]=m-1;
}
while(top>=0)
{
beg=lower[top];
end=upper[top];
top--;
quicksort(x,m,beg,end);
if(beg<loc-1)
{
top++;
lower[top]=beg;
upper[top]=end;
}
if(loc+1<end)
{
top++;
lower[top]=loc+1;
upper[top]=end;
}
}
printf("elements in sorted order:");
for(i=0;i<m;i++)
printf("%d\t",x[i]);
getch();
}
void  quicksort(int a[20],int n,int b,int c)
{
int left,right,temp;
left=b;right=c;loc=b;
xyz:
while((a[loc]<=a[right])&&(loc!=right))
right--;
if(loc==right)
return;
if(a[loc]>a[right])
{
temp=a[loc];
a[loc]=a[right];
a[right]=temp;
loc=right;
}
while((a[left]<=a[loc])&&(left!=loc))
left++;
if(loc==left)
return;
if(a[left]>a[loc])
{
temp=a[loc];
a[loc]=a[left];
a[left]=temp;
loc=left;
goto xyz;
}
}

