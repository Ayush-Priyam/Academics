#include <stdio.h>
#include <string.h>
#include<math.h>
typedef struct
{
    int fac[100];
    int exp[100];
    int s;

}PF;
void SOE(int n, int *s)
{
    for (int p = 2; p * p <= n; p++)
    {
        if (s[p])
        {
            for (int i = p * p; i <= n; i += p)
                s[i] = 0;
        }
    }
    // for (int p = 2; p <= n; p++)
    //     if (prime[p])
    //         printf("%d, ", p);
    // printf("\n");
}
void factorisation(int n, PF *a)
{
    int n1=n;
    int prime[n + 1];
    memset(prime, 1, sizeof(prime));
    SOE(n, prime);
    a->fac[0]=1;
    a->exp[0]=1;
    int z=0;
    int i=2;
    printf("\n\f2 of %d:\n", n);
    while(n!=1)
    {
        if(prime[i] && n%i==0)
        {   
            printf("%d x ", i);
            n=n/i;
            if(a->fac[z]==i)
            {
                a->exp[z]++;
            }
            else{
                z++;
                a->fac[z]=i;
                a->exp[z]=1;
            }
        }
        else{
            i++;
        }
    }
    printf("\n");
    a->s=z+1;
    for(i=1; i<=z; i++)
    {
        printf("%d^%d X ", a->fac[i], a->exp[i]);
    }
}


int midschool_gcd(int n1, int n2)
{

    //printf("Following are the prime numbers smaller than or equal to %d \n", n);
    PF f1, f2;
    factorisation(n1, &f1);
    factorisation(n2, &f2);
    int min, x=1, i=1, j=1;
    while (i < f1.s && j < f2.s)
    {
        if (f1.fac[i] < f2.fac[j])
            i++;

        else if (f2.fac[j] < f1.fac[i])
            j++;
        else
        {
            if(f1.exp[i]> f2.exp[i]) min= f2.exp[j];
            else min= f1.exp[i];
            x = x * f1.fac[i] * min;
            i++;
            j++;
        }
    }
    printf("\nGCD=%d ", x);
    return 0;
}

int main()
{
    midschool_gcd(40, 20);
}
