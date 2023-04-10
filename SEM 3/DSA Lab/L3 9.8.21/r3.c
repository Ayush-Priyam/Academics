#include <stdio.h>
int main()
{
    int n, i, j, k;
    printf("Enter Odd number: ");
    scanf("%d", &n);
    int a[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] = 0;
        }
    }
    k = 1;
    i = n - 1;
    j = n / 2;
    while (k < n * n + 1)
    {
        if ((j == -1) && (i == n))
        {
            i = n - 2;
            j = 0;
        }
        else
        {
            if (i == n)
            {
                i = 0;
            }
            if (j < 0)
            {
                j = n - 1;
            }
        }
        if (a[i][j])
        {
            i = i - 2;
            j++;
        }
        a[i][j] = k++;
        i++;
        j--;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}