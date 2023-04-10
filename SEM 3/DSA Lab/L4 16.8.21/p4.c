#include <stdio.h>
int gcd(int a, int b)
{
    if (b != 0)
        return gcd(b, a % b);
    else
        return a;
}
int main()
{
    int a, b, g;
    printf("Enter two nos: ");
    scanf("%d%d", &a,&b);
    for (int i = 1; i <= a && i <=b; ++i)
    {
        if (a % i == 0 && b % i == 0)
            g = i;
    }
    printf("GCD of %d and %d = %d, %d", a, b, gcd(a, b), g);
    return 0;
}
