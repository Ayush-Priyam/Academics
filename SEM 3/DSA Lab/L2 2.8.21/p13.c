#include <stdio.h>
#include <stdlib.h>
void print(int **);
int m, n;
int main()
{
    int x;
    printf("Enter the no. of rows and columns: ");
    scanf("%d %d", &m, &n);
    int **a = calloc(m , sizeof(int *));
    printf("Enter the elements of array:\n");
    for (int i = 0; i < m; i++)
    {
        a[i] = calloc(n , sizeof(int));
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[i][j] > a[i][k])
                {
                    x = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = x;
                }
            }
        }
    }
    printf("Array after sorting row in ascending order: \n");
    print(a);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = j + 1; k < m; k++)
            {
                if (a[j][i] < a[k][i])
                {
                    x = a[j][i];
                    a[j][i] = a[k][i];
                    a[k][i] = x;
                }
            }
        }
    }
    printf("Array after sorting columns in descending order: \n");
    print(a);
}
void print(int **b)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}