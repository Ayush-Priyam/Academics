#include <stdio.h>
int main()
{
    int n, arr[100], *p;
    printf("\nEnter the size :");
    scanf("%d", &n);
    p=&arr[0];
    printf("\nEnter elements:");
    for (int i=0; i<n; i++)
    {
        scanf("%d", p + i);
    }
    printf("\nThe elements the array are:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
    return 0;
}