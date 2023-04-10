#include <stdio.h>
//double foo(double);
int main()
{
    double da;
    scanf("%lf",&da);
    double db;
    db=foo(da);
    printf("%lf", db);
}
double foo(double a)
{
    return a;
}