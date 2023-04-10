#include <stdio.h>
#include <stdlib.h>
int n;
void nonzero(int **);
void sum(int **);
void print(int **);
void product(int **);
int main()
{
    printf("Enter the no of rows of a sqare matrix\n");
    scanf("%d", &n);
    int *a = malloc((n * n) * sizeof(int));
    int **b = malloc(n * sizeof(int *));
    printf("Enter the elements of array");
    for (int i = 0; i < n * n; i++)
    {
        //scana[i]
    }
    nonzero(b);
    sum(b);
    print(b);
    product(b);
}
void nonzero(int **b)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i][j] != 0)
                c++;
        }
    }
    printf("No. of non zero elements= %d\n", c);
}
void sum(int **b)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            s = s + b[i][j];
        }
    }
    printf("Sum of the elements above leading diagonal= %d\n", s);
}
void print(int **b)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < n - i)
                printf("  ");
            else
                printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}
void product(int **b)
{
    int p = 1;
    for (int i = 0; i < n; i++)
    {
        p = p * b[i][i];
    }
    printf("Diagonal Product= %d\n", p);
}