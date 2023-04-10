#include <stdio.h>
#include <stdlib.h>
int ***a;
int b, r, c;
void create()
{
    printf("Enter the dimensions of the 3D array: ");
    scanf("%d%d%d", &b, &r, &c);
    a = (int ***)calloc(b, sizeof(int **));
    for (int i = 0; i < b; i++)
    {
        a[i] = (int **)malloc(r* sizeof(int *));
        for (int j = 0; j < r; j++)
        {
            a[i][j] = (int *)malloc(c* sizeof(int));
            for (int k = 0; k < c; k++)
            {
                a[i][j][k] = rand() % 100;
            }
        }
    }
}
void display()
{
    for (int i = 0; i < b; i++)
    {
        printf("Block %d:\n", i);
        for (int j = 0; j < r; j++)
        {
            for (int k = 0; k < c; k++)
            {
                printf("%d\t", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
int main()
{
    create();
    display();
}