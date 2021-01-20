#include<iostream>
using namespace std;
int main()
{
	int n1,n2,ans[100],i,j=0,r1,r2,t;
	cout<<"\n Enter the number of test cases=";
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cout<<"\n Enter the number 1=";
		cin>>n1;
		cout<<"\n Enter the number 2=";
		cin>>n2;
		while(n1!=0&&n2!=0)
		{
			r1=n1%10;
			r2=n2%10;
		//	cout<<"\n r1="<<r1<<"\t r2="<<r2;
			if(r1==r2)
			{
					ans[j]=0;
					//cout<<"\n Digit="<<ans[j];
			}
			else
			{
					ans[j]=1;
					//cout<<"\n Digit="<<ans[j];
	    	}
			n1=n1/10;
			n2=n2/10;
			j++;
		}
         cout<<"\n";
		for(int k=j-1;k>=0;k--)
			cout<<ans[k];

	}
	return 0;
}
