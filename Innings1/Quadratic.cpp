#include<iostream>
#include<math.h>
using namespace std;
int main() 
{
  int a,b,c;
  cin>>a>>b>>c;
  double root1=0.0,root2=0.0;
  double d=sqrt((b*b)-4*a*c);
  if(d>0)
  {
    cout<<"Real and Distinct";
    root1=((-1*b)+d)/2*a;
    root2=((-1*b)-d)/2*a;
    cout<<endl<<root1<<'\t'<<root2;
  }
  else if(d==0)
  {
    cout<<"Real and Equal";
    root1=root2=((-1*b))/2*a;
    cout<<endl<<root1<<'\t'<<root2;
  }
  else
  cout<<"Imaginary";
	return 0;
}
