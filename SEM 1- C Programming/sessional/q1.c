#include <stdio.h>
int main()
{
    int a[11], p, i, n=10,b ;
    printf("Enter 10 elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the location to insert an element: ");
    scanf("%d", &p);
    printf("Enter the value to insert: ");
    scanf("%d", &b);
    for (i = n - 1; i >= p - 1; i--) a[i + 1] = a[i];
    a[p - 1] = b;
    printf("Modified array is: \n");
    for (i = 0; i <= n; i++)
        printf("%d, ", a[i]);
    return 0;
}