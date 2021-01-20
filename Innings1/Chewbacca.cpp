#include<iostream>
using namespace std;
int main()
{
   long long int x;
   int a[20],r;
   cin>>x;
   int t=0;
   while(x!=0)
   {
       r=x%10;
       if(r==9&&((x/10)==0))
       a[t]=r;
       else
       {
       if(r>=5)
       a[t]=9-r;
       else
       a[t]=r;
       }
      // cout<<a[t];
       x/=10;
       t++;
   }
   for(int i=t-1;i>=0;i--)
   cout<<a[i];
   return 0;
    
}
