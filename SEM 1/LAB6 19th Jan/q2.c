#include <stdio.h>
float sub(float, float);
int main()
{
    float a, b;
    printf("\nEnter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("\nSubtraction= %f", sub(a, b));
    return 0;
}
float sub(float x, float y)
{
    return x-y;
}