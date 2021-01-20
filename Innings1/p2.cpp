#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
    cin>>n;
    int m=n/2+1;
    for(i=1;i<=m;i++)
    {
    	for(j=1;j<=m-i;j++)
    	cout<<" ";
    	for(k=1;k<=i;k++)
    	cout<<"* ";
    	cout<<endl;    	
	}
	for(i=1;i<m;i++)
	{
		for(j=1;j<=i;j++)
		cout<<" ";
		for(k=1;k<=m-i;k++)
		cout<<"* ";
		cout<<endl;
	}
	return 0;
	
}
