#include<iostream>
using namespace std;
long long int factorial(int num)
{
	int fact=1;
	for(int i=1;i<=num;i++)
	fact=fact*i;
	return fact;
}
int main()
{
	long long int N;
	int r,sum=0;
	int ans=0;
	cout<<"\nEnter the number=";
	cin>>N;
	while(N!=0)
	{
		r=N%10;
		sum=sum+factorial(r);
		cout<<factorial(r)<<endl;
		N=N/10;
	}
	ans=sum%107;
	cout<<"Facto Sum modulo 107="<<ans;
	return 0;
}
