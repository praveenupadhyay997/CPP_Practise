#include<iostream>
using namespace std;
int main()
{
	int M,N;
	cin>>M>>N;
	long a[11][11];
	
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		cin>>a[i][j];
	}
		for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
	    cout<<a[i][j]<<" ";
	    cout<<"\n";
	}
	
 for(int i=0;i<N;i++)
 {
     if(i%2==0)
     {
         for(int j=0;j<M;j++)
     {
         cout<<a[j][i]<<",";
     }
     }
    else
    {
     for(int j=M-1;j>=0;j--)
     {
         cout<<a[j][i]<<",";
     }
    }
     
 }
 cout<<"END";
 return 0;
}
