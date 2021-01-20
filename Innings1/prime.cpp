// C++ program to implement normal Sieve
// of Eratosthenes using simple optimization
// to reduce size of prime array to half and
// reducing iterations.
#include <bits/stdc++.h>
using namespace std;
 
void normalSieve(int n)
{
    // prime[i] is going to store true if
    // if i*2 + 1 is composite.
    bool prime[n/2];
    memset(prime, false, sizeof(prime));
 
    // 2 is the only even prime so we can
    // ignore that. Loop starts from 3.
    for (int i=3 ; i*i < n; i+=2)
    {
        // If i is prime, mark all its
        // multiples as composite
        if (prime[i/2] == false)
            for (int j=i*i; j<n; j+=i*2)
                prime[j/2] = true;
    }
 
    // writing 2 separately
    printf("2 ");
 
    // Printing other primes
    for (int i=3; i<n ; i+=2)
        if (prime[i/2] == false)
            printf( "%d " , i );
}
 
// Driver code
int main()
{
    int n = 100 ;
    normalSieve(n);
    return 0;
}
