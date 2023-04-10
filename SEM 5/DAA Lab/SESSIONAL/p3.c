#include <stdio.h>
#include <stdlib.h>
void maxheapify(int a[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && a[l] > a[largest])
        largest = l;
    if (r < n && a[r] > a[largest])
        largest = r;

    if (largest != i)
    {
        char x = a[i];
        a[i] = a[largest];
        a[largest] = x;
        maxheapify(a, n, largest);
    }
}
void maxheap(int a[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        maxheapify(a, n, i);
    }
}
void disp(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%c ", a[i]);
    printf("\n");
}

int main()
{
    int a[5]={'a', 'y', 'u', 's', 'h'};
    int n= 5;
    printf("BEFORE max heapifying: ");
    disp(a,n);
    maxheap(a, n);
    printf("AFTER max heapifying: ");
    disp(a, n);
}
