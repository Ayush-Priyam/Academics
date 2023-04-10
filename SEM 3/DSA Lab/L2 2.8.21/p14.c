#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, k, x;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *a= (int *)calloc(n, sizeof(int));
    printf("Enter the numbers: ");
    for (int i=0; i< n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter k to find kth largest and kth smallest element: ");
    scanf("%d", &k);
    for (int i= 0; i< n; ++i)
    {
        for (int j=i+1; j< n; ++j)
        {
            if (a[i]> a[j])
            {
                x= a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
    printf("%dth smallest element is %d and %dth largest element is %d ", k, a[k - 1], k, a[n - k]);
}