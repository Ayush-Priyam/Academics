#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int BS(int a[], int l, int r, int key)
{
    if (r >= l)
    {
        int mid = (r + l) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            return BS(a, l, mid - 1, key);
        }
        else
        {
            return BS(a, mid + 1, r, key);
        }
    }
    return -1;
}
void init(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 10000;
    }
}
void isort(int a[], int n)
{
    int i, key, j;
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
    // printf("time= %d\n", c);
}
int main(void)
{
    int n, se;
    clock_t s, e;
    printf("No\t WCT\t BCT\t ACT\n");
    for (int n = 1000; n < 11000; n += 1000)
    {
        int a[n];
        init(a, n);
        isort(a, n);
        // for (int i = 0; i < n; i++)
        // {
        //     printf("%d, ", a[i]);
        // }
        // printf("\nEnter no to search: ");
        // scanf("%d", &se);
        s = clock();
        int i = BS(a,0, n-1, -99);
        // if (i == -1)
        //     printf("Not found\n");
        // else
        //     printf("Element is found at index %d\n", i);
        e = clock();
        double t = (e - s) * 1.0 / CLOCKS_PER_SEC;
        printf("%d\t %lf seconds\n", n, t);
    }
    // printf("Enter n: ");
    // scanf("%d", &n);
    return 0;
}