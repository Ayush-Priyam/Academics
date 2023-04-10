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
int t=0;
int BS(int a[], int x, int n)
{
    int l = 0, h = n - 1;
    t++;
    while (l <= h)
    {
        t+=2;
        int mid = (h +l) / 2;
        t++;
        if (a[mid] == x)
        {
            t++;
            return mid;
        }
        t++;
        if (a[mid] < x)
        {
            t++;
            l = mid + 1;
        }
        else
        {
            t++;
            h = mid - 1;
        }
    }
    t++;
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
    printf("No\t WCT\t BCT\t ACT\n");
    for (int n = 100; n <= 5100; n += 500)
    {
        t=0;
        int a[n];
        init(a, n);
        isort(a, n);
        // for (int i = 0; i < n; i++)
        // {
        //     printf("%d, ", a[i]);
        // }
        // printf("\nEnter no to search: ");
        // scanf("%d", &se);
        int i = BS(a, -99, n);
        int w= t;
        t=0;
        BS(a, a[n/2-1], n);
        int b= t;
        t=0;
        srand(time(0));
        BS(a, a[rand()%(n/8)], n);
        int av= t;
        // if (i == -1)
        //     printf("Not found\n");
        // else
        //     printf("Element is found at index %d\n", i);
        printf("%d\t\t\t \n", w);
    }
    // printf("Enter n: ");
    // scanf("%d", &n);
    return 0;
}