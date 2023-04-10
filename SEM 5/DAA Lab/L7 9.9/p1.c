// heap sort
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void maxheapify(int a[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && a[l] > a[largest])
        largest = l;

    if (r < n && a[r] > a[largest])
        largest = r;

    if (largest != i)
    {
        int x = a[i];
        a[i] = a[largest];
        a[largest] = x;
        maxheapify(a, n, largest);
    }
}
// void init(int *a, int n)
// {
//     for (int j = 0; j < n; j++)
//     {
//         a[j] = rand() % (n * 10);
//     }
// }
void maxheap(int a[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        maxheapify(a, n, i);
    }
}
void heapsort(int a[], int n)
{
    maxheap(a, n);
    for (int i = n - 1; i >= 0; i--)
    {
        int x = a[i];
        a[i] = a[0];
        a[0] = x;
        maxheapify(a, i, 0);
    }
}
void disp(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d, ", a[i]);
    printf("\n");
}

int main()
{
    clock_t s, e;
    double t1, t2, t3;
    //  printf("Enter n: ");
    //  scanf("%d", &n);
    srand(time(0));
    printf("\nSize\t BCT \t     ACT \t    WCT\n");
    for (int i = 500; i <= 5000; i += 500)
    {
        // printf("%d\t", i);
        int n = i;
        int a[n], b[n], c[n];
        for (int j = 0; j < i; j++)
        {
            a[j] = 5;
            b[j] = rand() % (2 * n);
            c[j] = rand() % (1000 * n);
        }
        s = clock();
        heapsort(a, n);
        e = clock();
        t1 = (e - s) * 1.0 / CLOCKS_PER_SEC;

        s = clock();
        heapsort(b, n);
        e = clock();
        t2 = (e - s) * 1.0 / CLOCKS_PER_SEC;

        s = clock();
        heapsort(c, n);
        e = clock();
        t3 = (e - s) * 1.0 / CLOCKS_PER_SEC;
        printf("%d \t%lf \t %lf \t%lf\n", n, t1, t2, t3);
    }
}
