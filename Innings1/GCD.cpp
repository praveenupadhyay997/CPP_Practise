#include<iostream>
using namespace std;
int main() 
{
    long long int N1,N2,gcd=0;
    cin>>N1>>N2;
    for(int i=2;i<=min(N1,N2);i++)
    {
        if(N1%i==0&&N2%i==0)
        {
            gcd=i;
        }
    }
    cout<<gcd;
	return 0;
}
