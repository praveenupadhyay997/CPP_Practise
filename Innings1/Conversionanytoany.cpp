#include<iostream>
using namespace std;
long long int Anytodecimal(long long int a,int b)
{
	int base=1;
	long long int decimal=0;
	while(a!=0)
	{
		int r=a%10;
		decimal+=r*base;
		base*=b;
		a/=10;
	}
	return decimal;
}
long long int Decimaltoany(long long int a,int b)
{
	int base=1;
	long long int any=0;
	while(a!=0)
	{
		int r=a%b;
		any +=r*base;
		base*=10;
		a/=b;
	}
	return any;
}
int main()
{
	long long int sn;
	int sb,db;
	cin>>sb>>db;
	cin>>sn;
	if(sb==10)
	cout<<Decimaltoany(sn,db);
    else if(sb!=10&&db==10)
    {
    	cout<<Anytodecimal(sn,sb);
	}
	else
	{
		long long int mid=Anytodecimal(sn,sb);
		cout<<Decimaltoany(mid,db);
	}
}
