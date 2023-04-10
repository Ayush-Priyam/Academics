#include <stdio.h>
#include <stdlib.h>
void sum(int n, int arr[n][n])
{
    int i, j, s = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > j)
                printf("  ");
            else
                printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        s += arr[i][i];
    }
    printf("Sum of elts above leading diagonal :  %d\n", s);
}

void display(int n, int arr[n][n])
{
    printf("Elements below minor diagonal: \n");
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < n - i)
                printf("  ");
            else
                printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void product(int n, int arr[n][n])
{
    int p = 1;
    for (int i = 0; i < n; i++)
        p *= arr[i][i];
    printf("Product of diagonal : %d\n", p);
}

void nonzero(int n, int arr[n][n])
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != 0)
                c++;
        }
    }
    printf("Total non zero elts : %d\n", c);
}

int main()
{
    int i, j, n;
    printf("No. of rows : ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter the elts : ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", a[i][j]);
    }
    printf("Initial Array : ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n");
    nonzero(n, a);
    sum(n, a);
    display(n, a);
    product(n, a);
}