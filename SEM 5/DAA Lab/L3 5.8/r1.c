#include <stdio.h>
#include <time.h>
#include <stdlib.h>
double main()
{
    long int n=50000;
    int a[n];
    int c=0;
    for(long int i=0; i<n; i++)
    {
        a[i]= c++;
    }
    clock_t s, e;
    s = clock();
    long int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    e = clock();
    printf("%d, %d", s, e);
    double t = (e - s) * 1.0;
    printf("time= %lf\n", t);
    return t;
}