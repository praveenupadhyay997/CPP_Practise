#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>
#include<stdlib.h>
using namespace std;
# define m 121 
# define g 90
# define f 200

int main()
{

	double sx, sy, sz;
	double xf, yf, zf;
	float e,se;
	
	cout<<"Enter the final in x-axis===";
	cin>>xf;
	cout<<"Enter the final in y-axis===";
	cin>>yf;
	cout<<"Enter the final in z-axis===";
	cin>>zf;
	cout<<"Enter initial value of e===";
	cin>>e;
	cout<<"Enter step in value of e===";
	cin>>se;
	cout<<"Enter the steps in x===";
	cin>>sx;
	cout<<"Enter the steps in y===";
	cin>>sy;
    cout<<"Enter the steps in z===";
	cin>>sz;


    float x,y,z=0;
    system("cls");
	cout<<"M"<<m<<endl;
	cout<<"G"<<g<<endl;
	int count=1;
	while(z<zf)
	{
		cout<<endl<<"G01 "<<"Z"<<z<<" F"<<f<<endl<<endl;
		if(count%2!=0)
		{
			y=0;
			for(int i=1;i<=(yf/sy)+1;i++)
			{
				if(i%2==0)
					x=0;
				else
				    x=xf;
				cout<<"G01 X"<<x<<" Y"<<y<<" E"<<std::setprecision(5)<<e<<" F"<<f<<endl;
				y+=sy;
				if(i!=(yf/sy)+1)
				cout<<"G01 X"<<x<<" Y"<<y<<endl;
			    e+=se;	    		    
			}
		}
		else
		{
			x=xf;
			for(int i=1;i<=(xf/sx)+1;i++)
			{

				if(i%2==0)
					y=yf;
				else
				    y=0;

				cout<<"G01 X"<<std::setprecision(3)<<x<<" Y"<<y<<" E"<<std::setprecision(5)<<e<<" F"<<f<<endl;
				if(i>=(xf/sx))
				x=0;
				else
				x=x-sx;
				if(i!=(xf/sx)+1)
				cout<<"G01 X"<<float(x)<<" Y"<<y<<endl;
			    e+=se;	    		    
			}
			
			
		}
		count++;
		z+=sz;
	}
	cout<<endl<<"G01 "<<" Y-10"<<" F"<<f;
	cout<<endl<<endl<<"M02";
	getch();
	return 0;
	
}
