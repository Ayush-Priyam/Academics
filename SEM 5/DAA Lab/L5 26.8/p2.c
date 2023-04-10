#include <stdio.h>
#include <stdlib.h>
void init(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }
}
void merge(int *a, int p, int q, int r)
{
    int i=p, j=q+1, k=0;
    int ta[r-p+1];
    while(i<=q && j<=r)
    {
        if(a[i]<=a[j])
        {
            ta[k++]= a[i];
            i++;
        }
        else{
            ta[k++] = a[j];
            j++;
        }
        while(i<=q)
        {
            ta[k++] = a[i];
            i++;
        }
        while(j<=r)
        {
            ta[k++] = a[j];
            j++;
        }
    }
    if(r-p+1==10)
    {
        for(int i=0; i<=r; i++)
        {
            printf("%d, ", ta[i]);
        }
    }
}
void ms(int a[], int p, int r)
{
    if(p<r)
    {
        int q=(p+r)/2;
        ms(a,p, q);
        ms(a, q+1, r);
        merge(a,p, q, r);
    }
}
int main()
{
    int n=10;
    int a[n];
    int ta[n];
    init(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("\n");
    ms(a, 0, n-1);
    // for(int i=0; i<n; i++)
    // {
    //     printf("%d, ", ta[i]);
    // }
}