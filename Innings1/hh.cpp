#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter the number for which u want to make table =";
	cin>>x;
	
	for(int i=1;i<=10;i++)
	{
		int pdt= x*i;
		cout<<endl<<x<<"x"<<i<<"="<<pdt;
	}
	return 0;
}
