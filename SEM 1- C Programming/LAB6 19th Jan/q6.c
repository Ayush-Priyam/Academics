#include <stdio.h>
int swap(int, int);
int main()
{
    int a, b;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nSwapped numbers= %d, %d", swap(a, b), swap(b,a));
    return 0;
}
int swap(int x, int y)
{
    return y;
}