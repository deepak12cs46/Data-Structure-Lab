//this program will plot the graph of f(x)= a*sin(b*x) + c*sin(d*x) or f(x)=a*sin(b*x)+c*sin(d*x)
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#define PI 3.141592654
using namespace std;
int main(void)
{	int a,b,c,d;
	double xmin,xmax;
	int choice=1;
	while(choice)
	{
		cout<<"Enter the values of a,b,c,d: ";
		cin>>a>>b>>c>>d;
		cout<<("Enter the range of x [min,max] in degrees: ");
		cin>>xmin>>xmax;
    int steps=(xmax-xmin)/10;
		xmin
		=xmin*PI/180;
		xmax=xmax*PI/180;
		double ymax=sqrt(double(a*a+c*c));
		double step_size = double((xmax-xmin)/steps);
		float xval[steps+1],yval[steps+1];
		for(int i=0;i<=steps;i++)
		{
			xval[i]=xmin+i*step_size;
			yval[i]=a*sin(double(b*xval[i]))+c*sin(double(c*xval[i]));
		  //yval[i]=a*sin(double(b*xval[i]))+c*cos(double(c*xval[i]));
		}
		/*
		 * Print the x---->f(x) table
		for( int i=0;i<=steps;i++)
		{
			cout<<setw(5)<<i<<setw(20)<<xval[i]<<setw(20)<<yval[i]<<endl;
		}
		* */
	/*	for(int i=0;i<=steps;i++)
		{
			for(int j=0;yval[i]>=0 && j<=int(15+ymax) ; j++)
			cout<<" ";
			//cout<<setfill('*')<<setw(int((yval[i])*10))<<'*'<<endl;
			for(int k=0; yval[i]<0 && k<=int(17+ymax+yval[i]*10) ; k++)
			cout<<" ";
			if(yval[i]>=0)
			cout<<setfill('*')<<setw(int((yval[i])*10))<<'*'<<endl;
			else
			cout<<setfill('*')<<setw(int((yval[i]*-1)*10))<<'*'<<endl;
			//cout<<setw(15+(int((ymax+yval[i])*10)))<<'*'<<endl;
		}
		cout<<"continue?(1/0)";
		cin>>choice;
}  */
return 0;
}
