#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
    long long N;
    cout<<"Enter the number=";
    cin>>N;
    int r;
    long long rev=0;
    while(N!=0)
    {
        r=N%10;
        rev=rev*10+r;
        N/=10;
        
    }
   /* if(rev==1)
    {
    	for(int i=1;i<=9;i++)
    	{
    	if(N==pow(10,i))	
    	cout
		}
    	
	}*/
    cout<<rev;
	return 0;
}
