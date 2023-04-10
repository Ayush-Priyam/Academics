#include <stdio.h>
#include <stdlib.h>
int rbs(int* a, int l, int u, int s)
{
    int m;
    if (u >= l)
    {
        m = (l + u)/ 2;
        if (a[m] == s)
            return 1;
        if (a[m] > s)
            return rbs(a, l, m - 1, s);
        return rbs(a, m + 1, u, s);
    }
    return 0;
}
int bs(int* a, int l, int u, int s)
{
    int m;
    while (u>=l)
    {
        m= (l+u)/2;
        if (a[m] == s)
            return 1;
        if (a[m] > s)
            u = m - 1;
        else
            l = m + 1;
    }
    return 0;
}
int main()
{
    int n,s;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *a = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &s);
    if (rbs(a, 0, n - 1, s) == 1 && bs(a, 0, n - 1, s) == 1)
        printf("Element found");
    else
        printf("Element not found");
}