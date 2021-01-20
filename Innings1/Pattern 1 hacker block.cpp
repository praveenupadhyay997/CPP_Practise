#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int m=N/2+1;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=m-i+1;j++)
		cout<<"*";
		for(int k=1;k<=2*(i-1)-1;k++)
		cout<<" ";
		if(i==1)
		{
		for(int l=1;l<=m-i;l++)
		cout<<"*";
	    }
	    else
	    {
	   	for(int l=1;l<=m-i+1;l++)
		cout<<"*";
		}
		cout<<endl;
	}
		for(int i=2;i<=m;i++)
	{
		for(int j=1;j<=i;j++)
		cout<<"*";
		for(int k=1;k<=2*(m-i)-1;k++)
		cout<<" ";
		if(i==m)
		{
		for(int l=1;l<=m-1;l++)
		cout<<"*";
	    }
	    else
	    {
	   	for(int l=1;l<=i;l++)
		cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
