#include <stdio.h>
int sum()
{
    int sum = 0, n1;
    printf("Enter no, enter -1 to stop: \n");
    for (int i = 1;; i++)
    {
        scanf("%d", &n1);
        if (n1 == -1)
            break;
        sum = sum + n1;
    }
    return sum;
}
int rsum(int n)
{
    if (n == -1)
        return 0;
    else
    {
        int n1;
        scanf("%d", &n1);
        return n + rsum(n1);
    }
}
int main()
{
    printf("Iteration:\n");
    int s = sum();
    printf("Iteration Sum= %d\n", s);
    printf("\nRecursion: \nEnter no, enter -1 to stop: \n");
    printf("Recursion Sum= %d", rsum(0));
}