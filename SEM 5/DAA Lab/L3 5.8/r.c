/*1. write a menu driven program as given below, to sort an array of n integers in ascending order by
insertion sort algorithm and determine the time required (in terms of step/frequency count) to
sort the elements. Repeat the experiment for different values of n and different nature of data
(i.e.apply insertion sort algorithm on the data of array that are already sorted, reversely sorted
and random data). Finally plot a graph of the time taken versus n for each type of data. The
elements can be read from a file or can be generated using the random number generator.
0. Quit
1. n Random numbers=>Array
2. Display
3. Sort the Array In Ascending Order
4. Sort the Array in Descending Order
5. Time Complexity to sort ascending of random data
6. Time Complexity to sort ascending of data already sorted 1n ascending order
/. Time Complexity to sort ascending of data already sorted 1n descending order
8. Time Complexity to sort ascending of data for a7] Cases (Data
Ascending, Data 71n Descending & Random Data) in Tabular
form for values n=5000 to 50000, step=5000*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int isort(int a[], int n)
{
    int c = 0, i, key, j;
    c++; // for initializations
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        c += 3; // for true for + prev 2 lines
        while (j >= 0 && a[j] > key)
        {
            c += 3; // for true while and next 2 lines
            a[j + 1] = a[j];
            j--;
        }
        c + 2; // for false while + line 20 + return
        a[j + 1] = key;
    }
    return c;
}
int main()
{
    int n;
    srand(time(0));
    printf("Enter n: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
        printf("%d, ", a[i]);
    }
    printf("\n");
    int c = isort(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
        a[i] = rand() % 100;
    }
}
void init(int *a, int *b, int *c, int *d, int n)
{
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
        b[i] = a[i];
        c[i] = a[i];
        d[i] = a[i];
        // printf("%d, ", a[i]);
    }
}
void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
}
void dsort(int *a, int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (a[i] < a[j])
            {
                int z = a[i];
                a[i] = a[j];
                a[j] = z;
            }
        }
    }
}
int menu()
{
    int n, x = 1, c;
    printf("Enter n: ");
    scanf("%d", &n);
    int a[n], b[n], c[n], d[n];
    while (x != 0)
    {
        printf("Enter Choice: 0 Quit, 1 Initialize, 2 display, 3 ASC Sort, 4 DES Sort, 5 T(n) random nos sort, 6 T(n) for already sorted,7 T(n) for already des sort, 8 Tabular Form\n");
        scanf("%d", &x);
        switch (x)
        {
        case 0:
            return;
        case 1:
            init(a, b, c, d, n);
            break;
        case 2:
            display(a, n);
            break;
        case 3:
            isort(a, n);
            break;
        case 4:
            dsort(a, n);
            break;
        case 5:
            c = isort(b, n);
            printf("T(n) for random sort= %d\n", c);
            break;
        case 6:
            isort(c, n);
            c = isort(c, n);
            printf("T(n) for already sorted= %d\n", c);
            break;
        case 7:
            dsort(d, n);
            c = isort(d, n);
            printf("T(n) for des sorted= %d\n", c);
            break;
        case 8:
            break;
        }
    }
}
