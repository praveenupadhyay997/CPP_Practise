#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	long long int N;
	cin>>N;
	int t=1;
	long long int inverse=0;
	while(N!=0)
	{
		int r=N%10;
		inverse+=t*pow(10,r-1);
		t++;
		N/=10;
	}
	cout<<inverse;
}
