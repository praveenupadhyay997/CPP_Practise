#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
void primeSieve(int *p, int n)
{
    for (int i = 3; i < n; i += 2)
    {
        if (p[i])
        {
            for (int j = i * i; j < n; j += i)
            {
                p[j] = 0;
            }
        }
    }
    p[0] = 0;
    p[1] = 0;
    for(int i =2; i<= n; i++)
    {
        if(p[i]==1)
        {
            cout<<i<<endl;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the limit --" ;
    cin>>n;

    int *p = new int[n];
    memset(p,1,n);
    primeSieve(p,n);
    getch();
    return 0;
}