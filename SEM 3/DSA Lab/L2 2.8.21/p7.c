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
    int **a = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        a[i] = malloc(n * sizeof(int));
    }
    printf("Enter the elements of array");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    nonzero(a);
    sum(a);
    print(a);
    product(a);
}
void nonzero(int **b)
{
    int c=0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (b[i][j]!= 0)
                c++;
        }
    }
    printf("No. of non zero elements= %d\n\n", c);
}
void sum(int **b)
{
    int s=0;
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            s=s+ b[i][j];
        }
    }
    printf("Sum of the elements above leading diagonal= %d\n\n", s);
}
void print(int **b)
{
    printf("Elements below minor diagonal: \n");
    for (int i=1; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (j< n-i)
                printf("  ");
            else 
                printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void product(int **b)
{
    int p=1;
    for (int i=0; i<n; i++)
    {
        p= p*b[i][i];
    }
    printf("Diagonal Product= %d\n\n", p);
}