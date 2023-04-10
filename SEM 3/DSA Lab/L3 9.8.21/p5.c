#include <stdio.h>
int main()
{
    int m,n1,n2,n,k;
    printf("Enter the order mxn: ");
    scanf("%d%d", &m, &n1);
    printf("Enter the order nxk: ");
    scanf("%d%d", &n2, &k);
    if(n1!=n2)
    {
        printf("Cant multiply");
        return 0;
    }
    n=n1;
    int a[m][n], b[n][k], c[m][k];
    printf("Enter the elements of first matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("The multiplication of both matrices:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
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