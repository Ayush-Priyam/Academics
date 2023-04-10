#include <stdio.h>
int swap1(int, int);
void swap2(int, int);
int main()
{
    int a, b;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nSwapped numbers= %d, %d", swap1(a, b), swap1(b, a));
    swap2(a,b);
    return 0;
}
int swap1(int x, int y)
{
    return y;
}
void swap2(int x, int y)
{
    printf("\nSwapped numbers= %d, %d", y,x);
}