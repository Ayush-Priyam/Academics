#include <stdio.h>
//void f(int *, int);

int main()
{
    int i, j, r, c, s = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int a[r][c];
    printf("Enter the elements of the matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            s = s + a[i][j];
        }
    }
    printf("\nThe sum of the elements= %d", s);
    f(*a, r * c);
    return 0;
}

void f(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", (*p + i));
    }
}