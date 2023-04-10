#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, n,l,u,ss,sl;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *a = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (i == 0)
        {
            l=u=ss=sl= a[0];
        }
        if (i > 0)
        {
            if (l > a[i])
                l = a[i];
            if (u < a[i])
                u = a[i];
        }
    }
    ss=99999;
    for (i = 0; i < n; i++)
    {
        if (sl < a[i] && a[i]<u)
            sl=a[i];
        if (ss > a[i] && a[i] >l)
            ss=a[i];
    }
    printf("\nSecond Largest= %d \nSecond Smallest= %d", sl, ss);
}