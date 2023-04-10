#include <stdio.h>
void band(int);
void bor(int);
void bxor(int);
void bshift(int);
void bmd(int);
int main()
{
    int a;
    printf("\nEnter a number: ");
    scanf("%d", &a);
    band(a);
    bor(a);
    bxor(a);
    bshift(a);
    bmd(a);
    return 0;
}
void band(int a)//using Bitwise AND &
{
    if(a&1==1) printf("Odd \n");
    else printf("Even \n");
}
void bor(int a)//using Bitwise OR |
{
    if((a|1)==a)
        printf("Odd \n");
    else
        printf("Even \n");
}
void bxor(int a)//using Bitwise XOR ^
{
    if ((a ^ 1) == (a+1))
        printf("Even \n");
    if ((a ^ 1) == (a - 1))
        printf("Odd \n");
}
void bshift(int a)//using Bitwise Right Shift >>
{
    if(2*(a>>1)<a)//right shift by 1 gives the half the number
        printf("Odd \n");
    else
        printf("Even \n");
}
void bmd(int a)//using multiplication and division operators * /
{
    int b=a/2;
    if((2*b)==a) 
        printf("Even");
    else 
        printf("Odd");
}