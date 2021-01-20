#include<iostream>
using namespace std;
int main()
{
	int N,mid;
	cin>>N;
	mid=N/2+1;
	if(N%2!=0)
	{
	for(int i=1;i<=mid;i++)
	{
			for(int j=1;j<=N-2*i+1;j++)
			cout<<" ";
			for(int k=i;k>=1;k--)
			{
			if(i==1)
			continue;
			else	
			cout<<k;
	    	}
			for(int l=1;l<=2*i-1;l++)
			cout<<" ";
			for(int m=1;m<=i;m++)
			cout<<m;
			cout<<endl;			
	}
	for(int i=mid-1;i>=1;i--)
	{
			for(int j=1;j<=2*(mid-i);j++)
			cout<<" ";
			for(int k=i;k>=1;k--)
			{
			if(i==1)
			continue;
			else	
			cout<<k;
	    	}
			for(int l=1;l<=2*i-1;l++)
			cout<<" ";
			for(int m=1;m<=i;m++)
			cout<<m;
			cout<<endl;		
		
	}
}
else exit(0);

}
