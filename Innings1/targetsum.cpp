#include<iostream>
#include<algorithm>
using namespace std;
/*bool mycompare(int a, int b)
{
	return a>b;
}*/
int main() {
	int N;
	cin>>N;
	long int a[1001];
	for(int i=0;i<N;i++)
	cin>>a[i];
	long int target,sum;
	cin>>target;
	sort(a,a+N);
	long int low=a[0],max=a[N-1];

	for(int i=0;i<N-1;i++)
	{
		if(a[i]>target||(a[i]+low)>target||(a[i]+max)<target)
		continue;
		sum=0;
		for(int j=i;j<N;j++)
		{
		if(a[i]+a[j]==target)
		cout<<a[i]<<" and "<<a[j]<<"\n";
		}
	}
	return 0;
}
