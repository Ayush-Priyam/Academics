#include <stdio.h>
#include <stdlib.h>
int ***create(int l, int r, int c)
{
    int ***a = calloc(l, sizeof(int **));
    for (int i = 0; i < l; i++)
    {
        a[i] = (int **)calloc(r, sizeof(int *));
        for (int j = 0; j < r; j++)
        {
            a[i][j] = (int *)calloc(c, sizeof(int));
            for (int k = 0; k < c; k++)
            {
                a[i][j][k] = rand() % 10;
            }
        }
    }
    return a;
}
void display(int ***a, int l, int r, int c)
{
    for (int i = 0; i < l; i++)
    {
        printf("Layer %d:\n", i);
        for (int j = 0; j < r; j++)
        {
            for (int k = 0; k < c; k++)
            {
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
int main()
{
    int l, r, c;
    printf("Enter the dimensions of the 3D array: ");
    scanf("%d%d%d", &l, &r, &c);
    int ***a = create(l, r, c);
    display(a, l, r, c);
}