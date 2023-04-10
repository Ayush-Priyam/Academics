/*2. Write a program to store random numbers into an array of n integers. where the array
must contains some duplicates. Do the following:
a) Find out the total number of duplicate elements.
b) Find out the most repeating element in the array.*/
#include <stdio.h>
#include <stdlib.h>
void init(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        // scanf("%d", &a[i]);
        a[i] = rand() % 10;
    }
    printf("Initial Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
}
int rep(int *a, int n)
{
    int i= 0, j, c=0, max =0, mr=0;
    if (n == 1)
        mr = a[0];
    for (i = 0; i < n; i++)
    {
        c = 1;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] == a[i])
            {
                c++;
                if (c > max)
                {
                    mr = a[j];
                    max=c;
                }
            }
        }
    }
    return mr;
}
void sort(int *a, int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (a[i] > a[j])
            {
                int x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
}
int dup(int* a, int n)
{
    int c = 0;
    printf("\nDuplicate Elements: ");
    for (int i = 0; i < n - 1; ++i)
    {
        if (a[i] == a[i + 1] && (i == 0 || a[i - 1] != a[i]))
        {
            printf("%d, ", a[i]);
            c++;
        }
    }
    return c;
}
int main()
{
    srand(time(0));
    int n, i, j ;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    int a[n];
    init(a, n);    
    sort(a, n);
    // printf("\nThe sorted array: ");
    // for (i = 0; i < n; ++i)
    // {
    //     printf("%d, ", a[i]);
    // }
    int nd = dup(a, n);
    printf("\nTotal no of duplicate: %d", nd);
    int mr = rep(a, n);
    printf("\nMost repeating element: %d\n", mr);
}