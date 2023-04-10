#include <stdio.h>
int fact(int);
int main()
{
    int a;
    printf("\nEnter a number: ");
    scanf("%d", &a);
    printf("\nPrime numbers from 1 to n= ");
    for(int i=2; i<=a;i++)
    {
        if(fact(i)==0)
            printf("%d,", i);
    }
    return 0;
}
int fact(int x)
{
    for (int i = 2; i <= x/2; i++)
    {
        if(x%i==0) return 1;
    }
    return 0;
}