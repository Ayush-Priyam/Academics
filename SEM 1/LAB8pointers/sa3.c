#include <stdio.h>
int main()
{
    int a, b;
    printf("\nEnter two numbers:");
    scanf("%d %d", &a, &b);
    printf("\nSum of %d and %d is %d",a, b, *&a + *&b);
return 0;
}