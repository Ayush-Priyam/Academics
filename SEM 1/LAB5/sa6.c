#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. of rows of the square matrices : ");
    scanf("%d", &n);
    int a[n][n], b[n][n], c[n][n];
    printf("Enter the elements of first matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("The multiplication of both matrices:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("%d  ", c[i][j]);
        }
        printf("\n");
    }
}