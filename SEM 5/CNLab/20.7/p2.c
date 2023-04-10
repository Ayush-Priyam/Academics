#include <stdio.h>
long long int fact(int n);
int main()
{
    int n;
    printf("Enter no: ");
    scanf("%d", &n);
    printf("\nFactorial of %d = %lld", n, fact(n));
    return 0;
}

long long int fact(int n)
{
    printf("%d, ", n);
    if (n > 1)
        return (n * fact(n - 1));
    else
        return (long long int)1;
}
