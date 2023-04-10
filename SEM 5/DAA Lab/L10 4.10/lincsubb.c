#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void LCS_LEN(int *X, int *Y, int m, int n, int c[m + 1][n + 1], int b[m][n])
{
    // 0 for corner, 1 for up, 2 for left
    // printf("IN FUNC %s, %s, %d, %d\n", X, Y, m, n);
    //  for (int i = 1; i < m; i++)
    //  {
    //      for(int j=0; j<n;j++)
    //      {
    //          c[i][j]= 5;
    //      }
    //  }
    for (int i = 0; i < m + 1; i++)
    {
        c[i][0] = 0;
    }
    for (int j = 0; j < n + 1; j++)
    {
        c[0][j] = 0;
    }
    int ln = X[0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (X[i] + 1 == Y[j] && ln + 1 == X[i])
            {
                c[i + 1][j + 1] = 1 + c[i][j];
                b[i][j] = 0;
            }
            else if (c[i][j + 1] >= c[i + 1][j])
            {
                c[i + 1][j + 1] = c[i][j + 1];
                b[i][j] = 1;
            }
            else
            {
                c[i + 1][j + 1] = c[i + 1][j];
                b[i][j] = 2;
            }
        }
    }
    printf("\nC:\n");
    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
char LCS(int *X, int i, int j, int m, int n, int b[m][n])
{ // 0 for corner, 1 for up, 2 for left

    // for (int f = 0; f<m; f++)
    // {
    //     for (int g = 0; g < n; g++)
    //     {
    //         printf("%d", b[f][g]);
    //     }
    //      printf("\n");
    // }
    // abaprintf("i:%d, j:%d, b[i][j]: %d\n", i, j, b[i-1][j-1]);
    if (i == 0 || j == 0)
        return ' ';
    printf("i:%d, j:%d, b[i][j]: %d\n", i, j, b[i - 1][j - 1]);
    if (b[i - 1][j - 1] == 0)
    {
        LCS(X, i - 1, j - 1, m, n, b);
        printf("%d ", X[i - 1]);
    }
    else if (b[i - 1][j - 1] == 1)
    {
        LCS(X, i - 1, j, m, n, b);
    }
    else
    {
        LCS(X, i, j - 1, m, n, b);
    }
}

int main()
{
    // int X[10] = {3, 4, 5, 9, 6};
    // int Y[10] = {3, 4, 5, 9, 6,7};
    // 3 4 5 9 6
    int m;
    scanf("%d", &m);
    int n = m;
    int X[m], Y[n];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &X[i]);
        Y[i] = X[i];
    }
    //Y[n - 1] = X[m - 1] + 1;
    // printf("%s, %s, %d, %d", X, Y, m, n);
    int c[m + 1][n + 1];
    int b[m][n];
    LCS_LEN(X, Y, m, n, c, b);
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("%d", c[i][j]);
    //     }
    //      printf("\n");
    // }
    LCS(X, m, n, m, n, b);
}