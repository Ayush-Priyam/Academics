#include <stdio.h>
#include <stdlib.h>
int *fun(int n)
{
    int *a = malloc(n* sizeof(int));
    printf("Enter numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    return a;
}
int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int *a = fun(n);
    printf("Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
