#include <stdio.h>
#include <stdlib.h>
int t1 = 0, t2 = 0;
long int pow(long int a, int n)
{
    if (a == 0)
        return a;
    if (n == 0)
    {
        t1++;
        return 1;
    }
    else if (n % 2 == 1)
    {
        t1++;
        return a * pow(a * a, n / 2);
    }
    else
    {
        t1++;
        return pow(a * a, n / 2);
    }
}
long int poww(int a, int n)
{
    long int s = 1;
    // if(a==1 || a==0) return a;
    for (int i = 1; i <= n; i++)
    {
        t2++;
        s = s * a;
    }
    return a;
}
int main()
{
    printf("Power\tDNC\tBrute Force\n");
    for (int i = 50; i <= 500; i += 50)
    {
        t1 = 0;
        t2 = 0;
        int s = pow(1, i);
        poww(1, i);
        printf("%ld\t%d\t%d\n", i, t1, t2);
    }
}