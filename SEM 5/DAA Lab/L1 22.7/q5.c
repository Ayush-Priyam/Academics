/*5 Let A be n*n square matrix array. 
WAP by using appropriate user defined functions for the following:
a) Find the number of nonzero elements in A
b) Find the sum of the elements above the leading diagonal.
c) Display the elements below the minor diagonal.
d) Find the product of the diagonal elements.*/
#include <stdio.h>
#include <stdlib.h>
int n;
void nonzero(int b[n][n])
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
void sum(int b[n][n])
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
void print(int b[n][n])
{
    printf("Elements below minor diagonal: \n");
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
    printf("\n");
}
void product(int b[n][n])
{
    int p = 1;
    for (int i = 0; i < n; i++)
    {
        p = p * b[i][i];
    }
    printf("Diagonal Product= %d\n", p);
}
void init(int n, int a[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 10;
        }
    }
    printf("array: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    printf("Enter the no of rows of a square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    init(n, a);
    printf("\n");
    nonzero(a);
    sum(a);
    print(a);
    product(a);
}



