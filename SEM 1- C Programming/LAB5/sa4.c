#include <stdio.h>
int main()
{
    int a[100], n, l, t;
    printf("\nEnter size: ");
    scanf("%d", &n);
    printf("\nEnter numbers: ");
    for (int i = 0; i < n; i++) 
        scanf("%d", &a[i]);
    for (int i=1; i<=n-1; i++)
    {
        for (int j= 0; j<n-i; j++)
        {
            if (a[j]> a[j+1])
            {
                t= a[j];
                a[j]= a[j+1];
                a[j+1]= t;
            }
        }
    }
    printf("\nThe elements in ascending order are: ");
    for (int i = 0; i < n; i++)
        printf("%d, ", a[i]);
    return 0;
}