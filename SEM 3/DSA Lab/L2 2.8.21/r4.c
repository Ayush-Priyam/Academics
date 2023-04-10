//p17
#include <stdio.h>
#include <stdlib.h>
void print(int **);
int r, c;
int main()
{
    int x;
    printf("Enter the no. of rows and columns: ");
    scanf("%d %d", &r, &c);
    int **a = calloc(r, sizeof(int *));
    for (int i = 0; i < c; i++)
    {
        a[i] = calloc(c, sizeof(int));
    }
    printf("Enter the elements of array: ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            x = a[i][j];
            a[i][j] = a[i][c - j - 1];
            a[i][j] = x;
        }
    }
    print(a);
}
void print(int **b)
{
    printf("Modified Array:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}