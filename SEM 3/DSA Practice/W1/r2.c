#include <stdio.h>
int fun(int n, int *b, int sr);
int main()
{
    int arr[50][50], i, j, f, nr, nc, n, sr;
    printf("Enter the Number of rows and columns: \n");
    scanf("%d %d", &nr, &nc);
    printf("Enter the Array Elements: \n");
    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < nc; j++)
            scanf("%d", &arr[i][j]);
    }
    n = nc * nr;
    printf("\n Enter the Element To Search: ");
    scanf("%d", &sr);
    f = fun(50*50 -1, *arr, sr);
    if (f == 1)
        printf("\nElement %d Found in the 2D Array", sr);
    else
        printf("\n Not Found");
}
int fun(int n, int *b, int sr)
{
    if ((*(b + n)) == sr)
        return 1;
    else if (n == 0)
        return 0;
    else
        return fun(n - 1, b, sr);
}