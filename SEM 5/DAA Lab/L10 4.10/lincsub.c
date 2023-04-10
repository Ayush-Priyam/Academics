#include <stdio.h>
#include <string.h>
int i, j, m=7, n=7, c[20][20];
int X[7]={7, 3, 4, 5, 8, 19, 20};
int Y[7] = {7, 3, 4, 5, 8, 19, 20};
int b[20][20];
void print_lcs(int i, int j)
{
    if (i == 0 || j == 0)
        return;
    if (b[i][j] == 'c')
    {
        print_lcs(i - 1, j - 1);
        printf("%d", X[i - 1]);
    }
    else if (b[i][j] == 'u')
        print_lcs(i - 1, j);
    else
        print_lcs(i, j - 1);
}
void lcs_length()
{
    for (i = 0; i <= n; i++)
        c[i][0] = 0;
    for (j = 0; j <= n; j++)
        c[0][j] = 0;
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (X[i - 1]+1== Y[j - 1])
            { 
                c[i][j] = 1 + c[i - 1][j - 1];
                b[i][j] = 'c';
            }
            else if (c[i - 1][j] >= c[i][j - 1])
            {
                c[i][j] = c[i - 1][j];
                b[i][j] = 'u';
            }
            else
            {
                c[i][j] = c[i][j - 1];
                b[i][j] = 'l';
            }
        }
    }
    printf("\n");
}
int main()
{
    // printf("enter 1st seq");
    // scanf("%s", X);
    // printf("enter 2nd seq");
    // scanf("%s", Y);
    // printf("\nlcs is: ");
    lcs_length();
    print_lcs(m, n);
}
