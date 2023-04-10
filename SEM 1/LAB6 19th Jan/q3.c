#include <stdio.h>
double mul(int, double);
int main()
{
    int a; double b;
    printf("\nEnter two numbers: ");
    scanf("%d %lf", &a, &b);
    printf("\nMultiplication= %lf", mul(a, b));
    return 0;
}
double mul(int x, double y)
{
    return x*y;
}