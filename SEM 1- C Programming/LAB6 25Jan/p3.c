#include <stdio.h>
#include <math.h>
double POWER(int,int);
int main()
{
    int a, b;
    printf("\nEnter two numbers to calculate a^b: ");
    scanf("%d %d", &a,&b);
    printf("\na^b= %lf",POWER(a, b));
    return 0;
}
double POWER(int x, int y)
{
    return pow(x, y);
}