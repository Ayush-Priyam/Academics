#include <stdio.h>
#include <string.h>
int i, j, m, n, c[20][20];
char X[10], Y[20], b[20][20];
void print_lcs(int i, int j)
{
    if (i == 0 || j == 0)
        return;
    if (b[i][j] == 'c')
    {
        print_lcs(i - 1, j - 1);
        printf("%c", X[i - 1]);
    }
    else if (b[i][j] == 'u')
        print_lcs(i - 1, j);
    else
        print_lcs(i, j - 1);
}
void lcs_length()
{
    m = strlen(X);
    n = strlen(Y);
    for (i = 0; i <= n; i++)
        c[i][0] = 0;
    for (j = 0; j <= n; j++)
        c[0][j] = 0;
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (X[i - 1] == Y[j - 1])
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
    scanf("%s", X);
    //scanf("%s", Y);
    strcpy(Y,strrev(X));
    printf("%s\n", X);
    //m = strlen(X);
    // for (int i = 0; i <m; i++)
    // {
    //     printf("%c ", Y[i]);
    // }
    // int j=0;
    // for (int i = m - 1; i >= 0; i--)
    // {
    //     // scanf("%c", &X[i]);
    //     Y[j] = X[i];
    //     j++;
    // }
    // Y[j]='\0';
    // printf("\n\n%d %s", m, Y);
    //m=strlen(Y);
    //n=m;
    //printf("\n\n%d ",m);
    printf("LCS is: ");
    lcs_length();
    print_lcs(m, n);

}
// BBABCBCAB
