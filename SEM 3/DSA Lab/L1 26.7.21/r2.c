#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("\n enter an integer: ");
    scanf("%d", &n);
    while (n != 0)
    {
        count = count + (n & 1);
        n= n >> 1;
    }
    printf("The total number of 1s are %d", count);
    return 0;
}