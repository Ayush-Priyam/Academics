#include <stdio.h>
void hanoi(int n, char irod, char frod, char mrod)
{
    if (n == 1)
    {
        printf("Move disk 1 from rod %c to rod %c\n", irod, frod);
        return;
    }
    hanoi(n - 1, irod, mrod, frod);
    printf("Move disk %d from rod %c to rod %c\n", n, irod, frod);
    hanoi(n - 1, mrod, frod, irod);
}
int main()
{
    int n;
    printf("Enter no of disks: ");
    scanf("%d", &n);
    hanoi(n, 'A', 'C', 'B');
    return 0;
}