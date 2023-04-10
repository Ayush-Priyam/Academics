#include <stdio.h>
#include <math.h>
void funxn(int n, double mat[n][n])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            mat[i][j] = round(mat[i][j]);
    }
}

int main()
{
    int i, j, n, val;

    printf("enter order of mat : \n");
    scanf("%d", &n);
    double mat[n][n];
    printf("Enter values in mat \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            // printf("Enter element a[%d,%d]: ", i + 1, j + 1);
            scanf("%lf", &mat[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%.0lf\t", mat[i][j]);
        }
        printf("\n");
    }
}