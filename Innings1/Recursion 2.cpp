#include<iostream>
#include<string.h>
using namespace std;
char string_part(char *a, int length)
{
if(length==0)
return a[0];
else
string_part(a+1, length-1);
	
}
int main()
{
	char ch[20]="12345";
	int n=strlen(ch);
	int arr[20];
	for(int i=0;i<n;i++)
	{
	arr[i]=string_part(ch, n);
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
	return 0;
}
