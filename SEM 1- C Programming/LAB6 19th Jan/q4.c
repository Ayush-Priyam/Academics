#include <stdio.h>
int fact(int);
int main()
{
    int a;
    printf("\nEnter a number: ");
    scanf("%d", &a);
    printf("\nFactorial= %d.", fact(a));
    return 0;
}
int fact(int x)
{
    int f=1;
    for(int i=1;i<=x;i++) f=f*i;
    return f;
}