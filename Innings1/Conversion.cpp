#include<iostream>
using namespace std;
int main() {
    int Min,Max,step;
    cin>>Min>>Max>>step;
    int a=Min;
    while(a<=Max)
    {
        signed int c=(5*(a-32))/9;
        cout<<a<<" "<<c<<endl;
        a=a+step;
    }
    return 0;
    
}
