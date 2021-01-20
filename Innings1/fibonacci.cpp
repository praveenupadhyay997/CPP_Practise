#include<iostream>
using namespace std;
int main()
{
	int N,a=0,b=1,sum=0;
	cin>>N;
	for(int i=1;i<N;i++)
	{
		sum=a+b;
		cout<<sum<<",";
		a=b;
		b=sum;
	}
	cout<<sum;
}

