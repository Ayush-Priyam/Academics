#include <stdio.h>
#include <string.h>
#include <math.h>
int c=0;
void SOE(int n, int *s)
{
    printf("\n");
    for (int i = 0; i <= n; i++)
    {
        s[i] = 1;
    }
    for (int p = 2; p <= sqrt(n); p++)
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
    printf("\n");
}


int midschool_gcd(int n1, int n2)
{
    int si,x=1, gcd=1;
    if(n1<n2)
        si=n1;
    else si=n2;
    int s[si+1];//sieves
    SOE(si, s);
    for(int i=2; i<si ;i++)
    {
        int f1=0, f2=0;
        if(s[i])
        {
            if(n1%i==0)
            {
                n1=n1/i;
                f1=1;

            }
            if (n2 % i == 0)
            {
                n2=n2/i;
                f2=1;
            }
            if(f1==1 && f2==1)
            {
                gcd=gcd*i;
            }
            if(f1==1|| f2==1)
            {
                i--;
                c++;
            }
            printf("%d, %d, %d\n", i+1, n1, n2);
        }

    }
    printf("\n%d ", c);
    return gcd;
}

int main()
{
    midschool_gcd(40, 20);
}
