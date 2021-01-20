#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
bool armstrong(long long int n)
{
    long long int m=n,arm=0;
    int r;
    while(m!=0)
    {
        r=m%10;
        arm=arm+(pow(r,3));
        m/=10;
    }
    if(arm==n)
    return true;
    else
    return false;
}
int main() {
    long long int N;
    cin>>N;
    bool output=armstrong(N);
    cout<<std::boolalpha<<output;
    getch();
 	return 0;
}
