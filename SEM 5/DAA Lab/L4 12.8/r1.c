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
    int l= 0, h=n-1;
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
        a[i] = i;
    }
}

int main(void)
{
    int n, se;
    clock_t s, e;
    printf("Enter n: ");
    scanf("%d", &n);
    int a[n];
    init(a, n);
    //isort(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("\nEnter no to search: ");
    scanf("%d", &se);
    s=clock();
    int i = BS(a, se, n);
    e=clock();
    double t = (e - s) * 1.0 / CLOCKS_PER_SEC;
    printf("time reqd: = %lf seconds\n", t);
    if (i == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", i);
    return 0;
}