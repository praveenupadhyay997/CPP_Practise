#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	for(int i=N;i>=0;i--)
	{
		for(int j=N;j>=i;j--)
		cout<<j;
		for(int k=1;k<=2*i-1;k++)
		cout<<" ";
		for(int l=i;l<=N;l++)
		{
			if(i==0&&l==0)
			continue;
			else
			cout<<l;
		}
		cout<<endl;
	}
	for(int i=1;i<=N;i++)
	{
		for(int j=N;j>=i;j--)
		cout<<j;
		for(int k=1;k<=2*i-1;k++)
		cout<<" ";
		for(int l=i;l<=N;l++)
		cout<<l;
		cout<<endl;
	}

	return 0;
}
