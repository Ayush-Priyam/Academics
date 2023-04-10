#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r, c, x;
    printf("Enter the no of rows and colums: ");
    scanf("%d %d", &r, &c);
    int **b = malloc(r * sizeof(int *));
    for (int i = 0; i < c; i++)
    {
        b[i] = malloc(c * sizeof(int));
    }
    printf("Enter the elements: ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            x = b[i][j];
            b[i][j] = b[i][c-j-1];
            printf("%d  ", b[i][j]);
            b[i][j] = x;
        }
        printf("\n");
    }
}