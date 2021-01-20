#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int ext=1,mid=1;
	for(int i=1;i<=N;i++)
	{
		int p=i-2;
			if(p>0&&(i%2)==0)
			{
		     mid=0;
			 cout<<ext;
			 for(int k=1;k<=p;k++)
			 cout<<mid;
			 cout<<ext;
			}
			else if(p>0&&(i%2)!=0)
			{
			 cout<<ext;
			 for(int k=1;k<=p;k++)
			 cout<<mid;
			 cout<<ext;				
			}
			else
			{
			for(int k=1;k<=i;k++)
			cout<<ext;
			}
			cout<<endl;
	}
}
