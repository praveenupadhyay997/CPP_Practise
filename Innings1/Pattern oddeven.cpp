#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	if(N%2==0)
	{
		int p=N-1;
		for(int i=1;i<=N;i++)
		{
		cout<<p<<" ";
		if(p%2!=0&&p>1)
		p-=2;
		else if(p==1)
		p=p+1;
		else
		p+=2;	
	    }
	}
	else
	{
		int p=N;
		for(int i=1;i<=N;i++)
		{
		cout<<p<<" ";
		if(p%2!=0&&p>1)
		p-=2;
		else if(p==1)
		p=p+1;
		else
		p+=2;	
	    }
	}
	return 0;
}
