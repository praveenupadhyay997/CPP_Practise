#include<iostream>
using namespace std;
int main()
{    
    int N,flag=0,i,j;
    cout<<"Enter the number=";
    cin>>N;
    for(i=2;i<=N;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        cout<<i<<endl;
    }
	return 0;
}

