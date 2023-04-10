#include <stdio.h>
int main()
{
    int n, arr[100], *p, sum=0;
    printf("\nEnter the size :");
    scanf("%d", &n);
    p = &arr[0];
    printf("\nEnter elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", p + i);
        sum= sum + *(p+i);
    }
        printf("Sum of elements =%d ", *&sum);
    return 0;
}