#include<iostream>
using namespace std;
int main() {
    long long int oct=0,dec;
    cin>>dec;
    int r,base=1;
    while(dec!=0)
    {
        r=dec%8;
        oct+=base*r;
        base*=10;
        dec/=8;
    }
    cout<<oct;
	return 0;
}
