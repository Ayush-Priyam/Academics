#include <stdio.h>
int main()
{
    int a[100], n, l;
    printf("\nEnter size: ");
    scanf("%d", &n);
    printf("\nEnter numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (i == 0)
            l = a[0];
        if (a[i] > l)
            l = a[i];
    }
    printf("\nThe largest number= %d", l);
    return 0;
}