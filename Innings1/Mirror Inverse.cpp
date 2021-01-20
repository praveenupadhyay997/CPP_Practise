#include<iostream>
using namespace std;
int main() 
{
    int N,mid,temp;
    long long int a[10000],b[10000];
    cin>>N;
    bool output=true;
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    mid=N/2;    
    for(int j=0;j<mid;j++)
    {
    	temp=a[j];
    	a[j]=a[N-j-1];
    	a[N-j-1]=temp;
	}
	for(int k=0;k<N;k++)
	{
	    if(a[k]==b[k])
	    continue;
	    else
	    {
	        output=false;
	        break;
	    }
	    
	}
	cout<<std::boolalpha<<output;
	return 0;
}
