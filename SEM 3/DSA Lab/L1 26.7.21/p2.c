#include <stdio.h>
int main()
{
    float n;
    printf("\nEnter a number: ");
    scanf("%f", &n);
    int a= n;
    while(1)
    {
        if(n==1)//subsequent division by results in a 1, then it a power of two
        {
            printf("%d is a power of two", a);
            break;
        }
        if(n<1)//if subsequent divison falls below 1, the number is not a power of 2
        {
            printf("%d is not a power of two", a);
            break;
        }
        n=n/2;
    }
}