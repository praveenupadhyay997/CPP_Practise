#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	for(int i=N;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		cout<<j;
		for(int k=1;k<=2*(N-i)-1;k++)
		cout<<"*";
		cout<<endl;
	}
	return 0;
}
