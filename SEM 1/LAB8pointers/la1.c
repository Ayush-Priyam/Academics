#include <stdio.h>
void add(int*, int*);
int main()
{
    int a, b;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);
    add(&a, &b);
    return 0;
}
void add(int* x, int* y)
{
    printf("Sum= %d", *x + *y);
}