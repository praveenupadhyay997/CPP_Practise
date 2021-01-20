#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
# define m 121 
# define g 90
# define f 200

int main()
{

	float sx, sy, sz;
	
/*	cout<<"Enter the steps in x-axis===";
	cin>>sx;
	cout<<"Enter the steps in y-axis===";
	cin>>sy;
	cout<<"Enter the steps in z-axis===";
	cin>>sz;
*/
    sz=0.5;
    float xf=12.0,yf=12.0,zf=12.0;
    float x,y,z=0;
    float e=0.04, se=0.04;
	//clrscr();
	cout<<"M"<<m<<endl;
	cout<<"G"<<g<<endl;
	int count=1;
	while(z<=11.5)
	{
		cout<<endl<<"G01 "<<"Z"<<z<<" F"<<f<<endl<<endl;
		if(count%2!=0)
		{
			y=0,sy=1.5;
			for(int i=1;i<=(yf/sy)+1;i++)
			{
				if(i%2==0)
					x=0;
				else
				    x=12;
				cout<<"G01 X"<<x<<" Y"<<y<<" E"<<std::setprecision(3)<<e<<" F"<<f<<endl;
				y+=sy;
				if(i!=(yf/sy)+1)
				cout<<"G01 X"<<x<<" Y"<<y<<endl;
			    e+=se;	    		    
			}
		}
		else
		{
			x=12,sx=1.5;
			for(int i=1;i<=(xf/sx)+1;i++)
			{
				if(i%2==0)
					y=12;
				else
				    y=0;
				cout<<"G01 X"<<x<<" Y"<<y<<" E"<<std::setprecision(3)<<e<<" F"<<f<<endl;
				x-=sx;
				if(i!=(xf/sx)+1)
				cout<<"G01 X"<<x<<" Y"<<y<<endl;
			    e+=se;	    		    
			}			
		}
		count++;
		z+=sz;
	}
	cout<<endl<<"G01 "<<" Y"<<yf<<" F"<<f;
	cout<<endl<<endl<<"M02";
	return 0;
	
}
