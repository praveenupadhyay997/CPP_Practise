#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int mid=0;
	for(int i=1;i<=N;i++)
	{
		int ext=i-1;
		if(ext==0)
		{
			ext++;
			for(int j=1;j<=i;j++)
			cout<<ext;
		}
		else
		{
		cout<<ext;
		for(int j=1;j<=i-2;j++)
		cout<<mid;
		cout<<ext;	
		}
		cout<<endl;
	}
}
