#include<iostream>
using namespace std;
int main()
{
	long long int N;
	cin>>N;
	int digit;
	cin>>digit;
	int count=0;
	while(N!=0)
	{
		int r=N%10;
		if(r==digit)
		count++;
		N/=10;
	}
	cout<<count;
	return 0;
}
