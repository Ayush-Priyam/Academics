#include <stdio.h>
int dig(int);
int main()
{
    int a;
    printf("\nEnter a number: ");
    scanf("%d", &a);
    printf("\nDigits= %d.", dig(a));
    return 0;
}
int dig(int x)
{
    int f=0;
    while(x!=0)
    {
        f++;
        x/=10;
    }
    return f;
}