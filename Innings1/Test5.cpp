#include<iostream>
using namespace std;

int main()
{

	float sx, sy, sz;
	float xf, yf, zf;
	float e,se;
	
	int pos[100];
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
/*	cout<<"Enter the steps in x===";
	cin>>sx;
	cout<<"Enter the steps in y===";
	cin>>sy;
    cout<<"Enter the steps in z===";
	cin>>sz;*/
	
	int N;
	float grad[100];
	
    cout<<"Enter the number of z-positions where the gradient has to be changed=== ";
    cin>>N;
	for(int i=0;i<N;i++)
	{
    cout<<"Enter the "<<i+1<<" z's'-positions where the gradient has to be changed===";
	cin>>pos[i];
	}
	
	for(int i=0;i<N;i++)
	{
		if(i==0)
		cout<<"Enter the value of gradx in between z= 0 to z=%d"<<pos[i];
		else if(i>0&&i!=N-1)
	    cout<<"Enter the value of gradx in between z= %d to z=%d"<<pos[i-1]<<pos[i];
	    else
	    cout<<"Enter the value of gradx in between z= %d to z=%d"<<pos[i]<<zf;
	    
	    cin>>grad[i];
	}

return 0;
}
