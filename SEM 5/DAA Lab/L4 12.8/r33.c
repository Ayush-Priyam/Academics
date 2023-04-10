/*
Write a program to search an element x in an array of n integers using binary search
algorithm that uses divide and conquer technique. Find out the best case, worst case
and average case time complexities for different values of n and plot a graph of the
time taken versus n. The n integers can be generated randomly and x can be chosen
randomly, or any element of the array or middle or last element of the array depending
on type of time complexity analysis.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int BS(int a[], int x, int n)
{
    int l = 0, h = n - 1;
    while (l <= h)
    {
        int mid = (h + l) / 2;
        if (a[mid] == x)
            return mid;
        if (a[mid] < x)
            l = mid + 1;
        else
            h = mid - 1;
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
//
int main(void)
{
    int n, i, se;
    clock_t s, e;
    printf("Enter n: ");
    scanf("%d", &n);
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
    i = BS(a, a[n / 2], n);
    if (i == -1)
        printf("Not found\n");
    else
        printf("Element is found at index %d\n", i);
    e = clock();
    double bct = (e - s) * 1.0 / CLOCKS_PER_SEC;
    s = clock();
    i = BS(a, a[n / 8], n);
    if (i == -1)
        printf("Not found\n");
    else
        printf("Element is found at index %d\n", i);
    e = clock();
    double act = (e - s) * 1.0 / CLOCKS_PER_SEC;
    s = clock();
    i = BS(a, -99, n);
    if (i == -1)
        printf("Not found\n");
    else
        printf("Element is found at index %d\n", i);
    e = clock();
    double wct = (e - s) * 1.0 / CLOCKS_PER_SEC;
    printf("Worst Case: %lf seconds\n Best Case: %lf seconds\nAverage Case: %lf seconds", wct, bct, act);
    return 0;
}
