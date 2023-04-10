// C program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
void SieveOfEratosthenes(int n)
{
    int s[n + 1];
    for(int i=0; i<=n; i++)
    {
        s[i]=1;
    }
    for (int p = 2;p <= sqrt(n); p++)
    {
        if (s[p])
        {
            for (int i = p * p; i <= n; i += p)
                s[i] = 0;
        }
    }
    for (int p = 2; p <= n; p++)
        if (s[p])
            printf("%d ", p);
}

// Driver Code
int main()
{
    int n = 30;
    printf("Following are the prime numbers smaller than or equal to %d \n", n);
    SieveOfEratosthenes(n);
    return 0;
}

// This code is contributed by Aditya Kumar (adityakumar129)
