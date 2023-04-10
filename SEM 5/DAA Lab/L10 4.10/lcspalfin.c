#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void lcsLen(char X[], char Y[], int m, int n, int c[m + 1][n + 1], int b[m][n])
{
    int i, j;
    for (i = 0; i < m + 1; i++)
        c[i][0] = 0;

    for (j = 0; j < n + 1; j++)
        c[0][j] = 0;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (X[i] == Y[j]) // If 2 string's ith & jth element are equal
            {
                c[i + 1][j + 1] = 1 + c[i][j]; // c[i][j] is the diagonal up elt
                b[i][j] = 0;                   // 0 for corner
            }
            else if (c[i][j + 1] >= c[i + 1][j]) // up more than left
            {
                c[i + 1][j + 1] = c[i][j + 1];
                b[i][j] = 1; // 1 for up
            }
            else // left more than up
            {
                c[i + 1][j + 1] = c[i + 1][j];
                b[i][j] = 2; // 2 for left
            }
        }
    }
}
char lcs(char X[], int i, int j, int m, int n, int b[m][n])
{
    if (i == 0 || j == 0)
        return ' ';

    //  printf("b[%d][%d]: %d\n", i, j, b[i - 1][j - 1]);

    if (b[i - 1][j - 1] == 0) // if corner
    {
        lcs(X, i - 1, j - 1, m, n, b);
        printf("%c", X[i - 1]);
    }
    else if (b[i - 1][j - 1] == 1) // if up
    {
        lcs(X, i - 1, j, m, n, b);
    }
    else // if left
    {
        lcs(X, i, j - 1, m, n, b);
    }
}

int main()
{
    char X[50], Y[50];
    int m;
    // printf("Enter the string leng ");
    // scanf("%d", &m);
    printf("Enter string : \n");
    gets(X);
    int j = 0;
    m = strlen(X);
    strcpy(Y,X);
    strrev(X);
    // for (int i = m - 1; i >= 0; i--)
    // {
    //     // scanf("%c", &X[i]);
    //     Y[j] = X[i];
    //     j++;
    // }
    // for (int i = 0; i < m-1; i++)
    // {
    //     printf("%c", Y[i]);
    // }
    int n = strlen(Y);
    int c[m + 1][n + 1];
    int b[m][n];
    lcsLen(X, Y, m, n, c, b);
    printf("LCS is: ");
    lcs(X, m, n, m, n, b);
}