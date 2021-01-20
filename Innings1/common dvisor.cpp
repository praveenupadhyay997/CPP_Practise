#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N1,N2;
	int n1,n2,rem;
	cout<<"\n enter the num 1=";
	cin>>n1;
	cout<<"\n Enter the num 2=";
	cin>>n2;
	N1=max(n1,n2);
	N2=min(n1,n2);
/*	while(N2!=0)
	{
		rem=N1%N2;
		N1=N2;
		N2=rem;
	}
	cout<<"GCD="<<N1;
*/
   while(N1!=N2)
   {
      if(N1>N2)
	  N1=N1-N2;
	  else
	  N2=N2-N1;  	
   }	
   cout<<"GCD="<<N1;
}

