#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void merge(int a[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (j = 0; j < n2; j++)
        R[j] = a[m + 1 + j];

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int l, int r)
{
    if (l < r)
    {

        int m = l + (r - l) / 2;

        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main()
{
    
    for(int i=500; i<=5000;  i+=500)
    {
        int n=i;
        int a[n],rs[n];
        for (int i = 0; i < n; i++)
        {
            a[i] = rand() % (n * 10);
            rs[i]=n-i; 
        }
        clock_t s, e;
        s = clock();
        mergeSort(a, 0, n - 1);
        e = clock();
        double t = ((e - s) * 1.0) / CLOCKS_PER_SEC;

        // printf("\nSorted aay is \n");
        // printArray(a, n);
        printf("%lf\t", t);
        s = clock();
        mergeSort(a, 0, n - 1);
        e = clock();
        t = ((e - s) * 1.0) / CLOCKS_PER_SEC;
        printf("%lf\t", t);
        s = clock();
        mergeSort(rs, 0, n - 1);
        e = clock();
        t = ((e - s) * 1.0) / CLOCKS_PER_SEC;
        printf("%lf\t", t);
    }
    return 0;
}