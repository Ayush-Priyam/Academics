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
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n - 1; j++)
        {
            if (a[i]%2!=0&&a[j]%2==0)
            {
                int x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
}