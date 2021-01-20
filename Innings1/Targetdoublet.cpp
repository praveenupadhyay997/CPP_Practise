#include<iostream>
using namespace std;
int main() { 
	int N;
	cin>>N;
	long int target;

	int a[1001];
	for(int i=0;i<N;i++)
	cin>>a[i];

	cin>>target;

	for(int j=0;j<N;j++)
	{
		for(int k=j+1;j<N;j++)
		{
		if((a[j]+a[k])==target)
		cout<<a[j]<<" and "<<a[k]<<endl;
		}
	}

	return 0;
}
