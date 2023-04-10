/* structure is used to return two values from minMax() */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int t=0;
typedef struct x
{
    int min, max;
} pair;
void init(int *a, int n)
{
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % (n * 100);
    }
}

pair maxmin(int a[], int p, int r)
{
    pair x, lp, rp;
    t+=2;
    if (r - p == 0)
    { 
        t+=3;
        x.max = a[p];
        x.min = a[p];
        return x;
    }
    t++;
    if (r - p == 1)
    {   
        t+3;
        if (a[p] > a[r])
        {   
            x.max = a[p];
            x.min = a[r];
        }
        else
        {
            x.max = a[r];
            x.min = a[p];
        }
        t++;
        return x;
    }
    t+=5;
    int mid = (p + r) / 2;
    lp = maxmin(a, p, mid);
    rp = maxmin(a, mid + 1, r);
    if (lp.min < rp.min)
        x.min = lp.min;
    else
        x.min = rp.min;
    t+=3;
    if (lp.max > rp.max)
        x.max = lp.max;
    else
        x.max = rp.max;
    return x;
}
pair maxminBF(int *a, int n)
{
    pair x;
    x.min = a[0];
    x.max = a[0];
    t++;
    for (int i = 0; i < n; i++)
    {
        t+=3;
        if (x.min > a[i])
            x.min = a[i];
        if (x.max < a[i])
            x.max = a[i];
    }
    t++;
    return x;
}
int main()
{
    int n = 100;
    int a[n];
    init(a, n);
    pair x1 = maxmin(a, 0, n - 1);
    double t1 = t;
    t=0;
    pair x2 = maxminBF(a, n - 1);
    double t2 = t;
    printf("Minimum element is %.0f \n Maximum element is %d\n", x1.min, x1.max);
    printf("Time Taken by D&C= %lf\t Time taken by BF=%lf", t1, t2);
}
