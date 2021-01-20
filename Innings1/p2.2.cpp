#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,l=4;
    cin>>n;
   int m=n/2+1;
    for(i=1;i<n;i++)
    {
    	if(i<=m)
      	{
		for(j=1;j<=m-i;j++)
    	cout<<" ";
    	for(k=1;k<=i;k++)
    	cout<<"* ";
    	cout<<endl;
     	}
	    else
	    {
		for(j=1;j<=m-l;j++)
		cout<<" ";
		for(k=1;k<=l;k++)
		cout<<"* ";
		l--;
		cout<<endl;
    	}
    }
	return 0;
	
}
