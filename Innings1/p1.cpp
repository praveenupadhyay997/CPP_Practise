#include<iostream>
using namespace std;
int main ()
{
	int n,i,j,k,m,l;
	cout<<"\n Enter the number of rows=";
	cin>>n;
	for(i=1;i<=n;i++)
	{    
	    m=i-1;
		for(j=1;j<=n-i;j++)
		cout<<" ";
		for(k=1;k<=i;k++)
		{	
	    	cout<<m;
	    	m--;             
		}
		m=1;
        for(l=1;l<=i-1;l++)
        {
        	cout<<m;
        	m++;
		}
		cout<<endl;
	}
	return 0;
}
