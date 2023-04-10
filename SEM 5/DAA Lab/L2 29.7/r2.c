#include <stdio.h>
#include <math.h>
int c=0;
int sieveoferatosthenes(int n, int *num)
{
    int i, j, t;
    int limit = sqrt(n);
    c += 3;
    for (i = 0; i < n; i++)
    {
        c += 2;
        num[i] = i + 1;
    }
    for (i = 1; i <= limit; i++)
    {
        c += 2;
        if (num[i] != 0)
        {
            t = num[i];
            for (j = (t * t); j <= n; j = j + num[i])
            {
                c += 2;
                num[j - 1] = 0;
            }
        }
    }
}

int GCD3(int m, int n)
{
    int t, res = 1, a = 0, b = 0, k = 0;
    if (m >= n)
        t = n;
    else
        t = m;
    int arr[t], ar[t];
    c += 4;
    sieveoferatosthenes(t, &arr);
    int j = 0;
    for (int i = 0; i < t; i++)
    {
        if (arr[i] != 0 && arr[i] != 1)
        {
            ar[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < j; i++)
    {
        a = 0;
        b = 0;
        c += 4;
        if (m % ar[i] == 0)
        {
            c += 3;
            b = 1;
            m = m / ar[i];
        }
        if (n % ar[i] == 0)
        {
            c += 3;
            a = 1;
            n = n / ar[i];
        }
        if (a == 1 && b == 1)
        {
            c += 2;
            res = res * ar[i];
        }
        if (a == 1 || b == 1)
        {
            c += 2;
            i--;
        }
    }
    c++;
    printf("Step Count = %d\nGCD= %d", c, res);
    return res;
}

int main()
{
    GCD3(12, 15);
}