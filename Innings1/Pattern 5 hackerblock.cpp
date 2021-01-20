#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	for(int i=N;i>=0;i--)
	{
		for(int j=1;j<=N-i;j++)
		cout<<" ";
		for(int k=i;k>=0;k--)
		cout<<k;
		for(int l=1;l<=i;l++)
		cout<<l;
		cout<<endl;
	}
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N-i;j++)
		cout<<" ";
		for(int k=i;k>=0;k--)
		cout<<k;
		for(int l=1;l<=i;l++)
		cout<<l;
		cout<<endl;
	}
}
