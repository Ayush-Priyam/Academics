#include <stdio.h>
int dig(int);
int main()
{
    int a;
    printf("\nEnter a number: ");
    scanf("%d", &a);
    printf("Number of digits= %d", dig(a));
    return 0;
}
int dig(int x)
{
    if(x/10==0) return 1;
    else
       return(1+dig(x/10));
}