#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	long a[1001][1001];
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		cin>>a[i][j];
	}
		for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
	    cout<<a[i][j]<<" ";
	    cout<<"\n";
	}
	
	for(int i=N-1;i>=0;i--)
	{
		for(int j=0;j<N;j++)
		cout<<a[j][i]<<" ";
		cout<<"\n";
	}
 return 0;
}
