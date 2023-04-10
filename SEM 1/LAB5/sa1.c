#include <stdio.h>
int main()
{
    int a[50], n;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("\nEnter elements: ");
    for (int i=0; i<n; i++) scanf("%d", &a[i]);
    printf("\nThe elements are: ");
    for (int i=0; i<n; i++)
    printf("%d, ", a[i]);
    return 0;
}