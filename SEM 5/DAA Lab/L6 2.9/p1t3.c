#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int partitionBC(int a[], int p, int r)
{
    int x = a[r];
    a[r] = a[(p + r) / 2];
    a[(p + r) / 2] = a[x];
    return partition(a, p, r);
}

int partition(int a[], int p, int r)
{
    int pivot = a[r];
    int i = (p - 1);

    for (int j = p; j <= r - 1; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    int tmp = a[i + 1];
    a[i + 1] = a[r];
    a[r] = tmp;
    return (i + 1);
}

void quicksort(int a[], int p, int r)
{
    if (p < r)
    {
        int x = partition(a, p, r);
        quicksort(a, p, x - 1);
        quicksort(a, x + 1, r);
    }
}

void quicksortBC(int a[], int p, int r)
{
    if (p < r)
    {
        int x = partitionBC(a, p, r);
        quicksortBC(a, p, x - 1);
        quicksortBC(a, x + 1, r);
    }
}

void disp(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main()
{
    int n;
    clock_t s, e;
    float time;
    printf("\nN\tBest\t\tAverage\t\tWorst\n");
    printf("----------------------------------------------\n");
    for (int i = 500; i <= 5000; i += 500)
    {
        printf("%d \t", i);
        int n = i;
        int k[n], l[n], m[n];
        for (int j = 0; j < i; j++)
        {
            k[j] = l[j] = m[j] = rand() % 100;
        }

        quicksort(k, 0, n - 1);
        s = clock();
        quicksortBC(k, 0, n - 1);
        e = clock();
        time = (e - s);
        time /= CLOCKS_PER_SEC;
        printf("%f\t", time);

        s = clock();
        quicksort(l, 0, n - 1);
        e = clock();
        time = (e - s);
        time /= CLOCKS_PER_SEC;
        printf("%f\t", time);

        quicksort(m, 0, n - 1);
        s = clock();
        quicksort(m, 0, n - 1);
        e = clock();
        time = (e - s);
        time /= CLOCKS_PER_SEC;
        printf("%f\n", time);
        printf("\n");
        // printf("Random Array : ");
        // disp(k, n);
        // printf("Sorted Array : ");
        // disp(m, n);
    }
}