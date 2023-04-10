#include <stdio.h>
void swap(int *, int *, int*);
int main()
{
    int a, b, c;
    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("\nValues before swapping %d, %d, %d", a, b, c);
    swap(&a, &b, &c);
    printf("\nValues after swapping %d, %d, %d", a, b, c);
    return 0;
}
void swap(int *x, int *y, int *z)
{
    int t;
    t = *y;
    *y = *x;
    *x = *z;
    *z = t;
}