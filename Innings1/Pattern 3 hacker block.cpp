#include<iostream>
using namespace std;
int main()
{
	int N,t=1;
	cin>>N;
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N-i;j++)
		cout<<"  ";
		int l=t;
		for(int k=1;k<=2*i-1;k++)
		{
			if(k==i+1)
			--l;
			if(k<=i)
			cout<<l++<<" ";
			else
			cout<<--l<<" ";			
		}
		t++;
		cout<<endl;
	}
	t-=2;
	for(int i=1;i<N;i++)
	{
	for(int j=1;j<=i;j++)
		cout<<"  ";
		int l=t;
		for(int k=1;k<=2*(N-i)-1;k++)
		{
			if(k==N-i+1)
			--l;
			if(k<=N-i)
			cout<<l++<<" ";
			else
			cout<<--l<<" ";			
		}
		t--;
		cout<<endl;		
	}
	
	return 0;
}
