#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, n, u, l;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *a = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter upper and lower limit elements: ");
    scanf("%d %d",&u, &l);
    for (i = 0; i < n; i++)
    {
        if (a[i] == l)
        {
            while (a[i] != u && i < n)
            {
                printf("%d, ", a[i]);
                i++;
            }
            printf("%d", a[i]);
            return 0;
        }
    }
}
