#include <stdio.h>
int main()
{
    int a[100], n, s = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter numbers: ");
    for (int i= 0; i < n; i++) scanf("%d", &a[i]);
    for (int i= 0; i<n; i++)s= s+a[i];
    printf("\nThe sum of the elements= %d", s);
    return 0;
}