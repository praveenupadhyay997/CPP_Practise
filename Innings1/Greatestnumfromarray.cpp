#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t)
	{
		int n;
		long int a[1001], size[1001];
		cin>>n;
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		int sub[1001][6];
		for(int i=0;i<n;i++)
		{
			int num=a[i],count=0;
			while(num)
			{
			   num/=10;
			   count++;	
			}
			size[i]=count;
			num=a[i];
			for(int j=count-1;j>=0;j--)
			{
				int r=num%10;
				sub[i][j]=r;
				num/=10;
			}
		}
		t--;
		int sumsize=0;
		for(int i=0;i<n;i++)
		sumsize+=size[i];
		
		sort(sub[0][0],sub[n][0]);
        for(int i=0;i<n;i++)
        {
         	for(int j=0;j<sizeof(sub[i]);j++)
        	cout<<sub[i][j];
	        cout<<"\n";
        }	
	}
	

			return 0;
}
