#include <stdio.h>
void sieve(int n)
{
    int x;
    int a[n];
    for(int i=0; i<n;i++)
    {
        a[i]=i+1;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i])
            printf("%d, ", a[i]);
    }
    printf("\n\n");
    for(int i=2; i*i<n; i++)
    {
        for(int j=i*2; j<n; j=j+i)
        if(a[j-1]%i==0)
        {
            a[j-1]=0;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]) printf("%d, ", a[i]);
    }
}
int main()
{
    sieve(100);
}