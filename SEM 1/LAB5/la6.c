#include <stdio.h>
int main()
{
    int a[50], n;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("\nEnter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nThe elements in reverse are: ");
    for (int i= n-1; i>=0; i--)
        printf("%d, ", a[i]);
    return 0;
}