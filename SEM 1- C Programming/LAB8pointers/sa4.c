#include <stdio.h>
void swap(int *, int *);
int main()
{
    int a, b;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nValues before swapping %d and %d", a, b);
    swap(&a, &b);
    printf("\nValues after swapping %d and %d", a, b);
    return 0;
}
void swap(int *x, int *y)
{
    int t;
    t = *y;
    *y = *x;
    *x = t;
}