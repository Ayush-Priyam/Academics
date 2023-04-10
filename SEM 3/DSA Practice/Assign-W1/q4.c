//Pass a two dimensional array to a function and display the whole array.
#include <stdio.h>
int r,c;
void print(int (*)[r][c]);
int main()
{
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int a[r][c];
    printf("Enter the elements of the matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    print(&a);
    return 0;
}
void print(int (*b)[r][c])
{
    printf("Matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ", b[0][i][j]);
        }
        printf("\n");
    }
}