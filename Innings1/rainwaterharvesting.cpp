#include<iostream>
using namespace std;
int main()
{
	int n, elev[1000];
	cout<<"\n Enter the elevation plan=";
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cout<<"\n Enter the elevation of "<<i<<"location.";
		cin>>elev[i];
	}
	long int m,total=0;
	int start;
	for(int i=0;i<n;i++)
	{
	if(elev[i]==0&&elev[i+1]!=0)
	{
	start=i+1;
	break;
    } 
    }  
	int j,alt=0,ne; 
	while(start!=(n-1))	
	{
		int m=elev[start];
		for(int i=start+1;i<n;i++)
		{
			if(alt=max(alt,elev[i]))
			{
				alt=max(alt,elev[i]);
				ne=i;
			}
			if(elev[i]>=m)
			{
			ne=i;
			break;
		    }
		}
		for(int i=start;i<=ne;i++)
			total=total+(alt-elev[i]);
	}
	cout<<"The water harvested="<<total;
}
