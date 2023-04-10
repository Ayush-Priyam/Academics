#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int p0 = 0, p1 = n - 1;
    int *a = (int *)calloc(n, sizeof(int));
    int *b = (int *)calloc(n, sizeof(int));
    printf("Enter numbers: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i]%2 == 0)
        {
            b[p0] = a[i];
            p0 = p0 + 1;
        }
        else if(a[i]%2 == 1)
        {
            b[p1] = a[i];
            p1 = p1 - 1;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d, ", b[i]);
    }
}