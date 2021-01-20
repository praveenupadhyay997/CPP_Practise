#include<iostream>
using namespace std;
int main()
{
	int t, n;
	long long int a[101];
	int b[101][10];
	cin>>t;
	while(t>0)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int j=0;j<n;j++)
		{
			int num=a[j], count=0;
			
			while(num!=0)
			{
				int r=num%10;
				b[j][count]=r;
				num/=10;
				count++;
			}
			
			
			
		}
		
	    t--;
	}
	return 0;
	
}

