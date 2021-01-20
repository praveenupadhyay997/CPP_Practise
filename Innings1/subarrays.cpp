#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	int ms=0;
	for(int i=0;i<5;i++)
	{
		int cr=0;
		for(int j=i;j<5;j++)
		{
		 for(int k=i;k<=j;k++)
		{
		cout<<a[k]<<",";	
		}
		cout<<endl;
	    }
	}
}
