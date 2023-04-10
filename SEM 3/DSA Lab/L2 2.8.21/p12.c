#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *a = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int *b = (int *)calloc(n, sizeof(int));
    b[0]=a[0];
    b[n-1]=a[n-1];
    for (i = 1; i < n-1; i++)
    {
        b[i] = a[i-1]*a[i+1];
    }

    for (i = 0; i < n; i++)
    {
        printf("%d, ", b[i]);
    }
}