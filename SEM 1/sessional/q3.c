#include <stdio.h>
int gcd(int, int);
int main()
{
    int a, b;
    printf("\nEnter two numbers to find the GCD: ");
    scanf("%d %d", &a, &b);
    printf("\nThe GCD of %d and %d = %d\n\n", a, b, gcd(a,b));
    return 0;
}
int gcd(int x, int y)
{
    if (x == y)
        return x;
    else if (x > y)
        gcd(x - y, y);
    else
        gcd(x, y - x);
}