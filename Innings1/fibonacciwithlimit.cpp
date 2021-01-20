#include<iostream>
using namespace std;
int main()
{
    long int N,sum=0,a=0,b=1;
   cout<<"Enter the limit=";
    cin>>N;
    if(N>1)
    {
     cout<<a<<endl<<b<<endl;
     while(sum<=N)
     {
        sum=a+b;
        if(sum<=N)
        cout<<sum<<endl;
        a=b;
        b=sum;
        //cout<<sum<<endl;
        
     }
    }
    else if(N==1)
    cout<<a;
	return 0;
}
