#include <iostream>
using namespace std;
int main() {
    int N1,N2;
    cin>>N1>>N2;
    int count=1,i=0;
    while(count<=N1)
    {
    	 i++;
        if((3*i+2)%N2==0)
        continue;
        else
       {
           count++;
           cout<<3*i+2;
       }
        cout<<endl;
    }
    
}
