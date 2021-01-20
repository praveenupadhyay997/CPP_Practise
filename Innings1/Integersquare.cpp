#include<iostream>
using namespace std;
long long int sqr(long long int n)
{
    int i=2;
    while(n>=(i*i))
    {
        i++;
    }
    return i-1;
}
int main() {
    long long int N;
    cin>>N;
    long long int square=sqr(N);
    cout<<square;
	return 0;
}
