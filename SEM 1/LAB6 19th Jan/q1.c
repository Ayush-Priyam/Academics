#include <stdio.h>
int sum(int, int);
int main()
{
    int a, b;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nSum= %d.", sum(a,b));
    return 0;
}
int sum(int x, int y)
{
    return x+y;
}