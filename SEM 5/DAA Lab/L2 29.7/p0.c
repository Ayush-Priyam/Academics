#include <stdio.h>
int prm(int n)
{
    int i;
    for(i=2; i<=n/2;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    //Prime Factors
    int n;
    n = 794609;
    for(int i=2; i<=n; i++)
    {
        if(n%i==0 && prm(i)==1)
        {
            printf("%d, ", i);
        }
    }
}