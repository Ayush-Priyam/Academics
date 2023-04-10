#include <stdio.h>
int main()
{
    int i, j, r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int a[r][c];
    int t[c][r];
    printf("Enter the elements of the matrix: \n");
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            scanf("%d", &a[i][j]);
            t[j][i]=a[i][j];
        }
    }
    printf("Transpose matrix: \n");
    for (i=0; i<c; i++)
    {
        for (j=0; j<r; j++)
        {
            printf("%d  ", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}