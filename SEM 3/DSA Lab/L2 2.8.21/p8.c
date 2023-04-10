#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j,u,l ,n,c=0,x=99999;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *a = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter upper and lower limit elements: ");
    scanf("%d %d", &u, &l);

    for (i = 0;i<n; i++)
    {
        j=i; c=0;
        if (a[i] == l)
        {
            while (a[j] != u && j < n)
            {
                c++;
                j++;
            }
        }
        if(c<x&&c!=0) x=c;
    }
    printf("%d", x);
}