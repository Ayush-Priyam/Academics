/*White a program to find out GCD (greatest common divisor) using the following three
algorithms.
a) Euclid’s algorithm
b) Consecutive integer checking algorithm.
c) Middle school procedure which makes use of common prime factors. For finding
list of pnmes rmplement sieve of Eratosthenes algorithm*/
#include <stdio.h>
#include <math.h>
int c=0;
int euclid_gcd(int a, int b)
{
    c++;
    if (a == 0)
    {
        c++;
        return b;
    }
    c+=2;
    return euclid_gcd(b % a, a);
}
int con_gcd(int a, int b)
{
    int gcd=1, l;
    if(a>b) l=b;
    else l=a;
    c+=4;
    for(int i=l; i>=1; i--)
    {   
        c+=2;
        if(a%i==0)
        {
            c++;
            if(b%i==0)
            {
                gcd=i;
                c+=2;
                return gcd;
            }
        }
    }
}
void SOE(int n, int *s)
{
    //printf("\n");
    for (int i = 0; i <= n; i++)
    {
        c++;
        s[i] = 1;
    }
    for (int p = 2; p <= sqrt(n); p++)
    {
        c+=2;
        if (s[p])
        {
            
            for (int i = p * p; i <= n; i += p)
            {
                s[i] = 0;
                c += 2;
            }
            c++;
        }
    }
    // for (int p = 2; p <= n; p++)
    //     if (s[p])
    //         printf("%d ", p);
    // printf("\n");
}
int midschool_gcd(int n1, int n2)
{
    int si, x = 1, gcd = 1;
    c++;
    if (n1 < n2)
        si = n1;
    else
        si = n2;
    c+=2;
    int s[si + 1]; // sieves
    c++;
    SOE(si, s);
    for (int i = 2; i < si; i++)
    {
        c+=3;
        int f1 = 0, f2 = 0;
        if (s[i])
        {
            c+=4;
            if (n1 % i == 0)
            {
                c +=2;
                n1 = n1 / i;
                f1 = 1;
            }
            if (n2 % i == 0)
            {
                n2 = n2 / i;
                f2 = 1;
                c+=2;
            }
            if (f1 == 1 && f2 == 1)
            {
                c++;
                gcd = gcd * i;
            }
            if (f1 == 1 || f2 == 1)
            {
                i--;
                c++;
                c+=2;
            }
            //printf("%d, %d, %d\n", i + 1, n1, n2);
        }
    }
    c++;
    //printf("\n%d ", c);
    return gcd;
}
int main()
{
    int i, j;
    int n[6][2]={{31415,14142}, {56, 32566}, {34218,56}, {12,15},{31415,31415}, {12,12}};
    // for (i = 0; i < 6; i++)
    // {
    //     for (j = 0; j < 2; j++)
    //     {
    //         printf("%d, ",n[i][j]);
    //     } 
    //     printf("\n");
    // } 
    printf("\nNOs\t\tEA SC\tCICA SC\t MDA SC GCD\n--------------------------------------\n");
    for(int i=0; i<6;i++)
    {
        c=0;
        int x = euclid_gcd(n[i][0], n[i][1]);
        int c1=c+1;
        c=0;
        int y = con_gcd(n[i][0], n[i][1]);
        int c2= c+1;
        c=0;
        int z = midschool_gcd(n[i][0], n[i][1]);
        int c3= c+1;
        printf("%d\t%d\t  %d\t %d\t %d\t %d\n", n[i][0], n[i][1], c1, c2, c3, x);
    }
}