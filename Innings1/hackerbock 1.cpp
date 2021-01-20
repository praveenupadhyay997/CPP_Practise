#include<iostream>
using namespace std;
long long int fact(int n)
{
  long long int f=1;
  for(int i=2;i<=n;i++)
  f*=i;
  return f;
}
int main() 
{
  int N;
  cin>>N;
  int a[10000];
  long long int sum=0;
  
  for(int i=0;i<N;i++)
  {
    cin>>a[i];
  } 
  for(int j=N-1;j>=0;j--)
  {
    sum=sum+fact(a[j]);
  }
  int ans=sum%107;
  cout<<ans;
	return 0;
}
