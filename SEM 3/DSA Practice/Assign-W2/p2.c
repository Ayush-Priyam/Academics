#include <stdio.h>
#include <stdlib.h>
int* create(int n)
{
    int *a = calloc(n, sizeof(int));
    printf("Input Elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    return a;
}
void display(int *a, int n)
{
    printf("Elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int n;
    printf("Enter the no. of elements: ");
    scanf("%d", &n);
    int *a = create(n);
    display(a,n);
}
