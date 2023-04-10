#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
void FK(int m, int n, int p[n], int w[n], double x[n])
{
    // double x[n];
    int i;
    for (i = 0; i < n; i++)
    {
        x[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        if (w[i] < m)
        {
            x[i] = 1;
            m = m - w[i];
        }
        else
            break;
    }
    //printf("REM %d , i", m)
    if (i <= n)
        x[i] = (m * 1.0) / w[i];
}
int main()
{
    int n, m;
    scanf("%d %d", &m, &n);
    int w[n], p[n], o[n];
    double x[n], pw[n];
    //printf("Enter weight, profit for %d items\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &w[i], &p[i]);
        pw[i]= p[i]*1.0/w[i];
    }
    for(int i=0; i<n; i++)
    {
        o[i]=i+1;
    }
    // printf("\nOBJ\t Prof\tWEi\t P/W\n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("OB %d\t%d\t %d\t%.3.3lf\n", o[i], p[i], w[i], pw[i]);
    // }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (pw[i]<= pw[j])
            {
                swap(&o[i], &o[j]);
                swap(&p[i], &p[j]);
                swap(&w[i], &w[j]);
                //swap(&pw[i], &pw[j]);
                double z= pw[i];
                pw[i]=pw[j];
                pw[j]=z;
            }
        }
    }
    // printf("\nOBJ\t Prof\tWEi\t P/W\n");
    // for(int i=0; i< n; i++)
    // {
    //     printf("OB %d\t%d\t %d\t%.3lf\n", o[i], p[i], w[i], pw[i]);
    // }
    FK(m, n, p, w, x);
    printf("\nOBJ\t Prof\tWEi\t P/W\t SOL\n");
    for (int i = 0; i < n; i++)
    {
        printf("OB %d\t%d\t %d\t%.3lf\t %.3lf\n", o[i], p[i], w[i], pw[i], x[i]);
    }
}
/*
17
8
5 10
4 15
3 8
7 7
2 3
3 15
2 8
6 27
*/
/*
17 8
8 1
1 14
5 9
9 18
5 2
6 5
8 1
2 1*/