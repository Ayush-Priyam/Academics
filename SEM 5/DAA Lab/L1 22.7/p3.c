/*.3 Write a program to rearrange the elements of an array of n integers such that all even
numbers are followed by all odd numbers. How many different wavs you can solve this
problem. Write your approaches & strategy for solving this problem.
*/
#include <stdio.h>
#include <stdlib.h>
void init(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        // scanf("%d", &a[i]);
        a[i] = rand() % 100;
    }
    printf("Initial Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
}
void rearr(int *a, int n)
{
    for (int i = 0; i < n-1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (a[i] % 2 != 0)
            {
                int x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
}
void main()
{
    int i, j, x, n;
    printf("enter no of elements: ");
    scanf("%d", &n);
    int a[n];
    init(a,n);
    rearr(a,n);
    printf("\nThe rearranged array: ");
    for (i = 0; i < n; ++i)
    {
        printf("%d, ", a[i]);
    }
}