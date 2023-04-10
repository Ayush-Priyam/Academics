#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n,s;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *a = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter Search Element: ");
    scanf("%d", &s);
    for (i =0; i<n; i++)
    {
        if (a[i]== s)
        {
            printf("Found at position [%d]",i+1);
            return 0;
        }
    }
    printf("Not Found");
}