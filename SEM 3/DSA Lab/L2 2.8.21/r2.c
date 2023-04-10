#include <stdio.h>
#include <stdlib.h>
void setmatrix(int n, int (*a)[n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 10;
        }
    }
}
void printmatrix(int n, int (*a)[n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void findnonzero(int n, int (*a)[n])
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
                c++;
        }
    }
    printf("No. of non zero elements= %d\n", c);
}
void findsum1(int n, int (*a)[n])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum = sum + a[i][j];
        }
    }
    printf("Sum of the elements above leading diagonal is %d\n", sum);
}
void display(int n, int (*a)[n])
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= n - i)
                printf("%d ", a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
}
void findproduct(int n, int (*a)[n])
{
    int pro = 1;
    for (int i = 0; i < n; i++)
    {
        pro = pro * a[i][i];
    }
    printf("Poduct of diagonals=%d\n", pro);
}
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    int a[n][n];
    setmatrix(n, a);
    printmatrix(n, a);
    findnonzero(n, a);
    findsum1(n, a);
    display(n, a);
    findproduct(n, a);
}