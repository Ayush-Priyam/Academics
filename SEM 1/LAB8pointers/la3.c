#include <stdio.h>
int main()
{
    int n, arr[100], *p;
    printf("\nEnter the size :");
    scanf("%d", &n);
    p = &arr[n-1];
    printf("\nEnter elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe elements the array in reverse are:");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", *(p - i));
    }
    return 0;
}