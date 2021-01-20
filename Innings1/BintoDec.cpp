#include<iostream>
using namespace std;
int main() {
    long long int b;
    int base=1;
    int r;
    cin>>b;
    int d=0;
    while(b!=0)
    {
        r=b%10;
        d+=r*base;
        base*=2;
        b/=10;
    }
    cout<<d;
	return 0;
}
