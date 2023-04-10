#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
void GAS(int n, int s[n], int f[n], int sel[n])
{
    int j=0;
    for(int i=1; i<n; i++)
    {
        if(s[i]>=f[j])
        {
            sel[i]=1;
            j=i;
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    //n=1;
    int s[n], f[n], a[n], sel[n];
    for(int i=0; i< n; i++)
    {
        sel[i]=0;
        a[i]=i+1;
        scanf("%d %d", &s[i], &f[i]);
    }
    printf("\nACT\tStart\tFIN\tSELECT\n");
    for (int i = 0; i < n; i++)
    {
        printf("A-%d\t%d\t %d\t%d\n", a[i], s[i], f[i], sel[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (f[i] > f[j])
            {
                swap(&s[i], &s[j]);
                swap(&f[i], &f[j]);
                swap(&a[i], &a[j]);
            }
        }
    }
    // printf("\nACT\tStart\tFIN\tSELECT\n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("A-%d\t%d\t %d\t%d\n", a[i], s[i], f[i], sel[i]);
    // }
    GAS(n,s, f, sel);
    printf("\nACT\tStart\tFIN\tSELECT\n");
    for (int i = 0; i < n; i++)
    {
        char z[3];
        if(sel[i]==1)
            printf("A-%d\t%d\t %d\t YES\n", a[i], s[i], f[i]);
        else 
            printf("A-%d\t%d\t %d\t -\n", a[i], s[i], f[i]);
    }
}
/*
10
2 3
3 4
2 5
2 5
5 6
6 7
4 7
7 8 
8 9
7 9
*/