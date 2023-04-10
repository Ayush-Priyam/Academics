#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *a= (int *) calloc(n, sizeof(int));
    for (i = n-1; i >=0 ; i--)
    {
        scanf("%d", &a[i]);
    }
    printf("\nReversed array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
}
