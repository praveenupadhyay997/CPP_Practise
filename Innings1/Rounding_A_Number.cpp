#include<iostream>
using namespace std;
int main()
{
	int x=6.75999;
	double rounded = (int)(x * 1000.0)/1000.0;
	cout<< (int)(x * 1000.0)<<rounded;
	return 0;
}
