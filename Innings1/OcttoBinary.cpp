#include<iostream>
using namespace std;
int main() {
    long long int o;
    int base=1;
    int r;
    cin>>o;
    int d=0;
    while(o!=0)
    {
        r=o%10;
        d+=r*base;
        base*=8;
        o/=10;
    }
   // cout<<d;
    long long int b[100];
    r=0;
    int i=0;
    while(d!=0)
    {
        r=d%2;
        b[i]=r;
        d/=2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    cout<<b[j];
	return 0;
}
