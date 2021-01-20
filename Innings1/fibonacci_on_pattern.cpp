#include<iostream>
using namespace std;
int main()
{
    long int N,sum=0,a=0,b=1;
   // cout<<"Enter the limit=";
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i==1)
            cout<<a;
            else if(i==2)
            {
            sum=a+b;
            cout<<b<<'\t'<<sum;
            a=b;
            b=sum;
            break;
            }
            else
            {
                sum=a+b;
                cout<<sum<<'\t';
                a=b; 
                b=sum;
            }
        }
        cout<<endl;
    }
	return 0;
}
