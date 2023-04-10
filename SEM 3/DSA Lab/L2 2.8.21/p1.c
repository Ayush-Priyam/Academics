#include <stdio.h>
int main()
{
    int i, n, l, u;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(i==0)
        {
            l = a[0]; 
            u = a[0];
        }
        if(i>0)
        {
            if (l > a[i])
                l = a[i];
            if (u < a[i])
                u = a[i];
        }
    }
    printf("\nLargest= %d \nSmallest= %d", u, l);
}