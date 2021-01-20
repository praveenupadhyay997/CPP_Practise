#include<iostream>
using namespace std;
int main()
{
	int i,j,N;
	cin>>N;
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N;j++)
		{
		if(j<=i)
		cout<<j;
		else
		cout<<"*";
	    }
	    cout<<"\n";
	}
return 0;
}
