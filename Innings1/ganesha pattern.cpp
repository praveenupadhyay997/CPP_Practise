#include<iostream>
using namespace std;
int main()
{
	int i,j,N,m;
	cin>>N;
	m=(N+1)/2;
	
	for(int i=1;i<=N;i++)
	{
		if(i<=m)
		{
			for(int j=1;j<=N;j++)
			{
				if(j==1)
				cout<<"*";
				else if(i==1&&j>=m)
				cout<<"*";
				else if(i!=1&&j==m)
				cout<<"*";
				else if(i==m)
				cout<<"*";
				else
				cout<<" ";
		    }
		    cout<<"\n";
     	}
		else if(i>m)
		{
			for(int j=1;j<=N;j++)
			{
				if(j==N)
				cout<<"*";
				else if(i==N&&j<=m)
				cout<<"*";
				else if(i!=N&&j==m)
				cout<<"*";
				else
				cout<<" ";
			}
			cout<<"\n";
		}
	}
	return 0;
}
