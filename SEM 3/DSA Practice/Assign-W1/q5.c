//Pass the 3rd row of a two dimensional array to a function.
#include <stdio.h>
int r,c;
int print(int (*)[c]);
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
    print(a+3);
    return 0;
}
int print(int (*b)[c])
{
    printf("Third Row: ");
    for (int i = 0; i < c; i++)
    {
        printf("%d, ",b[0][i]);
    }
}