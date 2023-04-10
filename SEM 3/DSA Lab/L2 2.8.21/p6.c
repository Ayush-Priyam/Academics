#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *a = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0;i<n; i++)
    {
        int f=0;
        for(j=i+1; j<n-1; j++)
        {
            if (a[j]> a[i])
            {
                f=1;
                printf("%d, ", a[j]);
                break;
            }
        }
        if(f==0) printf("-1, ");
    }
}