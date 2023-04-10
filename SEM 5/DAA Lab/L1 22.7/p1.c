//Write a program to store random numbers into an array of n integers and then find out
//the smallest and largest number stored in it.n is the user input.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int init(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        // scanf("%d", &a[i]);
        a[i] = rand() % 100;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
}
int largest(int *a, int n)
{
    int l=a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > l)
            l = a[i];
    }
    return l;
}
int smallest(int *a, int n)
{
    int s = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < s)
            s = a[i];
    }
    return s;
}
int main()
{
    srand(0);
    int n, l,s;
    printf("\nEnter size: ");
    scanf("%d", &n);
    int a[n];
    init(a,n);
    l= largest(a, n);
    s= smallest(a, n);
    printf("\nThe largest number= %d\n The smallest no=%d", l, s);
    return 0;
}