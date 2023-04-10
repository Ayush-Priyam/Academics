//maxmin
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
typedef struct  x
{
    int min, max;
}pair;
void init(int *a, int n)
{
    srand(time(0));
    for(int i=0; i<n; i++)
    {
        a[i]= 2+ rand()%(n*100);
    }
}//
pair maxmin(int a[], int p, int r)
{
    pair x, lp, rp;
    int mid;
    if (r-p == 0)
    {
        x.max = a[p];
        x.min = a[p];
        return x;
    }

    if (r-p == 1)
    {
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
        return x;
    }

    mid = (p + r) / 2;
    lp = maxmin(a, p, mid);
    rp = maxmin(a, mid + 1, r);
    if (lp.min < rp.min)
        x.min = lp.min;
    else
        x.min = rp.min;

    if (lp.max > rp.max)
        x.max = lp.max;
    else
        x.max = rp.max;
    return x;
}
pair maxminBF(int *a, int n)
{
    pair x;
    x.min= a[0];
    x.max=a[0];
    for(int i=0; i<n; i++)
    {
        if(x.min>a[i])
            x.min=a[i];
        if(x.max<a[i])
            x.max= a[i];
    }
}
// int main()
// {
//     int n=1000;
//     int a[n];
//     init(a, n);
//     clock_t s, e;
//     s = clock();
//     pair x1 = maxmin(a, 0, n - 1);
//     e = clock();
//     double t1 = (e - s) * 1.0 / CLOCKS_PER_SEC;
//     s = clock();
//     pair x2 = maxminBF(a, n - 1);
//     e = clock();
//     double t2 = (e - s) * 1.0 / CLOCKS_PER_SEC;
//     printf("Minimum element is %d \n Maximum element is %d\n", x1.min,x1.max);
//     printf("Time Taken by D&C= %lf\t Time taken by BF=%lf", t1, t2);
// }

int main()
{

    clock_t s, e;
    for(int i=100; i<=1000;i++)
    {
        int n = 1000;
        int a[n];
        init(a, n);
        s = clock();
        pair x1 = maxmin(a, 0, n - 1);
        e = clock();
        double t1 = (e - s) * 1.0 / CLOCKS_PER_SEC;
        s = clock();
        pair x2 = maxminBF(a, n - 1);
        e = clock();
        double t2 = (e - s) * 1.0 / CLOCKS_PER_SEC;
        //printf("Minimum element is %d \n Maximum element is %d\n", x1.min, x1.max);
        printf("%d\t%lf\t%lf",n, t1, t2);
    }
}