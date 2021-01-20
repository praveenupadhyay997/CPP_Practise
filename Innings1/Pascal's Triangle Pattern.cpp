#include<iostream>
using namespace std;
long long int fact(int a)
{
	long long int f=1;
	for(int i=2;i<=a;i++)
	f*=i;
	return f;
}
int main()
{
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<=i;j++)
		{
		int p=fact(i)/(fact(j)*fact(i-j));
		cout<<p<<"\t";
	    }
	    cout<<endl;
	}
	return 0;	
}
