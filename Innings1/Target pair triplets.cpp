#include<iostream>
using namespace std;
int main() {
    int N;
    long int a[1005];
    cin>>N;
    for(int i=0;i<N;i++)
    cin>>a[i];
    int target;
    cin>>target;
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            for(int k=j+1;k<N;k++)
            {
            	long int num=a[i]+a[j]+a[k];
                if(num==target)
               {
                long int midval;
                long int maxim=max(a[i],a[j],a[k]);
                long int minim=min(a[i],a[j],a[k]);
                if(maxim==a[i]&&minim==a[j])
                midval=a[k];
                else if(maxim==a[i]&&minim==a[k])
                midval=a[j];
                else 
                midval=a[i];
                cout<<minim<<" , "<<midval<<" and "<<maxim<<endl;
               }
            }
        }    
    }
	return 0;
}
