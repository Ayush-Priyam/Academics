#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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
        int x = partition(a, p, r); // x is the partitioning index
        quicksort(a, p, x - 1);
        quicksort(a, x + 1, r);
    }
}
void qsBC(int a[], int p, int r)
{
    if (p < r)
    {
        int m = (p + r) / 2;
        quicksort(a, p, m - 1);
        quicksort(a, m + 1, r);
    }
}
void disp(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
void init(int *a, int n)
{
    for (int j = 0; j < n; j++)
    {
        a[j] = rand() % (n * 10);
    }
}
int main()
{
    // int n;
    clock_t s, e;
    // double t;
    //  printf("Enter no. of elts: ");
    //  scanf("%d", &n);
    printf("\nN:size\t  BCT\t  ACT\t    WCT\n");
    printf("------------------\n");
    for (int i = 500; i <= 5000; i += 500)
    {
        printf("%d\t", i);
        int n = i;
        int a[n], b[n];
        init(a, n);
        init(b, n);
        // qsBC(b,0,n-1);
        s = clock();
        qsBC(b, 0, n - 1);
        e = clock();
        double t = (e - s) * 1.0 / CLOCKS_PER_SEC;
        printf("%lf\t", t);
        s = clock();
        quicksort(a, 0, n - 1);
        e = clock();
        t = (e - s) * 1.0 / CLOCKS_PER_SEC;
        printf("%lf\t", t);
        int sa[n];
        for (int j = 0; j < n; j++)
        {
            sa[n] = j + 1;
        }
        s = clock();
        quicksort(sa, 0, n - 1);
        e = clock();
        t = (e - s) * 1.0 / CLOCKS_PER_SEC;
        printf("%lf\t\n", t);

        // printf("\n");
        // printf("Random Array : ");
        // disp(t, n);
        // printf("Sorted Array : ");
        // disp(a, n);
        // return 0;
    }
}