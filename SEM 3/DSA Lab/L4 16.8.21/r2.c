
#include <stdio.h>
int sum(int n)
{
    int i, sum = 0;
    while (n != 0)
    {
        printf("Enter no %d: ", n);
        scanf("%d", &i);
        sum = sum + i;
        n--;
    }
    return sum;
}
int rsum(int n)
{
    int i;
    if (n == 0)
        return n;
    else
    {
        printf("Enter no %d: ", n);
        scanf("%d", &i);
        return i + rsum(n - 1);
    }
}
int main()
{
    int n;
    printf("Enter a  no.: ");
    scanf("%d", &n);
    printf("Sum= %d,%d", sum(n), rsum(n));
}