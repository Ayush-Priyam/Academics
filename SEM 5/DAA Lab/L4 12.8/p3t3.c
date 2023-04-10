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
int t = 1;
int BS(int a[], int l, int r, int key)
{
    t++;
    if (r >= l)
    {
        int mid = (r +l) / 2;
        t+=2;
        if (a[mid] == key)
        {
            t++;
            return mid;
        }
        else if (a[mid] > key)
        {
            t++;
            return BS(a, l, mid - 1, key);
        }
        else
        {
            t++;
            return BS(a, mid + 1, r, key);
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
    for (int n = 1000; n <= 51000; n += 5000)
    {
        t = 1;
        int a[n];
        init(a, n);
        isort(a, n);
        // for (int i = 0; i < n; i++)
        // {
        //     printf("%d, ", a[i]);
        // }
        // printf("\nEnter no to search: ");
        // scanf("%d", &se);
        int i = BS(a, 0, n - 1, -99);
        int w = t;
        t = 1;
        BS(a, 0, n - 1, a[n / 2 - 1]);
        int b = t;
        t = 1;
        srand(time(0));
        BS(a,0,n-1, a[rand() % (n / 4)-1]);
        int av = t;
        // if (i == -1)
        //     printf("Not found\n");
        // else
        //     printf("Element is found at index %d\n", i);
        printf("%d\t%d\t%d\t%d\t \n",n, w, b, av);
    }
    // printf("Enter n: ");
    // scanf("%d", &n);
    return 0;
}