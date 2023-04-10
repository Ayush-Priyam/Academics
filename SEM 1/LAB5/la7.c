#include <stdio.h>
int main()
{
    int i, j, r, c, s=0;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int a[r][c];
    printf("Enter the elements of the matrix\n");
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            scanf("%d", &a[i][j]);
            s = s+a[i][j];
        }
    }
    printf("\nThe sum of the elements= %d", s);
    return 0;
}