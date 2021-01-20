#include<iostream>
using namespace std;
int main()
{
	int N;
    long long int a[10000];
	cout<<"Enter the number of element in the array =";
	cin>>N;
	for(int i=0;i<N;i++)
	cin>>a[i];
	for(int j=1;j<N;j++)
	{
		if(a[0]<a[j])
		a[0]=a[j];
	}
	cout<<a[0];
    return 0;
    return 0;
}
